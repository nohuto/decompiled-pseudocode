/*
 * XREFs of ?HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18003C280
 * Callers:
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18003C084 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 * Callees:
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18000C3E0 (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     ?HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x18000CD64 (-HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionM.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180019DA0 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     CempLockTrackerMarkReleased @ 0x18001A910 (CempLockTrackerMarkReleased.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800301FC (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

__int64 __fastcall HampHostCanDonate(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  RmpActivityHostQueryCommit((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64), 0LL, &v8, 0LL);
  if ( (int)RmpCommitValuesAdd(v8, a2, &v9) < 0 )
  {
    return (unsigned int)-1058275323;
  }
  else
  {
    HampHostAcquireLockSharedEx(a1, 0LL);
    if ( v9 > *((_QWORD *)a1 + 112) )
    {
      v6 = -1058275323;
    }
    else
    {
      v5 = (unsigned int)-((unsigned int)HampHostHasExternalResourceAccess((__int64)a1, 0x1Cu) == 0);
      v6 = v5 & 0xC0EC0005;
    }
    CempLockTrackerMarkReleased(v5, v4, 1u);
    RtlReleaseSRWLockShared(a1);
  }
  return v6;
}
