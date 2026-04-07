/*
 * XREFs of ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18000D880
 * Callers:
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x180002158 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18000B9E0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18000E1B0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x1800022B0 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@@@Z @ 0x180003140 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCRenderDataVisual@@PEAVCVisual@.c)
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x18000B9C8 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x1800299B8 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAccent::_UpdateResources(struct CRenderDataVisual **this)
{
  unsigned int v2; // edi
  const struct ACCENT_POLICY *v3; // rcx
  const struct ACCENT_POLICY *v4; // rcx
  int v5; // eax
  int updated; // eax
  struct CVisual *v8; // r9
  int v9; // eax
  void *v10; // [rsp+28h] [rbp-10h]

  v2 = 0;
  v3 = (const struct ACCENT_POLICY *)(this + 35);
  if ( (unsigned int)(*(_DWORD *)v3 - 2) > 3 )
  {
    if ( CAccent::s_IsPolicyActive(v3) )
    {
      v5 = CAccent::_EnsureBackgroundVisual((CAccent *)this, v4, this + 40, 0LL);
      v2 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x327u, v10);
        goto LABEL_11;
      }
    }
    if ( *((_BYTE *)this + 312) )
    {
      v8 = this[40];
      *((_DWORD *)this + 98) = 0;
      v9 = CAccent::_EnsureBackgroundVisual((CAccent *)this, (const struct ACCENT_POLICY *)(this + 37), this + 41, v8);
      v2 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x332u, v10);
LABEL_11:
        CAccent::_CleanupNonStaticsResources((CAccent *)this);
        return v2;
      }
    }
    updated = CAccent::_UpdateBackgroundGeometry((CAccent *)this);
    v2 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x334u, v10);
      goto LABEL_11;
    }
  }
  return v2;
}
