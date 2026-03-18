/*
 * XREFs of ?Initialize@CDrawingContext@@EEAAJXZ @ 0x18008F070
 * Callers:
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18008EFE0 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18008F0A0 (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::Initialize(struct CComposition **this)
{
  int v1; // eax
  unsigned int v2; // ecx
  unsigned int v3; // ebx

  v1 = CContentBounder::Create(this[2], this + 464);
  v3 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v1, 0xA7u);
  return v3;
}
