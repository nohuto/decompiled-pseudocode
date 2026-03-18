/*
 * XREFs of _SelectPalette @ 0x1C00E1194
 * Callers:
 *     NtUserSelectPalette @ 0x1C00E1130 (NtUserSelectPalette.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C015D5C8 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C020D734 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C001ACF8 (GetNonChildAncestor.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     GetThreadDesktopWindow @ 0x1C00E576C (GetThreadDesktopWindow.c)
 *     _IsChild @ 0x1C00F5DAC (_IsChild.c)
 *     WindowFromCacheDC @ 0x1C01EA1DC (WindowFromCacheDC.c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1C0221034 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall SelectPalette(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // edi
  __int64 v7; // rax
  __int64 v8; // rsi
  _QWORD *NonChildAncestor; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx

  v5 = 1;
  if ( !a3 && (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && a2 != GreGetStockObject(15LL) )
  {
    v7 = WindowFromCacheDC(a1);
    v8 = v7;
    if ( v7 )
    {
      NonChildAncestor = (_QWORD *)GetNonChildAncestor(v7);
      if ( (*(_BYTE *)(NonChildAncestor[5] + 18LL) & 0x20) == 0 )
      {
        if ( NonChildAncestor != (_QWORD *)GetThreadDesktopWindow(0LL) )
          *(_DWORD *)(NonChildAncestor[2] + 480LL) |= 0x800u;
        SetOrClrWF(1, (__int64)NonChildAncestor, 0x220u, 1);
      }
      if ( gpqForeground )
        v10 = *(_QWORD *)(gpqForeground + 128LL);
      else
        v10 = 0LL;
      v11 = *(_QWORD *)(NonChildAncestor[3] + 8LL);
      if ( NonChildAncestor != *(_QWORD **)(v11 + 24)
        && NonChildAncestor != *(_QWORD **)(v11 + 168)
        && v10
        && (v10 == v8 || (unsigned int)IsChild(v10, v8) || (unsigned int)IsTopmostRealApp((struct tagWND *)v8))
        && *(char *)(*(_QWORD *)(v8 + 40) + 24LL) >= 0 )
      {
        v5 = 0;
      }
    }
  }
  return GreSelectPalette(a1, a2, v5);
}
