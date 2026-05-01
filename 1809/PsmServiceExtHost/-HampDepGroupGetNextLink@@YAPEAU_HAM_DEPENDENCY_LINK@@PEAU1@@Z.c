/*
 * XREFs of ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x18002C3AC
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180026C40 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180027780 (-HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002A330 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x18002A530 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006A8A0 (-HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@.c)
 *     ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x18006A994 (-HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 * Callees:
 *     <none>
 */

struct _HAM_DEPENDENCY_LINK *__fastcall HampDepGroupGetNextLink(struct _HAM_DEPENDENCY_LINK *a1)
{
  unsigned __int64 v1; // rdx
  __int64 i; // rdx
  struct _HAM_DEPENDENCY_LINK *v3; // rcx

  v1 = *((_QWORD *)a1 + 1);
  if ( v1 )
  {
    v3 = *(struct _HAM_DEPENDENCY_LINK **)v1;
    if ( *(_QWORD *)v1 )
    {
      do
      {
        v1 = (unsigned __int64)v3;
        v3 = *(struct _HAM_DEPENDENCY_LINK **)v3;
      }
      while ( v3 );
    }
  }
  else
  {
    for ( i = *((_QWORD *)a1 + 2); ; i = *(_QWORD *)(v1 + 16) )
    {
      v1 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v1 || *(struct _HAM_DEPENDENCY_LINK **)v1 == a1 )
        break;
      a1 = (struct _HAM_DEPENDENCY_LINK *)v1;
    }
  }
  return (struct _HAM_DEPENDENCY_LINK *)v1;
}
