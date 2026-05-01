/*
 * XREFs of ?HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x1800771B8
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C380 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x1800781DC (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 * Callees:
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18000C3E0 (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     ?HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x18000CD64 (-HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionM.c)
 */

__int64 __fastcall HampHostCanStaticallyDonateCommit(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2)
{
  int v4; // ecx
  unsigned __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)HampHostHasExternalResourceAccess((__int64)a1, 0x1Cu) )
  {
    v4 = RmpCommitValuesAdd(*((_QWORD *)a1 + 139), a2, &v6);
    if ( v4 >= 0 )
      return *((_QWORD *)a1 + 117) < v6 ? 0xC0EC0005 : 0;
  }
  else
  {
    return (unsigned int)-1058275323;
  }
  return (unsigned int)v4;
}
