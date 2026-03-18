/*
 * XREFs of ??$ReleaseInterfaceNoNULL@VCScratchRenderTargetBitmap@@@@YAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x180160E4C
 * Callers:
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x180049FF8 (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 * Callees:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x180049F70 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterfaceNoNULL<CScratchRenderTargetBitmap>(CScratchRenderTargetBitmap *a1)
{
  __int64 result; // rax

  if ( a1 )
    return CScratchRenderTargetBitmap::Release(a1);
  return result;
}
