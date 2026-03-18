/*
 * XREFs of SpbCheckRect @ 0x1C0209430
 * Callers:
 *     xxxScrollWindowEx @ 0x1C0028484 (xxxScrollWindowEx.c)
 *     xxxInternalInvalidate @ 0x1C00C3B70 (xxxInternalInvalidate.c)
 *     _ScrollDC @ 0x1C00C7F58 (_ScrollDC.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C00CCD6C (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00CD04C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     SpbCheckDce @ 0x1C00EEE80 (SpbCheckDce.c)
 *     SpbCheckPwnd @ 0x1C0209394 (SpbCheckPwnd.c)
 * Callees:
 *     IsVisible @ 0x1C0028D70 (IsVisible.c)
 *     ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x1C01643C8 (-IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z.c)
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C0208C90 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
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
