/*
 * XREFs of NlsKbdSendIMEProc @ 0x1C014F318
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C014E890 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C014EB00 (-NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C014EC10 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C014ED40 (-NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C014EDF0 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     NlsKbdSendIMENotificationBase @ 0x1C008A080 (NlsKbdSendIMENotificationBase.c)
 *     ApiSetEditionGetAppImeCompatFlags @ 0x1C0161BF8 (ApiSetEditionGetAppImeCompatFlags.c)
 */

void __fastcall NlsKbdSendIMEProc(int a1, int a2)
{
  if ( gpqForeground && *(_QWORD *)(gpqForeground + 96) && (ApiSetEditionGetAppImeCompatFlags() & 0x800000) == 0 )
    NlsKbdSendIMENotificationBase(a1, a2);
}
