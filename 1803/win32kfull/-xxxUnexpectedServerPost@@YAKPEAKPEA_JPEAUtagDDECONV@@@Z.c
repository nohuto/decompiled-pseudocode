/*
 * XREFs of ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01D02FC
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01CF450 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01CFA40 (-xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01CFB80 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01CFE70 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01CFF40 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01D01D0 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackPostHook @ 0x1C01D06BC (xxxDDETrackPostHook.c)
 * Callees:
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C01CEB98 (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     ?SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z @ 0x1C01CF274 (-SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01CF4F4 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1C01E1A5C (xxxClientFreeDDEHandle.c)
 */

__int64 __fastcall xxxUnexpectedServerPost(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  unsigned int v4; // edx

  v4 = *a1;
  if ( *a1 == 993 )
    return SpontaneousTerminate(a1, a3);
  if ( v4 <= 0x3E1 )
    return 0LL;
  if ( v4 > 0x3E3 )
  {
    if ( v4 == 996 )
    {
      xxxClientFreeDDEHandle(*a2, 1LL);
      return 3LL;
    }
    if ( v4 == 997 )
      return xxxAdviseData(a1, a2, a3);
    if ( v4 > 0x3E8 )
      return 0LL;
  }
  return AbnormalDDEPost(a3, v4);
}
