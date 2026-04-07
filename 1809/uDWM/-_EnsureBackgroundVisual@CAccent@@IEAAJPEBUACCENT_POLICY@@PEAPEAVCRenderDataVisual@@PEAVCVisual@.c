/*
 * XREFs of ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x180004E58
 * Callers:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180004A70 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 * Callees:
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x180004EE4 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180026DD8 (-Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAccent::_EnsureBackgroundVisual(
        CAccent *this,
        const struct ACCENT_POLICY *a2,
        struct CRenderDataVisual **a3,
        struct CVisual *a4)
{
  int inserted; // ebx
  _QWORD *v8; // r8
  unsigned int v10; // eax

  inserted = 0;
  if ( CAccent::s_IsPolicyActive(a2) && !*v8 )
  {
    inserted = CRenderDataVisual::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), a3);
    if ( inserted < 0 )
    {
      v10 = 702;
    }
    else
    {
      inserted = VisualCollection::InsertRelative((CAccent *)((char *)this + 32), *a3, a4, 1, 1);
      if ( inserted >= 0 )
        return (unsigned int)inserted;
      v10 = 703;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v10);
    if ( *a3 )
    {
      CBaseObject::Release(*a3);
      *a3 = 0LL;
    }
  }
  return (unsigned int)inserted;
}
