/*
 * XREFs of ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C003E550
 * Callers:
 *     OutputDuplPresent @ 0x1C0241128 (OutputDuplPresent.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 */

void __fastcall DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(DXGADAPTER **this)
{
  DXGADAPTER *v2; // rcx

  v2 = *this;
  if ( v2 )
    DXGADAPTER::ReleaseReference(v2);
  *this = 0LL;
}
