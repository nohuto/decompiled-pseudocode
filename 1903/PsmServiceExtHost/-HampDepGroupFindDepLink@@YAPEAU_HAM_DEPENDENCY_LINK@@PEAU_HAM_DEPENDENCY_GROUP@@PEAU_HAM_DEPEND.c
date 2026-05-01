/*
 * XREFs of ?HampDepGroupFindDepLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEPENDENCY_LINK_ID@@@Z @ 0x18002FFC4
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002FA28 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z @ 0x1800787F4 (-HampDepGroupRemoveDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0W4_HAM_HOST_DEPENDENCY_TYPE@@@Z.c)
 * Callees:
 *     ?HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18003A3B0 (-HampDepGroupCompareDependencyLinkForRbTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _HAM_DEPENDENCY_LINK *__fastcall HampDepGroupFindDepLink(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _HAM_DEPENDENCY_LINK_ID *a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v4; // rbx
  int v5; // edi
  int v6; // eax
  unsigned __int64 v7; // rax

  v2 = (unsigned __int64)a1 + 72;
  v4 = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && v4 )
    v4 ^= v2;
  v5 = *(_BYTE *)(v2 + 8) & 1;
  while ( v4 )
  {
    v6 = HampDepGroupCompareDependencyLinkForRbTree(a2, (struct _RTL_BALANCED_NODE *)v4);
    if ( v6 >= 0 )
    {
      if ( v6 <= 0 )
        return (struct _HAM_DEPENDENCY_LINK *)v4;
      v7 = *(_QWORD *)(v4 + 8);
    }
    else
    {
      v7 = *(_QWORD *)v4;
    }
    if ( v5 && v7 )
      v4 ^= v7;
    else
      v4 = v7;
  }
  return (struct _HAM_DEPENDENCY_LINK *)v4;
}
