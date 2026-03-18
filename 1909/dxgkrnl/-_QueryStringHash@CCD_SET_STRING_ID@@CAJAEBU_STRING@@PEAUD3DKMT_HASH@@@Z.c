/*
 * XREFs of ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x1C00D9960
 * Callers:
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00D9914 (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DD974 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C01306C8 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 * Callees:
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x1C00D9A04 (-CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_QueryStringHash(PCANSI_STRING SourceString, struct D3DKMT_HASH *a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 Md5Checksum; // rbx
  __int64 v10; // rax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_OWORD *)a2 = 0u;
  *((_DWORD *)a2 + 4) = 0;
  v4 = RtlAnsiStringToUnicodeString(&UnicodeString, SourceString, 1u);
  Md5Checksum = v4;
  if ( v4 < 0
    || (Md5Checksum = (int)CcdCreateMd5Checksum(
                             (const unsigned __int8 *)UnicodeString.Buffer,
                             UnicodeString.Length,
                             (unsigned __int8 *)a2 + 4),
        RtlFreeUnicodeString(&UnicodeString),
        (int)Md5Checksum < 0) )
  {
    v10 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v10 + 24) = Md5Checksum;
    *(_QWORD *)(v10 + 32) = SourceString;
    WdLogEvent5_WdError(v10);
  }
  else
  {
    *(_DWORD *)a2 = 1;
  }
  return (unsigned int)Md5Checksum;
}
