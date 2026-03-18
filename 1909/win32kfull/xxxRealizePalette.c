/*
 * XREFs of xxxRealizePalette @ 0x1C00FCE60
 * Callers:
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C015D5C8 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C020D734 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GreRealizePalette @ 0x1C00FCEBC (GreRealizePalette.c)
 *     FreeAllSpbs @ 0x1C01397D0 (FreeAllSpbs.c)
 *     WindowFromCacheDC @ 0x1C01EA1DC (WindowFromCacheDC.c)
 *     xxxBroadcastPaletteChanged @ 0x1C0221098 (xxxBroadcastPaletteChanged.c)
 *     IsDCCurrentPalette @ 0x1C02B05EC (IsDCCurrentPalette.c)
 */

__int64 __fastcall xxxRealizePalette(HDC a1)
{
  int v2; // eax
  unsigned __int16 v3; // si
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 i; // rcx
  __int64 j; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v2 = GreRealizePalette(a1);
  v3 = v2;
  if ( HIWORD(v2) )
  {
    if ( (unsigned int)IsDCCurrentPalette(a1) )
    {
      v6 = WindowFromCacheDC(a1);
      if ( v6 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v7);
        v14 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v14;
        v15 = v6;
        HMLockObject(v6);
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
        ThreadUnlock1(v12, v11, v13);
      }
    }
    FreeAllSpbs();
  }
  return v3;
}
