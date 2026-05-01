/*
 * XREFs of ?HampPdcEnterPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007BB60
 * Callers:
 *     ?HampPdcEnterExitPlmPhase@@YAJPEAXK@Z @ 0x18007B9F0 (-HampPdcEnterExitPlmPhase@@YAJPEAXK@Z.c)
 * Callees:
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800308B4 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180030900 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
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
