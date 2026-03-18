/*
 * XREFs of ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B4A0
 * Callers:
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A360 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackPostHook @ 0x1C020BC3C (xxxDDETrackPostHook.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C02094B0 (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     ?Request@@YAKPEAUtagDDECONV@@@Z @ 0x1C0209C10 (-Request@@YAKPEAUtagDDECONV@@@Z.c)
 *     ?SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z @ 0x1C0209C7C (-SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z.c)
 *     ?Unadvise@@YAKPEAUtagDDECONV@@@Z @ 0x1C0209CE8 (-Unadvise@@YAKPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0209E9C (-xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A9F0 (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C020ACD0 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020AE00 (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

__int64 __fastcall xxxUnexpectedClientPost(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  void **v3; // rbx

  v3 = a2;
  switch ( *a1 )
  {
    case 0x3E1u:
      return SpontaneousTerminate(a1, a3);
    case 0x3E2u:
      return xxxAdvise(a1, a2, (struct tagDDECONV **)a3);
    case 0x3E3u:
      return Unadvise((struct tagDDECONV **)a3);
    case 0x3E4u:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_((_DWORD)a1, (_DWORD)a2, 14, 24, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
      }
      xxxFreeDDEHandle((struct tagDDECONV *)a1, *v3, 1u);
      return 3LL;
    case 0x3E5u:
      return AbnormalDDEPost(a3, 997);
    case 0x3E6u:
      return Request((struct tagDDECONV **)a3);
    case 0x3E7u:
      return xxxPoke(a1, a2, a3);
    case 0x3E8u:
      return xxxExecute(a1, a2, a3);
    default:
      return 0LL;
  }
}
