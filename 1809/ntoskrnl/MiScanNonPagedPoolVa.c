/*
 * XREFs of MiScanNonPagedPoolVa @ 0x1401636E0
 * Callers:
 *     MiFindContiguousMemoryInPool @ 0x1401626D4 (MiFindContiguousMemoryInPool.c)
 *     MiFindNonPagedPoolVa @ 0x1401635BC (MiFindNonPagedPoolVa.c)
 *     MiRemoveFreePoolMemoryFromDump @ 0x1402ACA00 (MiRemoveFreePoolMemoryFromDump.c)
 *     MiScrubNonPagedPool @ 0x140850338 (MiScrubNonPagedPool.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     RtlFindNextForwardRunClearCappedEx @ 0x14015B220 (RtlFindNextForwardRunClearCappedEx.c)
 *     MiScanLeafNonPagedPool @ 0x1401638F0 (MiScanLeafNonPagedPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiScanNonPagedPoolVa(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _SLIST_HEADER *v5; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // r13
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r12
  __int64 v10; // rsi
  unsigned __int64 NextForwardRunClearCapped; // r15
  unsigned __int64 v12; // rsi
  __int64 result; // rax
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v16; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-68h] BYREF
  int v19; // [rsp+C0h] [rbp+8h]
  int v21; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v22; // [rsp+D8h] [rbp+20h]

  v21 = a3;
  v19 = a1;
  v5 = &qword_14043B118[25 * a2];
  v6 = *(&v5[24].Alignment + (int)a3);
  v7 = (__int64)&v5[(int)a3 + 21];
  if ( *(_BYTE *)(a4 + 48) == 1 )
    v6 = *(_QWORD *)(a4 + 40);
  v8 = v6 >> 9;
  v9 = v6 >> 9;
  v10 = -1LL;
  v17 = (unsigned __int64)(a1 + 511) >> 9;
  v22 = -1LL;
  while ( 1 )
  {
    while ( 1 )
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCappedEx(v7, v8, a3, &v16);
      if ( !NextForwardRunClearCapped )
        break;
      v12 = v16;
      if ( v16 >= v22 )
        return -1LL;
      if ( NextForwardRunClearCapped >= v17 )
      {
        if ( v8 != v9 || v16 == v8 || v17 != 1 || *(_DWORD *)a4 )
        {
          if ( (v6 >> 9 < v16 || v6 >> 9 >= v8) && *(_DWORD *)a4 <= 1u )
            v6 = v16 << 9;
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&v5[19].Alignment, &LockHandle);
          if ( v6 == *(&v5[24].Alignment + v21) )
          {
            v6 = v12 << 9;
            *(&v5[24].Alignment + v21) = v12 << 9;
          }
          else
          {
            v6 = v12 << 9;
          }
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v12 = v16;
          }
          __writecr8(OldIrql);
        }
        if ( *(_BYTE *)(a4 + 48) == 1 && v6 < v12 << 9 )
          v6 = v12 << 9;
        result = MiScanLeafNonPagedPool(v19, a2, v21, a4, v12 << 9, NextForwardRunClearCapped << 9, v6);
        if ( result != -1 )
          return result;
      }
      v8 = v12 + NextForwardRunClearCapped;
      v10 = v22;
    }
    if ( v10 != -1 || !v9 || *(_BYTE *)(a4 + 48) )
      break;
    v8 = 0LL;
    v22 = v9;
    v10 = v9;
    v9 = 0LL;
  }
  return -1LL;
}
