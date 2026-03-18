/*
 * XREFs of ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00E8CB4
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C00E8330 (RecreateRedirectionBitmap.c)
 * Callees:
 *     GreExcludeClipRect @ 0x1C0076C7C (GreExcludeClipRect.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     FillRect @ 0x1C009F914 (FillRect.c)
 *     GreConvertMemToRedirectionDC @ 0x1C00E8F3C (GreConvertMemToRedirectionDC.c)
 *     GreExtSelectClipRgnInternal @ 0x1C013BA84 (GreExtSelectClipRgnInternal.c)
 *     GreConvertRedirectionToMemDC @ 0x1C0270544 (GreConvertRedirectionToMemDC.c)
 */

__int64 __fastcall BltOldRedirectionBitsToNewBitmap(
        struct tagWND *a1,
        HBITMAP a2,
        HBITMAP a3,
        const struct tagBITMAP *a4,
        const struct tagBITMAP *a5,
        int a6,
        int a7)
{
  BOOL v11; // ebx
  __int64 v12; // r12
  __int64 v13; // r13
  int v14; // r15d
  unsigned int v15; // ebp
  HBRUSH v16; // rbx
  RECT v18; // [rsp+78h] [rbp-50h] BYREF

  v11 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
    v11 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0;
  v12 = GreSelectBitmap(ghdcMem, a2);
  v13 = GreSelectBitmap(ghdcMem2, a3);
  v14 = GreConvertMemToRedirectionDC(ghdcMem2);
  EtwTraceWindowRenderingOldToNewRedirectionBitmap(*(_QWORD *)a1, *(_QWORD *)a1, a2);
  v15 = NtGdiBitBltInternal(ghdcMem2, -a6, -a7, a4->bmWidth, a4->bmHeight, ghdcMem, 0, 0, -2134114272, 0, 2);
  if ( v11 )
  {
    v16 = *(HBRUSH *)(*(_QWORD *)(*((_QWORD *)a1 + 14) + 8LL) + 72LL);
    if ( v16 )
    {
      if ( (unsigned __int64)v16 <= 0x1F )
        v16 = *(HBRUSH *)(gpsi + 8LL * (_QWORD)v16 + 4688);
      GreExcludeClipRect(ghdcMem2, -a6, -a7, a4->bmWidth - a6, a4->bmHeight - a7);
      v18.left = 0;
      v18.top = 0;
      v18.right = a5->bmWidth;
      v18.bottom = a5->bmHeight;
      FillRect(ghdcMem2, &v18, v16);
      GreExtSelectClipRgnInternal(ghdcMem2);
    }
  }
  if ( v14 )
    GreConvertRedirectionToMemDC(ghdcMem2);
  GreSelectBitmap(ghdcMem, v12);
  GreSelectBitmap(ghdcMem2, v13);
  return v15;
}
