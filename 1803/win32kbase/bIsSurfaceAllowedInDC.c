/*
 * XREFs of bIsSurfaceAllowedInDC @ 0x1C0078140
 * Callers:
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bIsSurfaceAllowedInDC(SURFACE *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  int v4; // r9d

  v2 = *((_QWORD *)a1 + 6);
  v3 = 0;
  if ( gAllowPrinterSurfaceInDisplayDC )
    return 1;
  if ( a1 == SURFACE::pdibDefault )
    return 1;
  if ( !a2 )
    return 1;
  v4 = *(_DWORD *)(a2 + 40);
  if ( (v4 & 0x8000) != 0 && !*((_QWORD *)a1 + 5) )
    return 1;
  if ( !v2 || (((unsigned __int8)v4 ^ *(_BYTE *)(v2 + 40)) & 1) == 0 )
    return 1;
  return v3;
}
