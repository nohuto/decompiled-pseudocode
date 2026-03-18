/*
 * XREFs of ?Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800899DC
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x180062944 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ??0CMit@@AEAA@PEAVCComposition@@@Z @ 0x18008994C (--0CMit@@AEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CMit@@AEAAJXZ @ 0x180089A48 (-Initialize@CMit@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMit::Create(struct CComposition *a1, struct CMit **a2)
{
  CMit *v4; // rax
  unsigned int v5; // ecx
  CMit *v6; // rdi
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx

  v4 = (CMit *)operator new(0x88uLL);
  if ( v4 )
    v6 = CMit::CMit(v4, a1);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = CMit::Initialize(v6);
    v9 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x57u);
    else
      *a2 = v6;
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x55u);
  }
  return v9;
}
