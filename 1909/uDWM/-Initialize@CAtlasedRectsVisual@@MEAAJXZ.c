/*
 * XREFs of ?Initialize@CAtlasedRectsVisual@@MEAAJXZ @ 0x180025590
 * Callers:
 *     ?Initialize@CButton@@MEAAJXZ @ 0x1800250C0 (-Initialize@CButton@@MEAAJXZ.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z @ 0x180093AB0 (-Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z.c)
 * Callees:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x1800255C0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAtlasedRectsVisual::Initialize(CAtlasedRectsVisual *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  void *v4; // [rsp+28h] [rbp-10h]

  v1 = CVisual::Initialize(this);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x20u, v4);
  return v2;
}
