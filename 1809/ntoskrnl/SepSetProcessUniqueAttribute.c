/*
 * XREFs of SepSetProcessUniqueAttribute @ 0x140650054
 * Callers:
 *     SeSubProcessToken @ 0x14064FC0C (SeSubProcessToken.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400D8B14 (AuthzBasepSetSecurityAttributesToken.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x140650140 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepAddLuidToIndexEntry @ 0x14065016C (SepAddLuidToIndexEntry.c)
 */

__int64 __fastcall SepSetProcessUniqueAttribute(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _DWORD *v4; // rcx
  __int64 v5; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING *v6; // [rsp+28h] [rbp-48h]
  _BYTE v7[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v8; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString[3]; // [rsp+40h] [rbp-30h] BYREF
  int v10; // [rsp+90h] [rbp+20h] BYREF
  __int64 v11; // [rsp+98h] [rbp+28h] BYREF

  memset(DestinationString, 0, 0x28uLL);
  v5 = 0LL;
  v6 = 0LL;
  v11 = 0LL;
  v8 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  result = SepAddLuidToIndexEntry(&v8, v7, &v11);
  if ( (int)result >= 0 )
  {
    LOBYTE(v3) = 1;
    SepRefDerefLuidToIndexEntryIfNecessary(a1, v3);
    *(_QWORD *)(a1 + 1136) = v11;
    RtlInitUnicodeString(DestinationString, L"TSA://ProcUnique");
    v4 = *(_DWORD **)(a1 + 776);
    LODWORD(DestinationString[1].Buffer) = 2;
    *(_DWORD *)&DestinationString[1].Length = 2;
    *(_QWORD *)&DestinationString[2].Length = v7;
    *(_DWORD *)(&DestinationString[1].MaximumLength + 1) = 65;
    v6 = DestinationString;
    v10 = 4;
    v5 = 0x100000001LL;
    return AuthzBasepSetSecurityAttributesToken(v4, &v10, (__int64)&v5);
  }
  return result;
}
