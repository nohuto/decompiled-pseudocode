/*
 * XREFs of ?ComputeCortanaWindowRect@CortanaDesktopExperienceView@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@_N@Z @ 0x180043C4C
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180041304 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180043D38 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?CalculateLastActivatedTrayItemRect@CortanaDesktopExperienceView@@AEAA?AUtagRECT@@XZ @ 0x18004487C (-CalculateLastActivatedTrayItemRect@CortanaDesktopExperienceView@@AEAA-AUtagRECT@@XZ.c)
 */

LONG *__fastcall CortanaDesktopExperienceView::ComputeCortanaWindowRect(
        CortanaDesktopExperienceView *a1,
        LONG *a2,
        int a3,
        int a4,
        int a5,
        CortanaDesktopExperienceView *a6,
        char a7)
{
  int v9; // r8d
  int v10; // eax
  LANGID v11; // ax
  LONG v12; // eax
  CortanaDesktopExperienceView *v13; // rax
  int v14; // eax
  LONG v15; // eax
  LONG *result; // rax
  LANGID v17; // ax
  bool v18; // zf
  LONG v19; // ecx
  LANGID v20; // ax
  LANGID v21; // ax
  int v22; // edx
  CortanaDesktopExperienceView *v23; // rcx
  LONG v24; // eax
  LANGID ThreadUILanguage; // ax
  LONG right; // ecx
  LONG left; // ecx
  LANGID v28; // ax
  struct tagRECT v29; // [rsp+20h] [rbp-18h] BYREF

  if ( !a3 )
  {
    v23 = a6;
    v24 = *((_DWORD *)a6 + 2);
    goto LABEL_37;
  }
  v9 = a3 - 1;
  if ( !v9 )
  {
    if ( *((_DWORD *)a1 + 62) == 2 )
    {
      CortanaDesktopExperienceView::CalculateLastActivatedTrayItemRect(a1, &v29);
      ThreadUILanguage = GetThreadUILanguage();
      if ( !(unsigned int)IsBiDiLocale(ThreadUILanguage) )
      {
        left = v29.left;
        goto LABEL_35;
      }
      right = v29.right;
    }
    else
    {
      v28 = GetThreadUILanguage();
      if ( !(unsigned int)IsBiDiLocale(v28) )
      {
        left = *(_DWORD *)a6;
        goto LABEL_35;
      }
      right = *((_DWORD *)a6 + 2);
    }
    left = right - a4;
LABEL_35:
    v15 = *((_DWORD *)a6 + 3);
    *a2 = left;
    goto LABEL_12;
  }
  if ( v9 == 1 )
  {
    v23 = a6;
    v24 = *(_DWORD *)a6 - a4;
LABEL_37:
    *a2 = v24;
    v15 = *((_DWORD *)v23 + 1);
    goto LABEL_12;
  }
  v10 = *((_DWORD *)a1 + 62);
  if ( v10 == 1 )
  {
    CortanaDesktopExperienceView::CalculateLastActivatedTrayItemRect(a1, &v29);
    *a2 = v29.left + (v29.right - v29.left) / 2 - a4 / 2;
    v20 = GetThreadUILanguage();
    if ( !(unsigned int)IsBiDiLocale(v20) && *a2 < *(_DWORD *)a6 )
      *a2 = *(_DWORD *)a6;
    v21 = GetThreadUILanguage();
    if ( (unsigned int)IsBiDiLocale(v21) )
    {
      v22 = *((_DWORD *)a6 + 2);
      if ( a4 + *a2 > v22 )
        *a2 = v22 - a4;
    }
    v14 = *((_DWORD *)a6 + 1);
  }
  else
  {
    if ( v10 == 2 )
    {
      CortanaDesktopExperienceView::CalculateLastActivatedTrayItemRect(a1, &v29);
      v11 = GetThreadUILanguage();
      if ( (unsigned int)IsBiDiLocale(v11) )
        v12 = v29.right - a4;
      else
        v12 = v29.left;
      *a2 = v12;
      v13 = a6;
    }
    else
    {
      v17 = GetThreadUILanguage();
      v18 = (unsigned int)IsBiDiLocale(v17) == 0;
      v13 = a6;
      if ( v18 )
        v19 = *(_DWORD *)a6;
      else
        v19 = *((_DWORD *)a6 + 2) - a4;
      *a2 = v19;
    }
    if ( a7 )
      v14 = *((_DWORD *)v13 + 3);
    else
      v14 = *((_DWORD *)v13 + 1);
  }
  v15 = v14 - a5;
LABEL_12:
  a2[1] = v15;
  result = a2;
  a2[2] = a4 + *a2;
  a2[3] = a5 + a2[1];
  return result;
}
