/*
 * XREFs of ?HeuristicallyDetermineViewingDistance@Win81@@YAIAEBUtagSIZE@@H0HH@Z @ 0x1C0255180
 * Callers:
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z @ 0x1C0254D80 (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z.c)
 * Callees:
 *     ?IsNativeResolutionOnlyTVTiming@Win81@@YAHUtagSIZE@@H@Z @ 0x1C0255340 (-IsNativeResolutionOnlyTVTiming@Win81@@YAHUtagSIZE@@H@Z.c)
 *     ?IsNetbookResolution@Win81@@YAHUtagSIZE@@@Z @ 0x1C02553A8 (-IsNetbookResolution@Win81@@YAHUtagSIZE@@@Z.c)
 */

__int64 __fastcall Win81::HeuristicallyDetermineViewingDistance(
        Win81 *this,
        const struct tagSIZE *a2,
        Win81 **a3,
        const struct tagSIZE *a4,
        int a5)
{
  struct tagSIZE v6; // rdx
  unsigned int v7; // r10d
  int v8; // r11d
  int v10; // edx
  unsigned __int64 v11; // r8
  int v12; // ecx
  unsigned int v13; // r9d
  int v14; // r8d
  int v15; // r10d

  if ( !(unsigned int)(10000LL
                     * (*(_DWORD *)this * *(_DWORD *)this + *((_DWORD *)this + 1) * *((_DWORD *)this + 1))
                     / 0xFC04uLL)
    || (unsigned int)Win81::IsNativeResolutionOnlyTVTiming(*a3, (struct tagSIZE)(unsigned int)a4, (int)a3) && !v8 )
  {
    return 840LL;
  }
  if ( v7 < 0x1FA4 )
    return 163LL;
  if ( v7 < 0x4204 && !(unsigned int)Win81::IsNetbookResolution(*a3, v6) )
    return 200LL;
  if ( v7 < 0x57E4 )
    return 245LL;
  if ( v7 < 0x7E90 )
    return v8 != 0 ? 245 : 280;
  if ( v7 <= 0x15F90 )
    return 280LL;
  v10 = 1;
  v11 = (unsigned __int64)*a3 >> 32;
  v12 = v11;
  if ( (unsigned int)*a3 == 1920 && (v12 = v11, v13 = (unsigned int)*a3, v14 = 1080, v12 == 1080) )
  {
    v15 = 1;
  }
  else
  {
    v15 = 0;
    v13 = (unsigned int)*a3;
    v14 = v12;
  }
  if ( v13 != 3840 || v14 != 2160 )
    v10 = 0;
  if ( (v15 || v10) && a5 )
    return 840LL;
  else
    return 280LL;
}
