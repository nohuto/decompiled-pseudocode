/*
 * XREFs of ??1DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0010C2C
 * Callers:
 *     DxgGetHandleDataCB @ 0x1C00F24C0 (DxgGetHandleDataCB.c)
 *     DxgEnumHandleChildrenCB @ 0x1C02001D0 (DxgEnumHandleChildrenCB.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGVALIDATIONPROCESSREATTACH::~DXGVALIDATIONPROCESSREATTACH(DXGVALIDATIONPROCESSREATTACH *this)
{
  if ( *(_BYTE *)this )
    KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 8));
}
