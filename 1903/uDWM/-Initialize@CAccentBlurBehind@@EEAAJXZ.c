/*
 * XREFs of ?Initialize@CAccentBlurBehind@@EEAAJXZ @ 0x18008BE00
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x1800252E0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x1800253D8 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAccentBlurBehind::Initialize(struct CRenderDataVisual **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  v2 = CVisual::Initialize((CVisual *)this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = CRenderDataVisual::Create(this + 35);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x532u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x531u);
  }
  return v3;
}
