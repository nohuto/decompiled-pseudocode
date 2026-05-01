/*
 * XREFs of ?HampHostDynamicDepInitialize@@YAXPEAU_HAM_DEPENDENCY_LINK@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z @ 0x18001270C
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002FA28 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x1800130A0 (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

void __fastcall HampHostDynamicDepInitialize(
        struct _HAM_DEPENDENCY_LINK *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _RM_HAM_ACTIVITY_HOST *a3,
        struct _HAM_HOST_DYNAMIC_DEPENDENCY *a4)
{
  *((_QWORD *)a4 + 6) = 0LL;
  *((_QWORD *)a4 + 7) = 0LL;
  *((_QWORD *)a4 + 8) = 0LL;
  *((_QWORD *)a4 + 9) = 0LL;
  memset_0(a4, 0, 0x30uLL);
  *((_BYTE *)a4 + 40) = 1;
  *((_QWORD *)a4 + 1) = a1;
  RmpAcquireGlobalLock();
  *((_QWORD *)a4 + 6) = RmHamHostReference(a2);
  *((_QWORD *)a4 + 7) = RmHamHostReference(a3);
  RmpReleaseGlobalLock();
}
