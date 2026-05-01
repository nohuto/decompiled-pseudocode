/*
 * XREFs of ?HampManagerAddDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002D508
 * Callers:
 *     ?HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002CCA8 (-HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPE.c)
 * Callees:
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000FB0C (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall HampManagerAddDependencyGroup(struct _HOST_ACTIVITY_MANAGER *a1, struct _HAM_DEPENDENCY_GROUP *a2)
{
  struct _HOST_ACTIVITY_MANAGER *v4; // rbx
  struct _HOST_ACTIVITY_MANAGER **v5; // rcx

  HampManagerAcquireLockExclusive(a1);
  v4 = (struct _HAM_DEPENDENCY_GROUP *)((char *)a2 + 40);
  v5 = (struct _HOST_ACTIVITY_MANAGER **)*((_QWORD *)a1 + 35);
  if ( *v5 != (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 272) )
    __fastfail(3u);
  *((_QWORD *)v4 + 1) = v5;
  *(_QWORD *)v4 = (char *)a1 + 272;
  *v5 = v4;
  *((_QWORD *)a1 + 35) = v4;
  ++*((_QWORD *)a1 + 33);
  HampManagerReleaseLockExclusive(a1);
}
