/*
 * XREFs of ?HampPkgFindInUser@@YAPEAU_HAM_PACKAGE@@PEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180010BCC
 * Callers:
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180010ACC (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 * Callees:
 *     ?HampPkgWaitForInitializationComplete@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180011B50 (-HampPkgWaitForInitializationComplete@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     CemRcTableFind @ 0x180017DB0 (CemRcTableFind.c)
 */

struct _HAM_PACKAGE *__fastcall HampPkgFindInUser(struct _HAM_USER *a1, struct _HAM_PACKAGE_INFO *a2)
{
  __int64 v2; // rax
  struct _HAM_PACKAGE *v3; // rbx

  v2 = CemRcTableFind((char *)a1 + 40, a2, HampPkgCompareByIdentity);
  v3 = 0LL;
  if ( v2 )
  {
    v3 = (struct _HAM_PACKAGE *)(v2 & ((unsigned __int128)-(__int128)(unsigned __int64)v2 >> 64));
    HampPkgWaitForInitializationComplete(v3);
  }
  return v3;
}
