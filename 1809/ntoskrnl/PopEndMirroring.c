/*
 * XREFs of PopEndMirroring @ 0x14056C600
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6F10 (KeSetSystemGroupAffinityThread.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopInvokeSystemStateHandler @ 0x140569DB8 (PopInvokeSystemStateHandler.c)
 *     PopBuildMemoryImageHeader @ 0x14056C820 (PopBuildMemoryImageHeader.c)
 *     EtwKernelMemoryRundown @ 0x1408B845C (EtwKernelMemoryRundown.c)
 */

__int64 __fastcall PopEndMirroring(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v1; // rsi
  int v2; // ebx
  unsigned __int8 CurrentIrql; // cl
  int v4; // edi
  unsigned int v5; // eax
  bool v6; // zf
  unsigned int v7; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-29h] BYREF
  unsigned __int16 *v12[2]; // [rsp+48h] [rbp-19h] BYREF
  __int16 v13; // [rsp+58h] [rbp-9h]
  struct _KDPC Dpc; // [rsp+68h] [rbp+7h] BYREF
  int v15; // [rsp+C8h] [rbp+67h] BYREF

  v1 = (unsigned int)BugCheckParameter3;
  if ( !(_DWORD)BugCheckParameter3 )
  {
    if ( (BYTE4(xmmword_140542350) & 1) != 0 )
      EtwKernelMemoryRundown();
    KeSetEvent(PopSleeperHandoff, 0, 1u);
    KeWaitForSingleObject(&PopSleeperHandoff[1], Executive, 0, 0, 0LL);
    v2 = PopBuildMemoryImageHeader((PVOID)BugCheckParameter4);
    if ( v2 >= 0 )
    {
      Affinity.Reserved[1] = 0;
      *(_DWORD *)&Affinity.Group = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
      Affinity.Mask = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
      Affinity.Reserved[2] = 0;
      KeSetSystemGroupAffinityThread(&Affinity, 0LL);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      memset(&PopHibernateSystemContext, 0, 0x50uLL);
      dword_14043D620 = KeNumberProcessors_0;
      dword_14043D62C = KeNumberProcessors_0;
      dword_14043D628 = 1;
      if ( ((unsigned __int8)&SListHead & 0xF) != 0 )
        RtlRaiseStatus(-2147483646);
      SListHead = 0uLL;
      KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PopInvokeStateHandlerTargetProcessor, &PopHibernateSystemContext);
      v12[1] = (unsigned __int16 *)qword_1405426A8[0];
      v12[0] = (unsigned __int16 *)KeActiveProcessors;
      Dpc.Importance = 2;
      v13 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v15, v12) )
      {
        if ( v15 )
        {
          v4 = dword_14043D624;
          if ( !Dpc.DpcData )
            Dpc.Number = v15 + 1280;
          KeInsertQueueDpc(&Dpc, 0LL, 0LL);
          while ( v4 == dword_14043D624 )
            ;
        }
      }
      goto LABEL_20;
    }
    goto LABEL_24;
  }
  if ( (_DWORD)BugCheckParameter3 != 1 )
  {
    v2 = -1073741823;
    goto LABEL_24;
  }
  v2 = *(_DWORD *)(BugCheckParameter4 + 188);
  if ( v2 < 0 || (v2 = PopInvokeSystemStateHandler(PopHibernatePowerStateHandlerType, BugCheckParameter4), v2 < 0) )
  {
LABEL_24:
    IoAddTriageDumpDataBlock((int)&PopAction, 280);
    if ( qword_1404187D8 )
      IoAddTriageDumpDataBlock(qword_1404187D8, 472);
    if ( BugCheckParameter4 )
    {
      IoAddTriageDumpDataBlock(BugCheckParameter4, 456);
      v9 = *(_QWORD *)(BugCheckParameter4 + 168);
      if ( v9 )
        IoAddTriageDumpDataBlock(v9, 376);
      v10 = *(_QWORD *)(BugCheckParameter4 + 200);
      if ( v10 )
        IoAddTriageDumpDataBlock(v10, 992);
    }
    KeBugCheckEx(0xA0u, 9uLL, v2, v1, 0LL);
  }
  if ( PoResumeFromHibernate )
    v2 = 1073742484;
LABEL_20:
  v5 = v2;
  v6 = v2 == 1073742484;
  v7 = 0;
  if ( v6 )
    return v5;
  return v7;
}
