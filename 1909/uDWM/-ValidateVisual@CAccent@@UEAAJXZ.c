/*
 * XREFs of ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18000E1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x18000B050 (-UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ.c)
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18000D880 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18000E300 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x1800299B8 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18002D65C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x18004039C (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18008C350 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x18008C4D8 (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
 */

__int64 __fastcall CAccent::ValidateVisual(CAccent *this)
{
  int v2; // ecx
  int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // edi
  int v9; // eax
  int updated; // eax
  int v11; // eax
  void *v12; // [rsp+28h] [rbp-10h]

  v2 = *((_DWORD *)this + 70);
  if ( (unsigned int)(v2 - 2) <= 3 && *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61) + 601LL) )
  {
    v3 = *((_DWORD *)this + 20);
    if ( v2 != 4 )
    {
      if ( (v3 & 0x10000) != 0 && v2 == 3 )
      {
        if ( *((_QWORD *)this + 42) )
          CAccent::_UpdateAccentBlurBehind(this);
        goto LABEL_8;
      }
      if ( v2 != 5
        || !*((_QWORD *)this + 44)
        || (v3 & 0x1000) == 0
        || (updated = CAccent::UpdateAcrylicBackgroundBrush((struct Windows::UI::Composition::ICompositionBrush **)this),
            v7 = updated,
            updated >= 0) )
      {
LABEL_8:
        *((_DWORD *)this + 20) &= 0xFFFFCFFF;
LABEL_9:
        v4 = *((_DWORD *)this + 20);
        goto LABEL_12;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x370u, v12);
LABEL_35:
      CAccent::_CleanupNonStaticsResources(this);
      return v7;
    }
    if ( (v3 & 0x1000) != 0 && *((_QWORD *)this + 43) )
    {
      v11 = CAccent::_UpdateAcrylicBlurBehind(this);
      v7 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x363u, v12);
        goto LABEL_35;
      }
      v3 = *((_DWORD *)this + 20);
    }
    v4 = v3 & 0xFFFFCFFF;
    *((_DWORD *)this + 20) = v4;
  }
  else
  {
    v4 = *((_DWORD *)this + 20);
    if ( (v4 & 0x1000) != 0 )
    {
      v9 = CAccent::_UpdateResources((struct CRenderDataVisual **)this);
      v7 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x355u, v12);
        goto LABEL_35;
      }
      *((_DWORD *)this + 20) &= ~0x1000u;
      v4 = *((_DWORD *)this + 20);
    }
    if ( (v4 & 0x2000) != 0 )
    {
      CAccent::_UpdateTransitionGradient(this);
      *((_DWORD *)this + 20) &= ~0x2000u;
      goto LABEL_9;
    }
  }
LABEL_12:
  v5 = v4 & 0xFFFEBFFF;
  *((_DWORD *)this + 20) = v5;
  if ( (v5 & 0x8000) != 0 )
  {
    if ( (*((_DWORD *)this + 71) & 0x210) != 0 )
    {
      CVisualProxy::SetClip(*((CVisualProxy **)this + 2), *((struct CBaseGeometryProxy **)this + 52));
      v5 = *((_DWORD *)this + 20);
    }
    *((_DWORD *)this + 20) = v5 & 0xFFFF7FFF;
  }
  v6 = CRenderDataVisual::ValidateVisual(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x380u, v12);
    goto LABEL_35;
  }
  return v7;
}
