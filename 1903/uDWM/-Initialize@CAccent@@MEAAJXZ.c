/*
 * XREFs of ?Initialize@CAccent@@MEAAJXZ @ 0x18003C880
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x1800252E0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAccent::Initialize(CAccent *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  void *v4; // [rsp+28h] [rbp-10h]

  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 74) = 6;
  *((_BYTE *)this + 312) = 0;
  v1 = CVisual::Initialize(this);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0xC7u, v4);
  return v2;
}
