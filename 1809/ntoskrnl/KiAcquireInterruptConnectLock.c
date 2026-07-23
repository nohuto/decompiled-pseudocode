/*
 * XREFs of KiAcquireInterruptConnectLock @ 0x14016DF38
 * Callers:
 *     KeMaskInterrupt @ 0x14016D648 (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x14016D794 (KiDisconnectInterruptCommon.c)
 *     KiConnectInterrupt @ 0x14016DDC0 (KiConnectInterrupt.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x1400D6F10 (KeSetSystemGroupAffinityThread.c)
 */

struct _KPRCB *__fastcall KiAcquireInterruptConnectLock(int a1, unsigned __int8 *a2, struct _GROUP_AFFINITY *a3)
{
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *result; // rax
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  v4 = KiProcessorBlock[a1];
  *(_QWORD *)&Affinity.Group = 0LL;
  Affinity.Group = *(unsigned __int8 *)(v4 + 208);
  Affinity.Mask = *(_QWORD *)(v4 + 200);
  KeSetSystemGroupAffinityThread(&Affinity, a3);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  result = (struct _KPRCB *)(unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
  {
    result = KeGetCurrentPrcb();
    _InterlockedOr((volatile signed __int32 *)result->SchedulerAssist, 0x10000u);
  }
  *a2 = CurrentIrql;
  return result;
}
