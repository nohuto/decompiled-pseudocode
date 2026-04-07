/*
 * XREFs of ?s_CalculateWindowMetrics@CSecondaryWindowRepresentation@@CA_NPEBVCWindowData@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@_NPEAUtagSIZE@@PEAU_MARGINS@@@Z @ 0x180013EE0
 * Callers:
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180013D98 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 * Callees:
 *     ?AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180017008 (-AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x1800183E8 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 */

char __fastcall CSecondaryWindowRepresentation::s_CalculateWindowMetrics(
        __int64 a1,
        __int16 a2,
        char a3,
        int *a4,
        struct tagRECT *a5)
{
  __int64 v5; // r14
  int v6; // edi
  char v9; // bl
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  struct tagRECT v14; // xmm0
  int v16; // edx
  int v17; // edi
  int v18; // eax
  struct tagRECT v19; // [rsp+20h] [rbp-10h] BYREF

  v5 = *(_QWORD *)(a1 + 400);
  v6 = 0;
  v9 = a2;
  if ( v5 )
  {
    if ( (a2 & 0x100) == 0 && CDesktopManager::AdjustDesktopWindowSize(*(HWND *)(a1 + 40), &v19) )
    {
      v18 = 0;
      if ( v19.right - v19.left >= 0 )
        v18 = v19.right - v19.left;
      *a4 = v18;
      if ( v19.bottom - v19.top >= 0 )
        v6 = v19.bottom - v19.top;
      a4[1] = v6;
    }
    else
    {
      v11 = 0;
      if ( *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 48) >= 0 )
        v11 = *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 48);
      v12 = *(_DWORD *)(a1 + 60) - *(_DWORD *)(a1 + 52);
      *a4 = v11;
      v13 = 0;
      if ( v12 >= 0 )
        v13 = v12;
      a4[1] = v13;
      if ( (v9 & 4) == 0 )
      {
        if ( v9 >= 0 )
        {
          CTopLevelWindow::GetOutsideMargins((CTopLevelWindow *)v5, (struct _MARGINS *)&v19);
          *a5 = v19;
          return 1;
        }
        v19 = *(struct tagRECT *)(v5 + 620);
        v19.left = _mm_cvtsi128_si32((__m128i)v19) - *(_DWORD *)(v5 + 652);
        v19.top -= *(_DWORD *)(v5 + 656);
        v19.right -= *(_DWORD *)(v5 + 660);
        v19.bottom -= *(_DWORD *)(v5 + 664);
        v14 = v19;
LABEL_11:
        *a5 = v14;
        return 1;
      }
      if ( a3 )
      {
        v14 = *(struct tagRECT *)(a1 + 64);
        goto LABEL_11;
      }
      v16 = 0;
      if ( *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 184) >= 0 )
        v16 = *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 184);
      if ( *(_DWORD *)(a1 + 188) - *(_DWORD *)(a1 + 180) >= 0 )
        v6 = *(_DWORD *)(a1 + 188) - *(_DWORD *)(a1 + 180);
      v17 = v6 - *(_DWORD *)(a1 + 248) - *(_DWORD *)(a1 + 244);
      a4[1] = v16 - *(_DWORD *)(a1 + 256) - *(_DWORD *)(a1 + 252);
      *a4 = v17;
    }
    v14 = (struct tagRECT)xmmword_1800C4D18;
    goto LABEL_11;
  }
  return 0;
}
