/*
 * XREFs of CemRcObjectCleanup @ 0x180009F60
 * Callers:
 *     ?HampWakeContextDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180008470 (-HampWakeContextDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z @ 0x1800088A8 (-HamRcNodeCleanup@@YAXPEAU_HAM_RC_TREE_NODE@@@Z.c)
 *     ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180009E90 (-HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18003EEC0 (-HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampHostIdStoreSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x18006DA90 (-HampHostIdStoreSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     CempRcTableRemoveObject @ 0x180009F9C (CempRcTableRemoveObject.c)
 */

__int64 __fastcall CemRcObjectCleanup(_QWORD *a1)
{
  __int64 result; // rax

  if ( a1[3] )
    __int2c();
  if ( a1[2] != -1LL )
    result = CempRcTableRemoveObject(a1[4] & 0xFFFFFFFFFFFFFFFCuLL, a1);
  a1[4] |= 0xFFFFFFFFFFFFFFFCuLL;
  return result;
}
