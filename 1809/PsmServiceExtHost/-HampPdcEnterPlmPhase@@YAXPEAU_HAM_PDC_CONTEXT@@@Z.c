/*
 * XREFs of ?HampPdcEnterPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18006DE40
 * Callers:
 *     ?HampPdcEnterExitPlmPhase@@YAJPEAXK@Z @ 0x18006DCD0 (-HampPdcEnterExitPlmPhase@@YAJPEAXK@Z.c)
 * Callees:
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000FAC0 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000FB0C (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall HampPdcEnterPlmPhase(struct _HOST_ACTIVITY_MANAGER **a1)
{
  struct _HOST_ACTIVITY_MANAGER *v2; // rcx
  unsigned __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  HampManagerAcquireLockExclusive(*a1);
  RtlQueryUnbiasedInterruptTime(&v3);
  v2 = a1[3];
  *((_DWORD *)a1 + 11) = v3 / 0x2710;
  TpPostWork(v2);
  HampManagerReleaseLockExclusive(*a1);
  HampPdcNotifyCsState((struct _HAM_PDC_CONTEXT *)a1, 1u);
}
