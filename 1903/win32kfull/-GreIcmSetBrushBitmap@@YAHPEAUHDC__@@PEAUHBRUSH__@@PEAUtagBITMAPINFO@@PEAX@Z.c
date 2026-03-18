/*
 * XREFs of ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02AED00
 * Callers:
 *     NtGdiIcmBrushInfo @ 0x1C02AF750 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     GreCreateDIBitmapReal @ 0x1C0030AC0 (GreCreateDIBitmapReal.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C0108F18 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0108F98 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 */

__int64 __fastcall GreIcmSetBrushBitmap(HDC a1, HBRUSH a2, struct tagBITMAPINFO *a3, void *a4)
{
  unsigned int v6; // ebx
  int v9; // edx
  BRUSH *v10; // rdi
  HBITMAP DIBitmapReal; // r8
  _QWORD v13[2]; // [rsp+70h] [rbp-28h] BYREF
  _QWORD v14[2]; // [rsp+80h] [rbp-18h] BYREF

  v6 = 0;
  v13[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v13, a1);
  if ( v13[0] )
  {
    if ( (*(_DWORD *)(v13[0] + 120LL) & 1) != 0 )
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
            v6 = BRUSH::bAddIcmDIB(v10, *(void **)(*(_QWORD *)(v13[0] + 976LL) + 248LL), DIBitmapReal);
        }
      }
      BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v14);
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  }
  return v6;
}
