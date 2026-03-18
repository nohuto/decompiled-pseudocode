/*
 * XREFs of KiInitializeDynamicProcessorDpc @ 0x1405AB130
 * Callers:
 *     <none>
 * Callees:
 *     KiIpiSendPacket @ 0x140098DB4 (KiIpiSendPacket.c)
 *     KeAddProcessorAffinityEx @ 0x14009E060 (KeAddProcessorAffinityEx.c)
 *     KeSetAffinityProcess @ 0x14019AD38 (KeSetAffinityProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KiReconfigureNodeSchedulingInformation @ 0x1402A34BC (KiReconfigureNodeSchedulingInformation.c)
 *     KeSignalCallDpcSynchronize @ 0x1402AA8B0 (KeSignalCallDpcSynchronize.c)
 *     KiConfigureSchedulingInformation @ 0x14059F060 (KiConfigureSchedulingInformation.c)
 *     KiConfigureProcessorBlock @ 0x14059F5D4 (KiConfigureProcessorBlock.c)
 *     KiInitializeProcessor @ 0x14059FC40 (KiInitializeProcessor.c)
 *     KeRestoreMtrrBroadcast @ 0x14059FE78 (KeRestoreMtrrBroadcast.c)
 *     KiUpdateNumberProcessors @ 0x1405AB31C (KiUpdateNumberProcessors.c)
 */

__int64 __fastcall KiInitializeDynamicProcessorDpc(__int64 a1, _QWORD **a2, volatile signed __int32 *a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v9; // rcx
  __int64 result; // rax
  _DWORD v11[44]; // [rsp+30h] [rbp-D8h] BYREF

  memset(&v11[2], 0, 0xA0uLL);
  if ( (unsigned int)KeSignalCallDpcSynchronize(a4) )
  {
    KiUpdateNumberProcessors(*((unsigned int *)*a2 + 9));
    KiInitializeProcessor((__int64)*a2);
    KiConfigureProcessorBlock((__int64)*a2);
    KeSetAffinityProcess((__int64)PsInitialSystemProcess, 0, (unsigned __int16 *)KeActiveProcessors);
    v11[0] = 1310721;
    memset(&v11[1], 0, 0xA4uLL);
    KeAddProcessorAffinityEx(v11, *((_DWORD *)*a2 + 9));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    KiIpiSendPacket(0, (int)v11, (__int64)KiInitDynamicProcessorIpi, 0LL, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v9 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v9);
    }
    __writecr8(CurrentIrql);
    KeRestoreMtrrBroadcast();
    ((void (__fastcall *)(_QWORD, char *))off_1404243F0[0])(0LL, (char *)*a2 + 36);
    KiConfigureSchedulingInformation((__int64)*a2, 1);
    KiReconfigureNodeSchedulingInformation((_QWORD *)(*a2)[24], *a2);
    KiBarrierWait = 0;
    *((_BYTE *)a2 + 8) = 1;
  }
  else
  {
    while ( !*((_BYTE *)a2 + 8) )
      _mm_pause();
  }
  result = KiConfigureSchedulingInformation((__int64)KeGetCurrentPrcb(), 1);
  _InterlockedDecrement(a3);
  return result;
}
