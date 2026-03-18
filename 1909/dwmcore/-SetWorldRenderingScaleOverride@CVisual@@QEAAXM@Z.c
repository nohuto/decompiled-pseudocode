/*
 * XREFs of ?SetWorldRenderingScaleOverride@CVisual@@QEAAXM@Z @ 0x1801C3538
 * Callers:
 *     ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801C2938 (-ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVE.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800A46E4 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetWorldRenderingScaleOverride(CVisual *this, float a2)
{
  CSparseStorage *v2; // rcx
  float v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (CVisual *)((char *)this + 216);
  if ( LODWORD(a2) == `CVisual::SetWorldRenderingScaleOverride'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) &= ~0x40000u;
  else
    CSparseStorage::SetData(v2, 0xEu, 4u, &v3);
}
