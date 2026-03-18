/*
 * XREFs of xxxRealizePalette @ 0x1C0098390
 * Callers:
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01553AC (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01F7668 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     GreRealizePalette @ 0x1C00983DC (GreRealizePalette.c)
 *     FreeAllSpbs @ 0x1C00EAB30 (FreeAllSpbs.c)
 *     WindowFromCacheDC @ 0x1C01D4B4C (WindowFromCacheDC.c)
 *     xxxBroadcastPaletteChanged @ 0x1C0209B64 (xxxBroadcastPaletteChanged.c)
 *     IsDCCurrentPalette @ 0x1C029BB9C (IsDCCurrentPalette.c)
 */

__int64 __fastcall xxxRealizePalette(HDC a1)
{
  int v2; // eax
  unsigned __int16 v3; // si
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 i; // rcx
  __int64 j; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = GreRealizePalette(a1);
  v3 = v2;
  if ( HIWORD(v2) )
  {
    if ( (unsigned int)IsDCCurrentPalette(a1) )
    {
      v6 = WindowFromCacheDC(a1);
      if ( v6 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
        v12[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v12;
        v12[1] = v6;
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
        xxxBroadcastPaletteChanged(v6, 0LL);
        for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
        {
          for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
          {
            if ( j != *(_QWORD *)(v6 + 24) )
              *(_DWORD *)(j + 48) |= 1u;
          }
        }
        GreRealizePalette(a1);
        ThreadUnlock1(v11, v10);
      }
    }
    FreeAllSpbs();
  }
  return v3;
}
