/*
 * XREFs of ?SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x1801B876C
 * Callers:
 *     ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801B78E4 (-ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTEXTOVERRI.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetWorldUpVectorOverride(CVisual *this, struct D2D_VECTOR_3F *a2)
{
  CSparseStorage *v2; // r10
  __int64 z_low; // rcx

  v2 = (CVisual *)((char *)this + 216);
  z_low = *(_QWORD *)&a2->x - `CVisual::SetNotifiedWorldUpVector'::`2'::sc_defaultValue;
  if ( *(_QWORD *)&a2->x == `CVisual::SetNotifiedWorldUpVector'::`2'::sc_defaultValue )
    z_low = LODWORD(a2->z);
  if ( z_low )
    CSparseStorage::SetData(v2, 0xFu, 0xCu, a2);
  else
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) &= ~0x20000u;
}
