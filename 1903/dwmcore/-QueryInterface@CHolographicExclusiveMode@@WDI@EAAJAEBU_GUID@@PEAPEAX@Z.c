/*
 * XREFs of ?QueryInterface@CHolographicExclusiveMode@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ED0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicExclusiveMode::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CHolographicFrameProcessor::QueryInterface((CHolographicFrameProcessor *)(a1 - 56), a2, a3);
}
