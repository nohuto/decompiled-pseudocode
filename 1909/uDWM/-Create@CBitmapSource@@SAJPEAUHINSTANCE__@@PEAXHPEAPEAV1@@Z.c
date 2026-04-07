/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z @ 0x180046628
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800463C8 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z @ 0x1800467D4 (-Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBitmapSource::Create(HINSTANCE a1, void *a2, unsigned int a3, struct CBitmapSource **a4)
{
  HRESULT ThemeStream; // eax
  unsigned int v6; // ebx
  int v7; // eax
  void *v9; // [rsp+28h] [rbp-30h]
  void *v10; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = a3;
  ThemeStream = GetThemeStream(a2, 0, 0, 213, &v10, &v11, a1);
  v6 = ThemeStream;
  if ( ThemeStream < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ThemeStream, 0x3Bu, v9);
  }
  else
  {
    v7 = CBitmapSource::Create(v10, v11, a4);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x3Eu, v9);
  }
  return v6;
}
