/*
 * XREFs of ?HasContent@CSubRectBitmapRealizationImageSource@@UEBA_NXZ @ 0x18025AD40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSubRectBitmapRealizationImageSource::HasContent(CSubRectBitmapRealizationImageSource *this)
{
  return *((_QWORD *)this + 3) != 0LL;
}
