/*
 * XREFs of ?Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800E0410
 * Callers:
 *     ?Initialize@CGlobalInputManager@@IEAAJXZ @ 0x1800DFF78 (-Initialize@CGlobalInputManager@@IEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CMit@@AEAAJXZ @ 0x1800E047C (-Initialize@CMit@@AEAAJXZ.c)
 *     ??0CMit@@AEAA@PEAVCComposition@@@Z @ 0x1800E0564 (--0CMit@@AEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CMit::Create(struct CComposition *a1, struct CMit **a2)
{
  CMit *v4; // rax
  __int64 v5; // rcx
  CMit *v6; // rdi
  signed int v7; // eax
  __int64 v8; // rcx
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
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x57u, 0LL);
    else
      *a2 = v6;
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x8007000E, 0x55u, 0LL);
  }
  return v9;
}
