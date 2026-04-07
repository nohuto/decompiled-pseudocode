/*
 * XREFs of ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180004A70
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x18000491C (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18000B500 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180022CA0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x180004B18 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x180004E58 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x180004EE4 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x180036D70 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAccent::_UpdateResources(struct CRenderDataVisual **this)
{
  int updated; // edi
  const struct ACCENT_POLICY *v3; // rcx
  const struct ACCENT_POLICY *v4; // rcx
  struct CVisual *v6; // r9
  unsigned int v7; // eax

  updated = 0;
  v3 = (const struct ACCENT_POLICY *)(this + 35);
  if ( (unsigned int)(*(_DWORD *)v3 - 2) > 3 )
  {
    if ( CAccent::s_IsPolicyActive(v3) )
    {
      updated = CAccent::_EnsureBackgroundVisual((CAccent *)this, v4, this + 40, 0LL);
      if ( updated < 0 )
      {
        v7 = 804;
        goto LABEL_11;
      }
    }
    if ( *((_BYTE *)this + 312) )
    {
      v6 = this[40];
      *((_DWORD *)this + 98) = 0;
      updated = CAccent::_EnsureBackgroundVisual(
                  (CAccent *)this,
                  (const struct ACCENT_POLICY *)(this + 37),
                  this + 41,
                  v6);
      if ( updated < 0 )
      {
        v7 = 815;
LABEL_11:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v7);
        CAccent::_CleanupNonStaticsResources((CAccent *)this);
        return (unsigned int)updated;
      }
    }
    updated = CAccent::_UpdateBackgroundGeometry((CAccent *)this);
    if ( updated < 0 )
    {
      v7 = 817;
      goto LABEL_11;
    }
  }
  return (unsigned int)updated;
}
