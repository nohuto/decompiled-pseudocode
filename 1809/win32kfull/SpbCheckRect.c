/*
 * XREFs of SpbCheckRect @ 0x1C01F3180
 * Callers:
 *     SpbCheckDce @ 0x1C000EE10 (SpbCheckDce.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0038244 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     xxxInternalInvalidate @ 0x1C0039F20 (xxxInternalInvalidate.c)
 *     NtUserRedrawWindow @ 0x1C003AE70 (NtUserRedrawWindow.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0043B34 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C0079188 (xxxScrollWindowEx.c)
 *     _ScrollDC @ 0x1C00F8D1C (_ScrollDC.c)
 *     SpbCheckPwnd @ 0x1C01F30E4 (SpbCheckPwnd.c)
 * Callees:
 *     IsVisible @ 0x1C0079A24 (IsVisible.c)
 *     ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x1C015E3BC (-IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z.c)
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C01F29E0 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 */

char __fastcall SpbCheckRect(struct tagWND *a1, struct tagRECT *a2)
{
  int v4; // eax
  struct tagSPB *v5; // rcx
  struct tagSPB *v6; // rbx

  v4 = IsVisible((__int64)a1);
  if ( v4 )
  {
    while ( 1 )
    {
      LOBYTE(v4) = gpDispInfo;
      v5 = *(struct tagSPB **)(gpDispInfo + 32LL);
      if ( !v5 )
        break;
      while ( 1 )
      {
        v6 = *(struct tagSPB **)v5;
        v4 = SpbCheckRect2(v5, a1, a2);
        if ( !v4 )
        {
          LOBYTE(v4) = IsSpbPresentOrNull(v6);
          if ( !(_BYTE)v4 )
            break;
        }
        v5 = v6;
        if ( !v6 )
          return v4;
      }
    }
  }
  return v4;
}
