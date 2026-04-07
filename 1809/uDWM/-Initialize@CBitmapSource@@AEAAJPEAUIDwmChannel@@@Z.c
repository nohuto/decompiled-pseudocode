/*
 * XREFs of ?Initialize@CBitmapSource@@AEAAJPEAUIDwmChannel@@@Z @ 0x18000ED18
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000D00C (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000EB68 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAXKPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180047344 (-Create@CBitmapSource@@SAJPEAXKPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBitmapSource::Initialize(CBitmapSource *this, struct IDwmChannel *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CResource::Create(4LL, a2, (char *)this + 16);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x12Fu);
  return v3;
}
