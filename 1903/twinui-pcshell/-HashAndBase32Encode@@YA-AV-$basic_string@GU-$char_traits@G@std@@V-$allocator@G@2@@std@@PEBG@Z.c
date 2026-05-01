/*
 * XREFs of ?HashAndBase32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800B04DC
 * Callers:
 *     ?GetCertSignerHashFromExe@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800B0444 (-GetCertSignerHashFromExe@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEB.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Base32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAEK@Z @ 0x1800B0350 (-Base32Encode@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAEK@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180162798 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int16 *__fastcall HashAndBase32Encode(unsigned __int16 *a1, const BYTE *a2)
{
  BOOL v4; // eax
  const char *v5; // r9
  wil::details::in1diag3 *v6; // rcx
  BOOL v7; // eax
  const char *v8; // r9
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rax
  const char *v11; // r9
  unsigned int v12; // r8d
  const char *v13; // r9
  HCRYPTHASH phHash; // [rsp+30h] [rbp-50h] BYREF
  HCRYPTPROV phProv; // [rsp+38h] [rbp-48h] BYREF
  DWORD pdwDataLen; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+48h] [rbp-38h]
  BYTE pbData[32]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v18 = -2LL;
  phProv = 0LL;
  v4 = CryptAcquireContextW(&phProv, 0LL, L"Microsoft Enhanced RSA and AES Cryptographic Provider", 0x18u, 0xF0000000);
  v6 = retaddr;
  if ( !v4 )
    goto LABEL_13;
  phHash = 0LL;
  v7 = CryptCreateHash(phProv, 0x800Cu, 0LL, 0, &phHash);
  v9 = retaddr;
  if ( !v7 )
    goto LABEL_14;
  v10 = -1LL;
  do
    ++v10;
  while ( *(_WORD *)&a2[2 * v10] );
  if ( !CryptHashData(phHash, a2, 2 * v10, 0) )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x5C,
      (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      v11);
    __debugbreak();
  }
  pdwDataLen = 32;
  if ( !CryptGetHashParam(phHash, 2u, pbData, &pdwDataLen, 0) )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x60,
      (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      v13);
LABEL_13:
    wil::details::in1diag3::_Throw_GetLastError(
      v6,
      (void *)0x57,
      (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      v5);
LABEL_14:
    wil::details::in1diag3::_Throw_GetLastError(
      v9,
      (void *)0x59,
      (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\certsignerhash.cpp",
      v8);
    __debugbreak();
  }
  Base32Encode(a1, pbData, v12);
  if ( phHash )
    CryptDestroyHash(phHash);
  if ( phProv )
    CryptReleaseContext(phProv, 0);
  return a1;
}
