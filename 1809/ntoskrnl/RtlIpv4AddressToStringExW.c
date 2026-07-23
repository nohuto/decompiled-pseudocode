/*
 * XREFs of RtlIpv4AddressToStringExW @ 0x14016D260
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv4AddressToStringW @ 0x14013B7B0 (RtlIpv4AddressToStringW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     swprintf_s @ 0x14019A4A0 (swprintf_s.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

NTSTATUS __stdcall RtlIpv4AddressToStringExW(
        const struct in_addr *Address,
        USHORT Port,
        PWSTR AddressString,
        PULONG AddressStringLength)
{
  wchar_t *v7; // rax
  wchar_t *v8; // rbx
  ULONG v9; // ebx
  NTSTATUS result; // eax
  WCHAR S[22]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v12[4]; // [rsp+4Ch] [rbp-3Ch] BYREF

  if ( Address && AddressStringLength && (AddressString || !*AddressStringLength) )
  {
    v7 = RtlIpv4AddressToStringW(Address, S);
    v8 = v7;
    if ( Port )
      v8 = &v7[swprintf_s(v7, (v12 - (_BYTE *)v7) >> 1, L":%u", (unsigned __int16)__ROR2__(Port, 8))];
    v9 = v8 - S + 1;
    if ( *AddressStringLength >= v9 )
    {
      memmove(AddressString, S, 2LL * v9);
      result = 0;
      *AddressStringLength = v9;
      return result;
    }
    *AddressStringLength = v9;
  }
  return -1073741811;
}
