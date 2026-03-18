/*
 * XREFs of SpbCheckRect @ 0x1C01CEB18
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0026F74 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00281E0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxInternalInvalidate @ 0x1C002AC50 (xxxInternalInvalidate.c)
 *     _ScrollDC @ 0x1C002D2F8 (_ScrollDC.c)
 *     xxxScrollWindowEx @ 0x1C002F500 (xxxScrollWindowEx.c)
 *     SpbCheckDce @ 0x1C0035560 (SpbCheckDce.c)
 *     SpbCheckPwnd @ 0x1C01CEA7C (SpbCheckPwnd.c)
 * Callees:
 *     IsVisible @ 0x1C002FD68 (IsVisible.c)
 *     ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x1C013B0D4 (-IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z.c)
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C01CE418 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
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
