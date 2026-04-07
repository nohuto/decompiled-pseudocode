/*
 * XREFs of ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x1800182E0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180016B10 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18008A508 (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18008A7C8 (-GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x1800247DC (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetCurrentStyle(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // esi
  int v4; // r15d
  __int64 v5; // rcx
  int SystemMetricsForDpi; // eax
  int v7; // ebp
  int v8; // r14d
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char v13; // r8
  int v14; // ecx
  int v15; // edx
  unsigned int v16; // r9d
  char v17; // cl
  char v19; // dl

  v2 = 1;
  if ( (*(_BYTE *)(a1 + 596) & 8) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 100);
    v4 = *(_DWORD *)(a1 + 104);
    if ( !*(_DWORD *)(a1 + 64)
      && !*(_DWORD *)(a1 + 72)
      && !*(_DWORD *)(a1 + 68)
      && !*(_DWORD *)(a1 + 76)
      && AreAllMarginsZero((const struct _MARGINS *)(a1 + 80))
      && !v19 )
    {
      goto LABEL_30;
    }
    if ( (v3 & 0x80u) != 0 )
      v5 = 53LL;
    else
      v5 = 31LL;
    SystemMetricsForDpi = GetSystemMetricsForDpi(v5, *(unsigned int *)(a1 + 324));
    v7 = *(_DWORD *)(a1 + 72);
    v8 = SystemMetricsForDpi;
    if ( (v3 & 0xC00000) == 0xC00000 )
    {
      v9 = *(_DWORD *)(a1 + 348);
      if ( (v9 & 1) == 0 && v7 >= SystemMetricsForDpi )
        v2 = 9;
      if ( (v3 & 0x80000) != 0 )
      {
        if ( (v9 & 0x10000) == 0 )
        {
          v2 |= 0x400u;
          if ( (*(_DWORD *)(a1 + 108) & 0x200) == 0 )
            v2 |= 0x4000u;
        }
        if ( (v4 & 0x80u) != 0 )
        {
          v12 = 2;
          goto LABEL_29;
        }
        v10 = *(_DWORD *)(a1 + 112);
        if ( (v10 < 8 || v10 > 11)
          && ((*(_BYTE *)(a1 + 600) & 0x40) == 0
           || GetPropW(*(HWND *)(a1 + 40), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow")) )
        {
          v11 = *(_DWORD *)(a1 + 348);
          if ( (v11 & 2) == 0 && v7 >= v8 )
            v2 |= 0x10000u;
          if ( (v11 & 4) == 0 && v7 >= v8 )
            v2 |= 0x80u;
          if ( (v11 & 0x10000) == 0 )
          {
            if ( (v3 & 0x30000) != 0 )
            {
              if ( (v3 & 0x20000) != 0 )
                v2 |= 0x1300u;
              if ( (v3 & 0x10000) != 0 )
                v2 |= 0x2300u;
            }
            else if ( (v4 & 0x400) != 0 )
            {
              v2 |= 0x8800u;
            }
          }
        }
      }
    }
    v12 = 4;
LABEL_29:
    v13 = *(_BYTE *)(a1 + 596);
    v2 |= v12;
LABEL_30:
    v14 = v2 | 0x20;
    if ( (v3 & 0x1000000) == 0 )
      v14 = v2;
    v15 = v14 | 0x40000;
    if ( (v3 & 0x20000000) == 0 )
      v15 = v14;
    v16 = v15 | 0x40;
    if ( (v13 & 2) == 0 )
      v16 = v15;
    if ( (v4 & 0x400000) != 0 || v13 < 0 )
    {
      v17 = 1;
      v16 |= 0x20000u;
    }
    else
    {
      v17 = 0;
    }
    if ( ((v4 & 0x2000) != 0) != v17 )
      v16 |= 0x80000u;
    if ( (v4 & 0x1000) != 0 )
      v16 |= 0x400000u;
    return v16;
  }
  if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 7) >= 4 && (*(_DWORD *)(a1 + 100) & 0x1000000) != 0 )
    return 2097153;
  return v2;
}
