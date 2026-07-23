/*
 * XREFs of SeEtwWriteKMCveEvent @ 0x1403126A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

NTSTATUS __stdcall SeEtwWriteKMCveEvent(PCUNICODE_STRING CveId, PCUNICODE_STRING AdditionalDetails)
{
  unsigned int v5; // edx
  __int64 v6; // rax
  REGHANDLE v7; // rcx
  _WORD v8[8]; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[4]; // [rsp+50h] [rbp+7h] BYREF

  memset(UserData, 0, sizeof(UserData));
  v8[0] = 0;
  if ( !CveId )
    return -1073741811;
  UserData[0].Ptr = (ULONGLONG)CveId->Buffer;
  v5 = 2;
  UserData[0].Size = CveId->Length;
  UserData[1].Ptr = (ULONGLONG)v8;
  UserData[0].Reserved = 0;
  *(_QWORD *)&UserData[1].Size = 2LL;
  if ( AdditionalDetails )
  {
    v5 = 3;
    UserData[2].Ptr = (ULONGLONG)AdditionalDetails->Buffer;
    UserData[2].Size = AdditionalDetails->Length;
    UserData[2].Reserved = 0;
  }
  v6 = v5;
  UserData[v6].Ptr = (ULONGLONG)v8;
  v7 = EtwCVEAuditProvRegHandle;
  *(_QWORD *)&UserData[v6].Size = 2LL;
  return EtwWriteEx(v7, &CVE_AUDIT_DETECT_KM, 0LL, 0, 0LL, 0LL, v5 + 1, UserData);
}
