/*
 * XREFs of ?HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003E2B0
 * Callers:
 *     ?HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z @ 0x18003E0DC (-HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x18001A910 (CempLockTrackerMarkReleased.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800301FC (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

__int64 __fastcall HampHostTryEstimateRemainingQuiesceTime(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  HampHostAcquireLockSharedEx(a1, 0LL);
  RtlQueryUnbiasedInterruptTime(&v5);
  v2 = (unsigned int)(v5 / 0x2710) - *((_DWORD *)a1 + 167);
  v3 = 0;
  if ( (unsigned int)v2 <= *((_DWORD *)a1 + 168) )
    v3 = *((_DWORD *)a1 + 168) - v2;
  CempLockTrackerMarkReleased((unsigned int)(*((_DWORD *)a1 + 168) - v2), v2, 1u);
  RtlReleaseSRWLockShared(a1);
  return v3;
}
