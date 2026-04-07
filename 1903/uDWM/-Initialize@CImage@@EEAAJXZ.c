/*
 * XREFs of ?Initialize@CImage@@EEAAJXZ @ 0x180039CA0
 * Callers:
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180039B54 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x1800252E0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CImage::Initialize(CImage *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  void *v5; // [rsp+28h] [rbp-10h]

  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x14u, v5);
  else
    *((_DWORD *)this + 72) = 1;
  return v3;
}
