/*
 * XREFs of ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGGLOBAL@@VDXGPROCESS@@@@QEBAPEAVDXGPROCESS@@XZ @ 0x1C002274C
 * Callers:
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C017C474 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ @ 0x1C0243E60 (-HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ.c)
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C0244008 (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGNODELIST<DXGGLOBAL,DXGPROCESS>::ITERATOR::GetCurrent(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = a1[1];
  if ( v1 == *a1 )
    return 0LL;
  else
    return (v1 - 8) & -(__int64)(v1 != 0);
}
