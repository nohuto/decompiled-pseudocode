/*
 * XREFs of ?Initialize@CAtlasedImage@@MEAAJPEAUIDwmChannel@@@Z @ 0x18003BFB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasedImage::Initialize(CAtlasedImage *this, struct IDwmChannel *a2)
{
  *((_QWORD *)this + 13) = a2;
  return 0LL;
}
