/*
 * XREFs of SepSetProcessUniqueAttribute @ 0x14061AEA4
 * Callers:
 *     SeSubProcessToken @ 0x14061AA40 (SeSubProcessToken.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140084C80 (AuthzBasepSetSecurityAttributesToken.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x14060C7D0 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepAddLuidToIndexEntry @ 0x14061B08C (SepAddLuidToIndexEntry.c)
 */

__int64 __fastcall SepSetProcessUniqueAttribute(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v3; // rcx
  _BYTE v4[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v5; // [rsp+28h] [rbp-48h] BYREF
  _DWORD v6[2]; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING *v7; // [rsp+38h] [rbp-38h]
  UNICODE_STRING DestinationString[3]; // [rsp+40h] [rbp-30h] BYREF
  int v9; // [rsp+90h] [rbp+20h] BYREF
  __int64 v10; // [rsp+98h] [rbp+28h] BYREF

  memset(DestinationString, 0, 0x28uLL);
  v10 = 0LL;
  v5 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  result = SepAddLuidToIndexEntry(&v5, v4, &v10);
  if ( (int)result >= 0 )
  {
    SepRefDerefLuidToIndexEntryIfNecessary(a1, 1);
    *(_QWORD *)(a1 + 1136) = v10;
    RtlInitUnicodeString(DestinationString, L"TSA://ProcUnique");
    v3 = *(_DWORD **)(a1 + 776);
    LODWORD(DestinationString[1].Buffer) = 2;
    *(_DWORD *)&DestinationString[1].Length = 2;
    *(_QWORD *)&DestinationString[2].Length = v4;
    *(_DWORD *)(&DestinationString[1].MaximumLength + 1) = 65;
    v7 = DestinationString;
    v9 = 4;
    v6[0] = 1;
    v6[1] = 1;
    return AuthzBasepSetSecurityAttributesToken(v3, &v9, (__int64)v6);
  }
  return result;
}
