/*
 * XREFs of ?NlsGetCurrentInputMode@@YAEPEAE@Z @ 0x1C014EB34
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C014E890 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C014E9F0 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C014EC10 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C014EDF0 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C014F050 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C014F160 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C014F270 (-NlsTestKeyStateToggle@@YAHE@Z.c)
 */

char __fastcall NlsGetCurrentInputMode(unsigned __int8 *a1)
{
  unsigned __int8 v1; // r10
  unsigned __int8 v2; // r8
  char v3; // r8
  __int64 v4; // r9

  v1 = *a1;
  if ( !*a1 )
    return v1;
  v2 = *a1;
  while ( !(unsigned int)NlsTestKeyStateToggle(v2) )
  {
    v2 = *(_BYTE *)(v4 + 1);
    if ( !v2 )
      return v1;
  }
  return v3;
}
