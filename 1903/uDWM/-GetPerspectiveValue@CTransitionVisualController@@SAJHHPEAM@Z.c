/*
 * XREFs of ?GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z @ 0x18000B970
 * Callers:
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18000B434 (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18000E9B8 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTransitionVisualController::GetPerspectiveValue(unsigned int a1, unsigned int a2, float *a3)
{
  __int64 Theme; // rbp
  unsigned int v7; // edx
  int ThemeAnimationProperty; // eax
  unsigned int v9; // ebx
  int v11; // eax
  void *v12; // [rsp+28h] [rbp-40h]
  void *v13; // [rsp+28h] [rbp-40h]
  _BYTE v14[40]; // [rsp+40h] [rbp-28h] BYREF
  int v15; // [rsp+88h] [rbp+20h] BYREF

  v15 = 0;
  Theme = CDesktopManager::GetTheme(3LL);
  ThemeAnimationProperty = GetThemeAnimationProperty(Theme, a1, v7, 0LL, &v15, 4, v14);
  v9 = ThemeAnimationProperty;
  if ( ThemeAnimationProperty < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      ThemeAnimationProperty,
      0xB4Bu,
      v12);
  }
  else if ( (v15 & 0x10) != 0 )
  {
    v11 = GetThemeAnimationProperty(Theme, a1, a2, 258LL, a3, 4, v14);
    v9 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v11,
        0xB55u,
        v13);
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v9;
}
