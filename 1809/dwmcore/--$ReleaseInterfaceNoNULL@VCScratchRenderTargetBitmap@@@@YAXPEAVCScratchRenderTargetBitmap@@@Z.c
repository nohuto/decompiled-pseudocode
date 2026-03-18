/*
 * XREFs of ??$ReleaseInterfaceNoNULL@VCScratchRenderTargetBitmap@@@@YAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1802013A0
 * Callers:
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800DADCC (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 * Callees:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800DABA0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterfaceNoNULL<CScratchRenderTargetBitmap>(CScratchRenderTargetBitmap *a1)
{
  __int64 result; // rax

  if ( a1 )
    return CScratchRenderTargetBitmap::Release(a1);
  return result;
}
