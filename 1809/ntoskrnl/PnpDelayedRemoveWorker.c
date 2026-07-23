/*
 * XREFs of PnpDelayedRemoveWorker @ 0x1406EFAC0
 * Callers:
 *     PnpChainDereferenceComplete @ 0x1406EDEA8 (PnpChainDereferenceComplete.c)
 * Callees:
 *     PnpFreeWatchdog @ 0x140005AF8 (PnpFreeWatchdog.c)
 *     PnpAllocateWatchdog @ 0x140005D1C (PnpAllocateWatchdog.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     PnpDisableDelayedRemoveWorkerWatchdog @ 0x140289CA8 (PnpDisableDelayedRemoveWorkerWatchdog.c)
 *     PnpEnableDelayedRemoveWorkerWatchdog @ 0x140289D0C (PnpEnableDelayedRemoveWorkerWatchdog.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14059CEB4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14059CF10 (PpDevNodeLockTree.c)
 *     PipRemoveDevicesInRelationList @ 0x1406F0920 (PipRemoveDevicesInRelationList.c)
 */

void __fastcall PnpDelayedRemoveWorker(__int64 P)
{
  PVOID **v2; // rdx
  PVOID *v3; // r8
  PVOID *v4; // rax
  PVOID *v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  PVOID Pa; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_Pa; // [rsp+28h] [rbp-8h]

  p_Pa = &Pa;
  Pa = &Pa;
  PpDevNodeLockTree(1);
  PnpDelayedRemoveWorkerThread = (ULONG_PTR)KeGetCurrentThread();
  ExAcquireResourceExclusiveLite(&IopSurpriseRemoveListLock, 1u);
  v2 = (PVOID **)IopPendingSurpriseRemovals;
  if ( IopPendingSurpriseRemovals != &IopPendingSurpriseRemovals )
  {
    do
    {
      v3 = *v2;
      if ( *((_BYTE *)v2 + 104) )
      {
        if ( *((_DWORD *)*v2[8] + 2) == *(_DWORD *)*v2[8] )
        {
          if ( v3[1] != v2 || (v4 = v2[1], *v4 != v2) || (*v4 = v3, v3[1] = v4, v5 = p_Pa, *p_Pa != &Pa) )
LABEL_19:
            __fastfail(3u);
          v2[1] = p_Pa;
          *v2 = &Pa;
          *v5 = v2;
          p_Pa = (PVOID *)v2;
        }
        else
        {
          *((_BYTE *)v2 + 104) = 0;
        }
      }
      v2 = (PVOID **)v3;
    }
    while ( v3 != &IopPendingSurpriseRemovals );
  }
  PnpDelayedRemovePending = 0;
  ExReleaseResourceLite(&IopSurpriseRemoveListLock);
  while ( 1 )
  {
    v6 = Pa;
    if ( Pa == &Pa )
      break;
    if ( *((PVOID **)Pa + 1) != &Pa )
      goto LABEL_19;
    v7 = *(_QWORD *)Pa;
    if ( *(PVOID *)(*(_QWORD *)Pa + 8LL) != Pa )
      goto LABEL_19;
    Pa = *(PVOID *)Pa;
    *(_QWORD *)(v7 + 8) = &Pa;
    if ( P )
    {
      *(_QWORD *)(P + 16) = v6;
      *(_QWORD *)(P + 8) = v6[7];
      v8 = v6[7];
      if ( v8 )
        v9 = *(_QWORD *)(*(_QWORD *)(v8 + 312) + 40LL);
      else
        v9 = 0LL;
      *(_QWORD *)P = v9;
      *(_QWORD *)(P + 24) = PnpAllocateWatchdog();
      PnpEnableDelayedRemoveWorkerWatchdog(P);
    }
    PipRemoveDevicesInRelationList(v6);
    if ( P )
    {
      PnpDisableDelayedRemoveWorkerWatchdog(P);
      PnpFreeWatchdog(*(void **)(P + 24));
    }
  }
  PnpDelayedRemoveWorkerThread = 0LL;
  if ( P )
    ExFreePoolWithTag((PVOID)P, 0x54706E50u);
  PpDevNodeUnlockTree(1);
}
