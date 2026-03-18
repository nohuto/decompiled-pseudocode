/*
 * XREFs of HvpLogEntryCheckHeaderChecksum @ 0x14082E8E4
 * Callers:
 *     HvpIsLogEntryHeaderCoherent @ 0x14083FAF4 (HvpIsLogEntryHeaderCoherent.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     SymCryptMarvin32 @ 0x1401BA654 (SymCryptMarvin32.c)
 */

_BOOL8 __fastcall HvpLogEntryCheckHeaderChecksum(__int64 a1)
{
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_DWORD *)a1 != 1162638920 )
    return 0LL;
  SymCryptMarvin32(HvSymcryptSeed, (unsigned __int16 *)a1, 0x20uLL, &v3);
  return *(_QWORD *)(a1 + 32) == v3;
}
