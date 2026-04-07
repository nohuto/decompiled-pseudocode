/*
 * XREFs of ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180022CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x180004A70 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180022DA0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x180024B68 (-UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x180036D70 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x180044790 (-_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180085DFC (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_UpdateClipRegion@CAccent@@IEAAXXZ @ 0x180086664 (-_UpdateClipRegion@CAccent@@IEAAXXZ.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x1800866C0 (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
 */

__int64 __fastcall CAccent::ValidateVisual(CAccent *this)
{
  int v2; // ecx
  int v3; // eax
  unsigned int v4; // eax
  int updated; // edi
  unsigned int v7; // eax

  v2 = *((_DWORD *)this + 70);
  v3 = *((_DWORD *)this + 20);
  if ( (unsigned int)(v2 - 2) > 3 )
  {
    if ( (v3 & 0x1000) != 0 )
    {
      updated = CAccent::_UpdateResources((struct CRenderDataVisual **)this);
      if ( updated < 0 )
      {
        v7 = 850;
        goto LABEL_32;
      }
      *((_DWORD *)this + 20) &= ~0x1000u;
      v3 = *((_DWORD *)this + 20);
    }
    if ( (v3 & 0x2000) != 0 )
    {
      CAccent::_UpdateTransitionGradient(this);
      *((_DWORD *)this + 20) &= ~0x2000u;
      goto LABEL_8;
    }
  }
  else
  {
    if ( v2 != 4 )
    {
      if ( (v3 & 0x10000) != 0 && v2 == 3 && *((_QWORD *)this + 42) )
      {
        CAccent::_UpdateAccentBlurBehind(this);
LABEL_7:
        *((_DWORD *)this + 20) &= 0xFFFF8FFF;
LABEL_8:
        v3 = *((_DWORD *)this + 20);
        goto LABEL_9;
      }
      if ( v2 != 5 )
        goto LABEL_7;
      if ( !*((_QWORD *)this + 44) )
        goto LABEL_7;
      if ( (v3 & 0x1000) == 0 )
        goto LABEL_7;
      updated = CAccent::UpdateAcrylicBackgroundBrush(this);
      if ( updated >= 0 )
        goto LABEL_7;
      v7 = 877;
LABEL_32:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v7);
      CAccent::_CleanupNonStaticsResources(this);
      return (unsigned int)updated;
    }
    if ( (v3 & 0x1000) != 0 && *((_QWORD *)this + 43) )
    {
      updated = CAccent::_UpdateAcrylicBlurBehind(this);
      if ( updated < 0 )
      {
        v7 = 864;
        goto LABEL_32;
      }
      v3 = *((_DWORD *)this + 20);
    }
    v3 &= 0xFFFF8FFF;
    *((_DWORD *)this + 20) = v3;
  }
LABEL_9:
  v4 = v3 & 0xFFFEFFFF;
  *((_DWORD *)this + 20) = v4;
  if ( (v4 & 0x8000) != 0 )
  {
    CAccent::_UpdateClipRegion(this);
    *((_DWORD *)this + 20) &= ~0x8000u;
  }
  updated = CRenderDataVisual::ValidateVisual(this);
  if ( updated < 0 )
  {
    v7 = 893;
    goto LABEL_32;
  }
  return (unsigned int)updated;
}
