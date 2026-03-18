/*
 * XREFs of ?QueryInterface@CSectionBitmapRealization@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSectionBitmapRealization::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CHolographicFrameProcessor::QueryInterface((CHolographicFrameProcessor *)(a1 - 16), a2, a3);
}
