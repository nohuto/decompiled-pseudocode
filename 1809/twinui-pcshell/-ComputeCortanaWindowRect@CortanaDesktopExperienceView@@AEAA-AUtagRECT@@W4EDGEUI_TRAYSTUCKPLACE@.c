/*
 * XREFs of ?ComputeCortanaWindowRect@CortanaDesktopExperienceView@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@_N@Z @ 0x1800169D0
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180014D04 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180016A64 (-IsBiDiLocale@@YAHK@Z.c)
 */

_DWORD *__fastcall CortanaDesktopExperienceView::ComputeCortanaWindowRect(
        __int64 a1,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        char a7)
{
  int v9; // r8d
  LANGID ThreadUILanguage; // ax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  _DWORD *result; // rax
  _DWORD *v15; // rcx
  int v16; // eax
  LANGID v17; // ax
  int v18; // ecx

  if ( !a3 )
  {
    v15 = a6;
    v16 = a6[2];
    goto LABEL_18;
  }
  v9 = a3 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
    {
      ThreadUILanguage = GetThreadUILanguage();
      if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
        v11 = a6[2] - a4;
      else
        v11 = *a6;
      *a2 = v11;
      if ( a7 )
        v12 = a6[3];
      else
        v12 = a6[1];
      v13 = v12 - a5;
      goto LABEL_9;
    }
    v15 = a6;
    v16 = *a6 - a4;
LABEL_18:
    *a2 = v16;
    v13 = v15[1];
    goto LABEL_9;
  }
  v17 = GetThreadUILanguage();
  if ( (unsigned int)IsBiDiLocale(v17) )
    v18 = a6[2] - a4;
  else
    v18 = *a6;
  v13 = a6[3];
  *a2 = v18;
LABEL_9:
  a2[1] = v13;
  result = a2;
  a2[2] = a4 + *a2;
  a2[3] = a5 + a2[1];
  return result;
}
