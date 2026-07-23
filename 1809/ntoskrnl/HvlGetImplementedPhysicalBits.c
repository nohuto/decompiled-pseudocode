/*
 * XREFs of HvlGetImplementedPhysicalBits @ 0x14017D800
 * Callers:
 *     KiDetectKvaLeakage @ 0x1405720E4 (KiDetectKvaLeakage.c)
 * Callees:
 *     HviGetEnlightenmentInformation @ 0x14017D890 (HviGetEnlightenmentInformation.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall HvlGetImplementedPhysicalBits(int *a1)
{
  int v2; // eax
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]

  HviGetEnlightenmentInformation(v4);
  v2 = v5 & 0x7F;
  if ( (v5 & 0x7F) != 0 )
  {
    *a1 = v2;
    LOBYTE(v2) = 1;
  }
  return v2;
}
