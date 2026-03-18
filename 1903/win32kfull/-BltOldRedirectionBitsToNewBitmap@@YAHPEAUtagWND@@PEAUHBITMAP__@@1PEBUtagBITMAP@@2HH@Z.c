/*
 * XREFs of ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00EDBC0
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C00ED748 (RecreateRedirectionBitmap.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     GreExcludeClipRect @ 0x1C00758FC (GreExcludeClipRect.c)
 *     FillRect @ 0x1C008DA04 (FillRect.c)
 *     GreExtSelectClipRgn @ 0x1C008E358 (GreExtSelectClipRgn.c)
 *     GreConvertMemToRedirectionDC @ 0x1C00EDEA4 (GreConvertMemToRedirectionDC.c)
 *     GreConvertRedirectionToMemDC @ 0x1C0299A6C (GreConvertRedirectionToMemDC.c)
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
  BOOL v10; // ebx
  int v11; // r15d
  __int64 SolidBrush; // rdi
  unsigned int v13; // r14d
  unsigned __int64 v14; // rbx
  RECT v16; // [rsp+78h] [rbp-50h] BYREF

  v10 = 0;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
    v10 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0;
  GreSelectBitmap(ghdcMem);
  GreSelectBitmap(ghdcMem2);
  v11 = GreConvertMemToRedirectionDC(ghdcMem2);
  EtwTraceWindowRenderingOldToNewRedirectionBitmap(*(_QWORD *)a1, *(_QWORD *)a1, a2);
  SolidBrush = 0LL;
  v13 = NtGdiBitBltInternal(ghdcMem2, -a6, -a7, a4->bmWidth, a4->bmHeight, ghdcMem, 0, 0, -2134114272, 0, 2);
  if ( v10 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 72LL);
    if ( v14
      || *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 1084LL)
      && (SolidBrush = GreCreateSolidBrush(), (v14 = SolidBrush) != 0) )
    {
      if ( v14 <= 0x1F )
        v14 = *(_QWORD *)(gpsi + 8 * v14 + 4688);
      GreExcludeClipRect(ghdcMem2, -a6, -a7, a4->bmWidth - a6, a4->bmHeight - a7);
      v16.left = 0;
      v16.top = 0;
      v16.right = a5->bmWidth;
      v16.bottom = a5->bmHeight;
      FillRect(ghdcMem2, &v16, (HBRUSH)v14);
      GreExtSelectClipRgn(ghdcMem2, 0LL, 5);
      if ( SolidBrush )
        GreDeleteObject(SolidBrush);
    }
  }
  if ( v11 )
    GreConvertRedirectionToMemDC(ghdcMem2);
  GreSelectBitmap(ghdcMem);
  GreSelectBitmap(ghdcMem2);
  return v13;
}
