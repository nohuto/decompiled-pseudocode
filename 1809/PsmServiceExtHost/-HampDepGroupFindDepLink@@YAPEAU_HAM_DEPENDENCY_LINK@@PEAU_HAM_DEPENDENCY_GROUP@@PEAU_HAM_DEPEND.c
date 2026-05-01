/*
 * XREFs of ?HampDepGroupFindDepLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@@Z @ 0x18000E760
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000E300 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x18006ACA4 (-HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z.c)
 * Callees:
 *     ?HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180038CA8 (-HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _HAM_DEPENDENCY_LINK *__fastcall HampDepGroupFindDepLink(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _HAM_DEPENDENCY_LINK_ID *a2)
{
  __int64 v2; // rax
  struct _RTL_BALANCED_NODE **v3; // rcx
  unsigned __int64 v5; // rbx
  int v6; // edi
  int v7; // eax
  unsigned __int64 v8; // rax

  v2 = *((_QWORD *)a1 + 10);
  v3 = (struct _RTL_BALANCED_NODE **)((char *)a1 + 72);
  v5 = (unsigned __int64)*v3;
  if ( (v2 & 1) != 0 && v5 )
    v5 ^= (unsigned __int64)v3;
  v6 = v2 & 1;
  while ( v5 )
  {
    v7 = HampDepGroupCompareDependencyLinkForRbTree(a2, (struct _RTL_BALANCED_NODE *)v5);
    if ( v7 >= 0 )
    {
      if ( v7 <= 0 )
        return (struct _HAM_DEPENDENCY_LINK *)v5;
      v8 = *(_QWORD *)(v5 + 8);
    }
    else
    {
      v8 = *(_QWORD *)v5;
    }
    if ( v6 && v8 )
      v5 ^= v8;
    else
      v5 = v8;
  }
  return (struct _HAM_DEPENDENCY_LINK *)v5;
}
