/*
 * XREFs of MiPageFileNoFreeSpace @ 0x1402CE704
 * Callers:
 *     MiGatherPagefilePages @ 0x14014B04C (MiGatherPagefilePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeModifiedReservations @ 0x1402CE220 (MiFreeModifiedReservations.c)
 *     MiIssuePageExtendRequest @ 0x1402CE42C (MiIssuePageExtendRequest.c)
 *     MiCauseOverCommitPopup @ 0x1402D986C (MiCauseOverCommitPopup.c)
 */

__int64 __fastcall MiPageFileNoFreeSpace(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  int v7; // r12d
  _QWORD *v8; // rcx
  unsigned __int8 OldIrql; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int128 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  unsigned int v14; // r9d
  unsigned int v15; // edx
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 256);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 1LL;
  MiFreeModifiedReservations(a1, 1);
  v6 = 0LL;
  v7 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  if ( *(_QWORD *)(a1 + 24) )
  {
    v8 = *(_QWORD **)(v2 + 904);
    if ( *v8 != v2 + 896 )
      __fastfail(3u);
    *a2 = v2 + 896;
    a2[1] = v8;
    *v8 = a2;
    *(_QWORD *)(v2 + 904) = a2;
  }
  else
  {
    *(_BYTE *)(a1 + 206) |= 1u;
    v7 = 1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  *(_QWORD *)&v11 = OldIrql;
  __writecr8(OldIrql);
  if ( v7 == 1 )
  {
    *(_QWORD *)&v11 = 2575857425LL;
    *a2 = 2575857425LL;
    v12 = *(_QWORD *)(v2 + 8552);
    v13 = *(_QWORD *)(v2 + 8424);
    if ( v13 > v12 )
      v13 = *(_QWORD *)(v2 + 8552);
    if ( (*(_BYTE *)(a1 + 204) & 0x10) == 0 )
    {
      v11 = v12 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
      if ( v13 > (*((_QWORD *)&v11 + 1) & 0xFFFFFFFFFFFFFFF8uLL) && v12 < *(_QWORD *)(v2 + 7176) )
      {
        MiCauseOverCommitPopup(v2);
LABEL_27:
        *(_QWORD *)&v11 = *(_QWORD *)(v2 + 8552);
        if ( (unsigned __int64)v11 < *(_QWORD *)(v2 + 7176) )
          *(_QWORD *)&v11 = MiIssuePageExtendRequest(v2, v5, 6, 0);
        return v11;
      }
      if ( *(_QWORD *)(v2 + 8560) >= 0x1000uLL )
      {
        v14 = *(_DWORD *)(v2 + 7896);
        v15 = 0;
        if ( v14 )
        {
          v16 = v2 + 7904;
          do
          {
            if ( (*(_BYTE *)(*(_QWORD *)v16 + 204LL) & 0x50) == 0 )
            {
              if ( v6 + *(_QWORD *)(*(_QWORD *)v16 + 24LL) < v6 )
                break;
              v6 += *(_QWORD *)(*(_QWORD *)v16 + 24LL);
            }
            ++v15;
            v16 += 8LL;
          }
          while ( v15 < v14 );
        }
        v17 = *(_QWORD *)(v2 + 8560);
        if ( v17 > v6 )
        {
          v5 = v17 - v6;
          if ( v5 )
            goto LABEL_27;
        }
      }
    }
  }
  return v11;
}
