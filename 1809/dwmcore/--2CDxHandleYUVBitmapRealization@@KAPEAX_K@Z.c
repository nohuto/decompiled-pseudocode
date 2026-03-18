/*
 * XREFs of ??2CDxHandleYUVBitmapRealization@@KAPEAX_K@Z @ 0x1802287FC
 * Callers:
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180228918 (-Create@CDxHandleYUVBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@P.c)
 *     ?CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180228A00 (-CreateSubResourceRealization@CDxHandleYUVBitmapRealization@@QEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEB.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

LPVOID __fastcall CDxHandleYUVBitmapRealization::operator new()
{
  LPVOID result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  result = HeapAlloc(WPF::g_processHeap, 0, 0x1B8uLL);
  if ( !result )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  return result;
}
