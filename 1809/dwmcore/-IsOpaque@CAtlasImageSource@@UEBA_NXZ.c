/*
 * XREFs of ?IsOpaque@CAtlasImageSource@@UEBA_NXZ @ 0x1800E7D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAtlasImageSource::IsOpaque(CAtlasImageSource *this)
{
  return *((_BYTE *)this + 40);
}
