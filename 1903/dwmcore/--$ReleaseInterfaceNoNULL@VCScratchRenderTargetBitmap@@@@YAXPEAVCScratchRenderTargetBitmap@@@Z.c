/*
 * XREFs of ??$ReleaseInterfaceNoNULL@VCScratchRenderTargetBitmap@@@@YAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x18016253C
 * Callers:
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x180047548 (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 * Callees:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800474C0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterfaceNoNULL<CScratchRenderTargetBitmap>(CScratchRenderTargetBitmap *a1)
{
  __int64 result; // rax

  if ( a1 )
    return CScratchRenderTargetBitmap::Release(a1);
  return result;
}
