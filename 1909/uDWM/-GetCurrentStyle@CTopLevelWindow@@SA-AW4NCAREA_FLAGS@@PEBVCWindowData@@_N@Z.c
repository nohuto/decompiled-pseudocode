/*
 * XREFs of ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x18001D6B0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B120 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18003FEA0 (-GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1800905B8 (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x18000DB54 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetCurrentStyle(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int v5; // esi
  int v6; // r15d
  __int64 v7; // rcx
  int SystemMetricsForDpi; // eax
  int v9; // ebp
  int v10; // r14d
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  char v17; // cl
  unsigned int v18; // r8d
  char v19; // cl
  char v21; // dl

  v4 = 1;
  if ( (*(_BYTE *)(a1 + 604) & 8) != 0 )
  {
    v5 = *(_DWORD *)(a1 + 100);
    v6 = *(_DWORD *)(a1 + 104);
    if ( !*(_DWORD *)(a1 + 64)
      && !*(_DWORD *)(a1 + 72)
      && !*(_DWORD *)(a1 + 68)
      && !*(_DWORD *)(a1 + 76)
      && AreAllMarginsZero((const struct _MARGINS *)(a1 + 80))
      && !v21 )
    {
      goto LABEL_30;
    }
    if ( (v5 & 0x80u) != 0 )
      v7 = 53LL;
    else
      v7 = 31LL;
    SystemMetricsForDpi = GetSystemMetricsForDpi(v7, *(unsigned int *)(a1 + 324), a3);
    v9 = *(_DWORD *)(a1 + 72);
    v10 = SystemMetricsForDpi;
    if ( (v5 & 0xC00000) == 0xC00000 )
    {
      v11 = *(_DWORD *)(a1 + 356);
      if ( (v11 & 1) == 0 && v9 >= v10 )
        v4 = 9;
      if ( (v5 & 0x80000) != 0 )
      {
        if ( (v11 & 0x10000) == 0 )
        {
          v4 |= 0x400u;
          if ( (*(_DWORD *)(a1 + 108) & 0x200) == 0 )
            v4 |= 0x4000u;
        }
        if ( (v6 & 0x80u) != 0 )
        {
          v14 = 2;
          goto LABEL_29;
        }
        v12 = *(_DWORD *)(a1 + 112);
        if ( (v12 < 8 || v12 > 11)
          && ((*(_BYTE *)(a1 + 608) & 0x40) == 0
           || GetPropW(*(HWND *)(a1 + 40), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow")) )
        {
          v13 = *(_DWORD *)(a1 + 356);
          if ( (v13 & 2) == 0 && v9 >= v10 )
            v4 |= 0x10000u;
          if ( (v13 & 4) == 0 && v9 >= v10 )
            v4 |= 0x80u;
          if ( (v13 & 0x10000) == 0 )
          {
            if ( (v5 & 0x30000) != 0 )
            {
              if ( (v5 & 0x20000) != 0 )
                v4 |= 0x1300u;
              if ( (v5 & 0x10000) != 0 )
                v4 |= 0x2300u;
            }
            else if ( (v6 & 0x400) != 0 )
            {
              v4 |= 0x8800u;
            }
          }
        }
      }
    }
    v14 = 4;
LABEL_29:
    v4 |= v14;
LABEL_30:
    v15 = v4 | 0x20;
    if ( (v5 & 0x1000000) == 0 )
      v15 = v4;
    v16 = v15 | 0x40000;
    if ( (v5 & 0x20000000) == 0 )
      v16 = v15;
    v17 = *(_BYTE *)(a1 + 604);
    v18 = v16 | 0x40;
    if ( (v17 & 2) == 0 )
      v18 = v16;
    if ( (v6 & 0x400000) != 0 || v17 < 0 )
    {
      v19 = 1;
      v18 |= 0x20000u;
    }
    else
    {
      v19 = 0;
    }
    if ( ((v6 & 0x2000) != 0) != v19 )
      v18 |= 0x80000u;
    if ( (v6 & 0x1000) != 0 )
      v18 |= 0x400000u;
    return v18;
  }
  if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 7) >= 4 && (*(_DWORD *)(a1 + 100) & 0x1000000) != 0 )
    return 2097153;
  return v4;
}
