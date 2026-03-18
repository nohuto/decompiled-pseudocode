/*
 * XREFs of flagString @ 0x1C01748B0
 * Callers:
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C016D44C (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 * Callees:
 *     ?RtlStringCchCatA@@YAJPEAD_KPEBD@Z @ 0x1C016F9CC (-RtlStringCchCatA@@YAJPEAD_KPEBD@Z.c)
 */

char *__fastcall flagString(char *a1, __int64 a2)
{
  __int16 v2; // r11

  v2 = (__int16)a1;
  byte_1C0215330[0] = 0;
  if ( (((unsigned __int8)a1 & 1) == 0 || (int)RtlStringCchCatA(a1, a2, "|NEW") >= 0)
    && ((v2 & 2) == 0 || (int)RtlStringCchCatA(a1, a2, "|INRANGE") >= 0)
    && ((v2 & 4) == 0 || (int)RtlStringCchCatA(a1, a2, "|INCONTACT") >= 0)
    && ((v2 & 0x2000) == 0 || (int)RtlStringCchCatA(a1, a2, "|PRIMARY") >= 0)
    && ((v2 & 0x4000) == 0 || (int)RtlStringCchCatA(a1, a2, "|CONFIDENCE") >= 0)
    && (v2 >= 0 || (int)RtlStringCchCatA(a1, a2, "|CANCELED") >= 0)
    && ((v2 & 0x10) == 0 || (int)RtlStringCchCatA(a1, a2, "|FIRSTBUTTON") >= 0)
    && ((v2 & 0x20) == 0 || (int)RtlStringCchCatA(a1, a2, "|SECONDBUTTON") >= 0)
    && (v2 & 0x40) != 0 )
  {
    RtlStringCchCatA(a1, a2, "|THIRDBUTTON");
  }
  return byte_1C0215330;
}
