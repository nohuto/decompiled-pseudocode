/*
 * XREFs of ?AddRef@CSubRectBitmapRealizationImageSource@@WBA@EAAKXZ @ 0x1800EC5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSubRectBitmapRealizationImageSource::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CHolographicClient *)(a1 - 16));
}
