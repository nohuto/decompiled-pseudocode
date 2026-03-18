/*
 * XREFs of ?OverlapCheck@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1C025A2D4
 * Callers:
 *     DxgkEngDetectGDIPath @ 0x1C025B390 (DxgkEngDetectGDIPath.c)
 * Callees:
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C025A438 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 */

_BOOL8 __fastcall OverlapCheck(_DWORD *a1, HRGN a2)
{
  BOOL v4; // ebx
  HANDLE RectRgn; // rdi
  struct tagSIZE v6; // rax
  int v7; // r9d
  int v8; // r10d
  _DWORD *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = a1;
  v4 = 0;
  RectRgn = EngCreateRectRgn(0, 0, 0, 0);
  if ( RectRgn )
  {
    PDEVOBJ::sizl((PDEVOBJ *)&v10);
    v6 = PDEVOBJ::sizl((PDEVOBJ *)&v10);
    if ( EngSetRectRgn(RectRgn, a1[646], a1[647], a1[646] + *(_DWORD *)v6.cx, v7 + v8) )
      v4 = (unsigned int)EngCombineRgn(RectRgn, RectRgn, a2, 1) > 1;
    EngDeleteRgn(RectRgn);
  }
  return v4;
}
