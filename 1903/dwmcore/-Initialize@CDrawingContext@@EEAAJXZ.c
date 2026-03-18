/*
 * XREFs of ?Initialize@CDrawingContext@@EEAAJXZ @ 0x1800467F0
 * Callers:
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18004675C (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180046820 (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDrawingContext::Initialize(struct CComposition **this)
{
  int v1; // eax
  unsigned int v2; // ecx
  unsigned int v3; // ebx

  v1 = CContentBounder::Create(this[2], this + 464);
  v3 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v1, 0xA3u, 0LL);
  return v3;
}
