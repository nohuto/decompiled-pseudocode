/*
 * XREFs of HvpLogEntryCheckHeaderChecksum @ 0x1407F5CA8
 * Callers:
 *     HvpIsLogEntryHeaderCoherent @ 0x140806CAC (HvpIsLogEntryHeaderCoherent.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     SymCryptMarvin32 @ 0x1401AF024 (SymCryptMarvin32.c)
 */

_BOOL8 __fastcall HvpLogEntryCheckHeaderChecksum(__int64 a1)
{
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_DWORD *)a1 != 1162638920 )
    return 0LL;
  SymCryptMarvin32(HvSymcryptSeed, (unsigned __int16 *)a1, 0x20uLL, &v3);
  return *(_QWORD *)(a1 + 32) == v3;
}
