/*
 * XREFs of NtGdiAddInitialFonts @ 0x1C011C6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C011C740 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

__int64 __fastcall NtGdiAddInitialFonts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // al

  if ( PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS )
    return 3221225506LL;
  UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread = KeGetCurrentThread();
  v4 = UmfdHostLifeTimeManager::AddInitialFonts();
  UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread = KeGetCurrentThread();
  return !v4 ? 0xC0000017 : 0;
}
