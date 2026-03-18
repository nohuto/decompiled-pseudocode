/*
 * XREFs of SpbCheckRect @ 0x1C0209180
 * Callers:
 *     xxxScrollWindowEx @ 0x1C002E8F4 (xxxScrollWindowEx.c)
 *     xxxInternalInvalidate @ 0x1C0065240 (xxxInternalInvalidate.c)
 *     _ScrollDC @ 0x1C0069628 (_ScrollDC.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C006E43C (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006E71C (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     SpbCheckDce @ 0x1C00CFC80 (SpbCheckDce.c)
 *     SpbCheckPwnd @ 0x1C02090E4 (SpbCheckPwnd.c)
 * Callees:
 *     IsVisible @ 0x1C002F1E0 (IsVisible.c)
 *     ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x1C016565C (-IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z.c)
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C02089E0 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
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
