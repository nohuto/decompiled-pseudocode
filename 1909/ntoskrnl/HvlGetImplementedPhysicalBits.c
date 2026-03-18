/*
 * XREFs of HvlGetImplementedPhysicalBits @ 0x14018BEC8
 * Callers:
 *     KiDetectKvaLeakage @ 0x1405A101C (KiDetectKvaLeakage.c)
 * Callees:
 *     HviGetEnlightenmentInformation @ 0x14018BF60 (HviGetEnlightenmentInformation.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

char __fastcall HvlGetImplementedPhysicalBits(_DWORD *a1)
{
  int v2; // eax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]

  v4 = 0LL;
  v5 = 0LL;
  HviGetEnlightenmentInformation(&v4);
  v2 = v5 & 0x7F;
  if ( (v5 & 0x7F) != 0 )
  {
    *a1 = v2;
    LOBYTE(v2) = 1;
  }
  return v2;
}
