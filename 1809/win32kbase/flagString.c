/*
 * XREFs of flagString @ 0x1C0147A9C
 * Callers:
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0140C70 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z.c)
 * Callees:
 *     RtlStringCchCatA @ 0x1C0147D08 (RtlStringCchCatA.c)
 */

char *__fastcall flagString(char *a1, size_t a2)
{
  __int16 v2; // r11

  v2 = (__int16)a1;
  byte_1C01D0D30 = 0;
  if ( (((unsigned __int8)a1 & 1) == 0 || RtlStringCchCatA(a1, a2, "|NEW") >= 0)
    && ((v2 & 2) == 0 || RtlStringCchCatA(a1, a2, "|INRANGE") >= 0)
    && ((v2 & 4) == 0 || RtlStringCchCatA(a1, a2, "|INCONTACT") >= 0)
    && ((v2 & 0x2000) == 0 || RtlStringCchCatA(a1, a2, "|PRIMARY") >= 0)
    && ((v2 & 0x4000) == 0 || RtlStringCchCatA(a1, a2, "|CONFIDENCE") >= 0)
    && (v2 >= 0 || RtlStringCchCatA(a1, a2, "|CANCELED") >= 0)
    && ((v2 & 0x10) == 0 || RtlStringCchCatA(a1, a2, "|FIRSTBUTTON") >= 0)
    && ((v2 & 0x20) == 0 || RtlStringCchCatA(a1, a2, "|SECONDBUTTON") >= 0)
    && (v2 & 0x40) != 0 )
  {
    RtlStringCchCatA(a1, a2, "|THIRDBUTTON");
  }
  return &byte_1C01D0D30;
}
