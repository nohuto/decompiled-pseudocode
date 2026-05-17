/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x1800480C0
 * Callers:
 *     RtlCapabilityCheck @ 0x180048270 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18000A720 (RtlEqualUnicodeString.c)
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x18003AFF0 (RtlUpcaseUnicodeString.c)
 *     RtlInitializeSid @ 0x1800487A0 (RtlInitializeSid.c)
 *     SHA256Final @ 0x180048A4C (SHA256Final.c)
 *     SHA256Update @ 0x180048B98 (SHA256Update.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlDeriveCapabilitySidsFromName(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // r8
  __int128 v8; // xmm0
  unsigned int v9; // edi
  unsigned int v10; // esi
  __int64 v11; // r8
  __int64 v12; // r8
  __int128 v13; // xmm0
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-69h] BYREF
  _DWORD v15[28]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v16; // [rsp+A0h] [rbp+17h] BYREF
  __int128 v17; // [rsp+B0h] [rbp+27h]

  if ( !a1 || !a2 || !a3 )
    __fastfail(5u);
  memset((void *)a3, 0, 0x30uLL);
  memset((void *)a2, 0, 0x2CuLL);
  result = RtlUpcaseUnicodeString((__int64)&UnicodeString, a1, 1);
  if ( (int)result >= 0 )
  {
    v15[8] = 0;
    v15[9] = 0;
    v15[0] = 1779033703;
    v15[1] = -1150833019;
    v15[2] = 1013904242;
    v15[3] = -1521486534;
    v15[4] = 1359893119;
    v15[5] = -1694144372;
    v15[6] = 528734635;
    v15[7] = 1541459225;
    SHA256Update(v15, UnicodeString.Buffer, UnicodeString.Length);
    SHA256Final(v15, &v16);
    LOBYTE(v7) = 9;
    RtlInitializeSid(a2, &RtlpNtAuthority, v7);
    v8 = v16;
    *(_DWORD *)(a2 + 8) = 32;
    *(_OWORD *)(a2 + 12) = v8;
    *(_OWORD *)(a2 + 28) = v17;
    v9 = 0;
    while ( 1 )
    {
      v10 = v9 + 1;
      if ( RtlEqualUnicodeString(&UnicodeString.Length, (__int64)&RtlpLegacyApplicationCapabilityNames + 16 * v9, 0) )
        break;
      ++v9;
      if ( v10 >= 0xC )
        goto LABEL_8;
    }
    LOBYTE(v11) = 2;
    RtlInitializeSid(a3, &RtlpAppPackageAuthority, v11);
    *(_DWORD *)(a3 + 8) = 3;
    *(_DWORD *)(a3 + 12) = v10;
LABEL_8:
    RtlFreeAnsiString(&UnicodeString);
    if ( v9 == 12 )
    {
      LOBYTE(v12) = 10;
      RtlInitializeSid(a3, &RtlpAppPackageAuthority, v12);
      v13 = v16;
      *(_DWORD *)(a3 + 8) = 3;
      *(_DWORD *)(a3 + 12) = 1024;
      *(_OWORD *)(a3 + 16) = v13;
      *(_OWORD *)(a3 + 32) = v17;
    }
    return 0LL;
  }
  return result;
}
