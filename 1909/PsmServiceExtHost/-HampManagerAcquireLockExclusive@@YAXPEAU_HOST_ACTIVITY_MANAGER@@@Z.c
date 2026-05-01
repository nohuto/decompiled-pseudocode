/*
 * XREFs of ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180030900
 * Callers:
 *     ?HampManagerAddDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000AD20 (-HampManagerAddDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampClientRemove@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000B334 (-HampClientRemove@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000C41C (-HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000CAC8 (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800252A0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampClientInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180030860 (-HampClientInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180035404 (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BFE0 (-HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampManagerRemoveDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003E71C (-HampManagerRemoveDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampPdcEnterPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007BB60 (-HampPdcEnterPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007BBBC (-HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007BF60 (-HampPdcWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampManagerAcquireLockExclusive(struct _HOST_ACTIVITY_MANAGER *a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx

  v1 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFC00uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x400uLL;
    ++Value[11];
  }
  RtlAcquireSRWLockExclusive(a1);
  *((_DWORD *)a1 + 2) = GetCurrentThreadId();
}
