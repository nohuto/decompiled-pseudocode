/*
 * XREFs of ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C0299E58
 * Callers:
 *     NtGdiIcmBrushInfo @ 0x1C029A9F0 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     GreCreateDIBitmapReal @ 0x1C004F05C (GreCreateDIBitmapReal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C0101B78 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0101C00 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 */

__int64 __fastcall GreIcmSetBrushBitmap(HDC a1, HBRUSH a2, struct tagBITMAPINFO *a3, void *a4)
{
  unsigned int v8; // ebx
  int v9; // edx
  BRUSH *v10; // rdi
  HBITMAP DIBitmapReal; // r8
  _QWORD v13[6]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v14[6]; // [rsp+A0h] [rbp-38h] BYREF

  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( v13[0] && (*(_DWORD *)(v13[0] + 120LL) & 1) != 0 )
  {
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v14, a2);
    v10 = (BRUSH *)v14[0];
    if ( v14[0] )
    {
      if ( (*(_DWORD *)(v14[0] + 40LL) & 0x80u) != 0 )
      {
        DIBitmapReal = (HBITMAP)GreCreateDIBitmapReal(
                                  a1,
                                  v9,
                                  a4,
                                  &a3->bmiHeader.biSize,
                                  0,
                                  0x428u,
                                  0x7FFFFFu,
                                  0LL,
                                  0,
                                  0LL,
                                  1,
                                  0LL,
                                  0LL);
        if ( DIBitmapReal )
          v8 = BRUSH::bAddIcmDIB(v10, *(void **)(*(_QWORD *)(v13[0] + 976LL) + 248LL), DIBitmapReal);
      }
    }
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v14);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v13);
  return v8;
}
