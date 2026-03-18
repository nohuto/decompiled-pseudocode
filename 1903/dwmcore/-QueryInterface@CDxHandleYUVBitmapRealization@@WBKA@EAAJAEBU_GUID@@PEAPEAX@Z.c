/*
 * XREFs of ?QueryInterface@CDxHandleYUVBitmapRealization@@WBKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ED900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CHolographicFrameProcessor::QueryInterface((CHolographicFrameProcessor *)(a1 - 416), a2, a3);
}
