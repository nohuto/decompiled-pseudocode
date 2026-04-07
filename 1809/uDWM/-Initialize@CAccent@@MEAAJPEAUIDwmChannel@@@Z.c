/*
 * XREFs of ?Initialize@CAccent@@MEAAJPEAUIDwmChannel@@@Z @ 0x18003B460
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F5B0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAccent::Initialize(CAccent *this, struct IDwmChannel *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 74) = 6;
  *((_BYTE *)this + 312) = 0;
  v2 = CVisual::Initialize(this, a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xC3u);
  return v3;
}
