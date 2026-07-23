/*
 * XREFs of SymCryptSha256 @ 0x1401AF458
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x1400DCEA0 (RtlDeriveCapabilitySidsFromName.c)
 *     KeComputeSha256 @ 0x140190D70 (KeComputeSha256.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     SymCryptSha256Append @ 0x1401AF4D0 (SymCryptSha256Append.c)
 *     SymCryptSha256Init @ 0x1401B0CD0 (SymCryptSha256Init.c)
 *     SymCryptSha256Result @ 0x1401B0D00 (SymCryptSha256Result.c)
 */

__int64 __fastcall SymCryptSha256(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v7[128]; // [rsp+20h] [rbp-A8h] BYREF

  SymCryptSha256Init(v7);
  SymCryptSha256Append(v7, a1, a2);
  return SymCryptSha256Result(v7, a3);
}
