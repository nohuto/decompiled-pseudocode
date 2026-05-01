/*
 * XREFs of ?HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x1800694A8
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180026C40 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18006A5FC (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 * Callees:
 *     ?HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x180003704 (-HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionM.c)
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18000B4A8 (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall HampHostCanStaticallyDonateCommit(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2)
{
  int v4; // ecx
  unsigned __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)HampHostHasExternalResourceAccess((__int64)a1, 0x1Cu) )
  {
    v4 = RmpCommitValuesAdd(*((_QWORD *)a1 + 132), a2, &v6);
    if ( v4 >= 0 )
      return *((_QWORD *)a1 + 114) < v6 ? 0xC0EC0005 : 0;
  }
  else
  {
    return (unsigned int)-1058275323;
  }
  return (unsigned int)v4;
}
