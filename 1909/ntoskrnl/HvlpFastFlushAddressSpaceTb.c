/*
 * XREFs of HvlpFastFlushAddressSpaceTb @ 0x14028D8B8
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x14028D684 (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1401CE3E0 (HvcallpExtendedFastHypercall.c)
 *     HvlpPrepareFlushHeader @ 0x14028DDA0 (HvlpPrepareFlushHeader.c)
 */

__int64 __fastcall HvlpFastFlushAddressSpaceTb(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v5; // [rsp+20h] [rbp-48h]
  _BYTE v6[32]; // [rsp+30h] [rbp-38h] BYREF

  LOBYTE(a4) = a3;
  HvlpPrepareFlushHeader(v6, a1, a2, a4, 2LL);
  LODWORD(v5) = 65538;
  return HvcallpExtendedFastHypercall(v5, (__int64)v6, 24LL);
}
