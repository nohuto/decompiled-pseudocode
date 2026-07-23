/*
 * XREFs of SepSetTokenAllApplicationPackagesPolicy @ 0x1403003E4
 * Callers:
 *     SeSubProcessToken @ 0x14064FC0C (SeSubProcessToken.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400D8B14 (AuthzBasepSetSecurityAttributesToken.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall SepSetTokenAllApplicationPackagesPolicy(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  _DWORD *v4; // rcx
  _QWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString[3]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8; // [rsp+70h] [rbp+10h] BYREF
  int v9; // [rsp+78h] [rbp+18h] BYREF

  v2 = a2;
  memset(DestinationString, 0, 0x28uLL);
  v8 = v2;
  RtlInitUnicodeString(DestinationString, L"WIN://NOALLAPPPKG");
  *(_QWORD *)&DestinationString[1].Length = 2LL;
  LODWORD(DestinationString[1].Buffer) = 1;
  *(_QWORD *)&DestinationString[2].Length = &v8;
  v6[0] = 0x100000001LL;
  v4 = *(_DWORD **)(a1 + 776);
  v6[1] = DestinationString;
  v9 = 4;
  return AuthzBasepSetSecurityAttributesToken(v4, &v9, (__int64)v6);
}
