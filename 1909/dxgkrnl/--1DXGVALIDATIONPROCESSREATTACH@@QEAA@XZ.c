/*
 * XREFs of ??1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C003DD38
 * Callers:
 *     DxgEnumHandleChildrenCB @ 0x1C0231090 (DxgEnumHandleChildrenCB.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGVALIDATIONPROCESSREATTACH::~DXGVALIDATIONPROCESSREATTACH(DXGVALIDATIONPROCESSREATTACH *this)
{
  if ( *(_BYTE *)this )
    KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 8));
}
