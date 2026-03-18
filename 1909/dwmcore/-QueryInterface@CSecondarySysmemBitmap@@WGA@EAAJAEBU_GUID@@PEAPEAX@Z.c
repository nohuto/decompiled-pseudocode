/*
 * XREFs of ?QueryInterface@CSecondarySysmemBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F1080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondarySysmemBitmap::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CHolographicFrameProcessor::QueryInterface((CHolographicFrameProcessor *)(a1 - 96), a2, a3);
}
