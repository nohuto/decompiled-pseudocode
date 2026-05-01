/*
 * XREFs of ?HampPkgInitialize@@YAXPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAU_HAM_PACKAGE@@@Z @ 0x18000E920
 * Callers:
 *     ?HampPkgCreate@@YAJPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x18000E89C (-HampPkgCreate@@YAJPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     ?HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z @ 0x180030BA4 (-HamRcNodeInitialize@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_NODE@@2@Z.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

void __fastcall HampPkgInitialize(struct _HAM_USER *a1, struct _HAM_PACKAGE_INFO *a2, struct _HAM_PACKAGE *a3)
{
  __int128 v6; // xmm1

  memset_0(a3, 0, 0x160uLL);
  HamRcNodeInitialize((void (*)(struct _CEM_RC_OBJECT *))HampAppDestroy, a1, a3);
  *((_OWORD *)a3 + 6) = *(_OWORD *)a2;
  *((_OWORD *)a3 + 7) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a3 + 8) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a3 + 9) = *((_OWORD *)a2 + 3);
  *((_OWORD *)a3 + 10) = *((_OWORD *)a2 + 4);
  *((_OWORD *)a3 + 11) = *((_OWORD *)a2 + 5);
  *((_OWORD *)a3 + 12) = *((_OWORD *)a2 + 6);
  *((_OWORD *)a3 + 13) = *((_OWORD *)a2 + 7);
  *((_OWORD *)a3 + 14) = *((_OWORD *)a2 + 8);
  *((_OWORD *)a3 + 15) = *((_OWORD *)a2 + 9);
  *((_OWORD *)a3 + 16) = *((_OWORD *)a2 + 10);
  *((_OWORD *)a3 + 17) = *((_OWORD *)a2 + 11);
  *((_QWORD *)a3 + 36) = *((_QWORD *)a2 + 24);
  *((_DWORD *)a3 + 74) = *((_DWORD *)a2 + 50);
  *((_DWORD *)a3 + 86) = 128;
  *((_OWORD *)a3 + 6) = *(_OWORD *)a2;
  *((_OWORD *)a3 + 7) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a3 + 8) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a3 + 9) = *((_OWORD *)a2 + 3);
  *((_OWORD *)a3 + 10) = *((_OWORD *)a2 + 4);
  *((_OWORD *)a3 + 11) = *((_OWORD *)a2 + 5);
  *((_OWORD *)a3 + 12) = *((_OWORD *)a2 + 6);
  v6 = *((_OWORD *)a2 + 7);
  a2 = (struct _HAM_PACKAGE_INFO *)((char *)a2 + 128);
  *((_OWORD *)a3 + 13) = v6;
  *((_OWORD *)a3 + 14) = *(_OWORD *)a2;
  *((_OWORD *)a3 + 15) = *((_OWORD *)a2 + 1);
  *((_OWORD *)a3 + 16) = *((_OWORD *)a2 + 2);
  *((_OWORD *)a3 + 17) = *((_OWORD *)a2 + 3);
  *((_QWORD *)a3 + 36) = *((_QWORD *)a2 + 8);
  *((_DWORD *)a3 + 74) = *((_DWORD *)a2 + 18);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)a3 + 11) = a1;
  *((_QWORD *)a3 + 38) = 0LL;
  *((_QWORD *)a3 + 39) = 0LL;
  RtlInitializeSRWLock((char *)a3 + 304);
  *((_DWORD *)a3 + 78) = 0;
  RtlInitializeConditionVariable((char *)a3 + 320);
}
