/*
 * XREFs of ?IsWhitePixelInTopLeft@CAtlasImageSource@@UEBA_NXZ @ 0x180020DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAtlasImageSource::IsWhitePixelInTopLeft(CAtlasImageSource *this)
{
  return *((_QWORD *)this + 2) != 0LL;
}
