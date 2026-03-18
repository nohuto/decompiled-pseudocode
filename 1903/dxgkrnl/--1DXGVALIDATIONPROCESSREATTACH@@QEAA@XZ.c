/*
 * XREFs of ??1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C003DBD8
 * Callers:
 *     DxgEnumHandleChildrenCB @ 0x1C0230A20 (DxgEnumHandleChildrenCB.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGVALIDATIONPROCESSREATTACH::~DXGVALIDATIONPROCESSREATTACH(DXGVALIDATIONPROCESSREATTACH *this)
{
  if ( *(_BYTE *)this )
    KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 8));
}
