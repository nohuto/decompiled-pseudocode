/*
 * XREFs of PerfLogExecutiveResourceAcquire @ 0x140313670
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x140050960 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140050D60 (ExpAcquireResourceExclusiveLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1400B1950 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140165F80 (ExAcquireSharedWaitForExclusive.c)
 *     ExpTryToAcquireResourceExclusiveLite @ 0x14031C074 (ExpTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     EtwpGetTrackingLockSlotForThread @ 0x140313534 (EtwpGetTrackingLockSlotForThread.c)
 */

signed __int64 __fastcall PerfLogExecutiveResourceAcquire(int a1, __int64 a2, unsigned int a3, int a4)
{
  struct _KPRCB *CurrentPrcb; // rsi
  __int16 Group; // r12
  unsigned __int64 v9; // rdi
  unsigned __int8 GroupIndex; // r15
  signed __int64 result; // rax
  signed __int64 v12; // rdx
  bool v13; // zf
  unsigned int v14; // [rsp+50h] [rbp+8h]

  CurrentPrcb = KeGetCurrentPrcb();
  Group = CurrentPrcb->Group;
  v9 = __rdtsc();
  GroupIndex = CurrentPrcb->GroupIndex;
  ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
  LOWORD(v14) = Group;
  HIWORD(v14) = GroupIndex;
  result = EtwpGetTrackingLockSlotForThread(a2, a1 & 0xFFFF0000);
  v12 = result;
  if ( result )
  {
    ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
    result = 4294967263LL;
    if ( ((a1 - 65569) & 0xFFFFFFDF) != 0 )
    {
      if ( ((a1 - 65585) & 0xFFFFFFDF) != 0 )
        return result;
      if ( *(_DWORD *)(v12 + 32) )
      {
        if ( *(_DWORD *)(v12 + 36) >= a3 )
        {
LABEL_16:
          *(_DWORD *)(v12 + 32) = 1;
          return result;
        }
LABEL_15:
        *(_DWORD *)(v12 + 36) = a3;
        goto LABEL_16;
      }
      *(_QWORD *)(v12 + 8) = 2LL;
    }
    else
    {
      v13 = *(_DWORD *)(v12 + 32) == 4;
      *(_QWORD *)(v12 + 8) = v9;
      if ( !v13 )
      {
        *(_QWORD *)v12 = 0LL;
        goto LABEL_14;
      }
      if ( *(_WORD *)(v12 + 24) == Group && *(_BYTE *)(v12 + 26) == GroupIndex )
      {
        *(_QWORD *)v12 = v9 - *(_QWORD *)v12;
        goto LABEL_14;
      }
    }
    *(_QWORD *)v12 = 1LL;
LABEL_14:
    result = v14;
    *(_DWORD *)(v12 + 24) = v14;
    *(_DWORD *)(v12 + 44) = a4;
    goto LABEL_15;
  }
  return result;
}
