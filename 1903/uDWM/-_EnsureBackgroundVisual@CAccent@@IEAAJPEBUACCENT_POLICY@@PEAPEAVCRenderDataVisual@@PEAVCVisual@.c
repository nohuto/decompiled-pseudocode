/*
 * XREFs of ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x180002C20
 * Callers:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180028188 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x1800253D8 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x180028BC0 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAccent::_EnsureBackgroundVisual(
        CAccent *this,
        const struct ACCENT_POLICY *a2,
        struct CRenderDataVisual **a3,
        struct CVisual *a4)
{
  unsigned int v7; // ebx
  _QWORD *v8; // r8
  int v10; // eax
  int inserted; // eax
  void *v12; // [rsp+28h] [rbp-10h]

  v7 = 0;
  if ( CAccent::s_IsPolicyActive(a2) && !*v8 )
  {
    v10 = CRenderDataVisual::Create(a3);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x2C0u, v12);
    }
    else
    {
      inserted = VisualCollection::InsertRelative((CAccent *)((char *)this + 32), *a3, a4, 1, 1);
      v7 = inserted;
      if ( inserted >= 0 )
        return v7;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x2C1u, v12);
    }
    if ( *a3 )
    {
      CBaseObject::Release(*a3);
      *a3 = 0LL;
    }
  }
  return v7;
}
