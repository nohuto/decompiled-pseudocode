/*
 * XREFs of ?IsSplashScreen@CWindowData@@QEBA_NXZ @ 0x180005CAC
 * Callers:
 *     ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x180021DD8 (-HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWindowData::IsSplashScreen(CWindowData *this)
{
  unsigned __int16 v1; // ax
  __int16 ClassLongW; // cx

  v1 = g_atomSplashScreen;
  if ( !g_atomSplashScreen )
  {
    v1 = RegisterWindowMessageW(L"ImmersiveSplashScreenWindowClass");
    g_atomSplashScreen = v1;
  }
  ClassLongW = *((_WORD *)this + 344);
  if ( !ClassLongW )
  {
    ClassLongW = GetClassLongW(*((HWND *)this + 5), -32);
    *((_WORD *)this + 344) = ClassLongW;
    v1 = g_atomSplashScreen;
  }
  return ClassLongW == (__int16)v1;
}
