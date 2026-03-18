/*
 * XREFs of sub_14090CB44 @ 0x14090CB44
 * Callers:
 *     ExpTimeRefreshWork @ 0x14059D9F0 (ExpTimeRefreshWork.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     EtwRegister @ 0x140718540 (EtwRegister.c)
 *     EtwUnregister @ 0x140748060 (EtwUnregister.c)
 */

int sub_14090CB44()
{
  int result; // eax
  int v1; // [rsp+30h] [rbp-19h] BYREF
  int v2; // [rsp+38h] [rbp-11h] BYREF
  int v3; // [rsp+40h] [rbp-9h] BYREF
  ULONGLONG RegHandle; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  __int64 *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  int *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  int *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]

  v2 = 7190;
  v1 = 6;
  v3 = 1;
  result = EtwRegister(&LicensingSqmProvider, 0LL, 0LL, &RegHandle);
  if ( result >= 0 )
  {
    UserData.Ptr = (ULONGLONG)&v1;
    v7 = 16LL;
    *(_QWORD *)&UserData.Size = 4LL;
    v6 = qword_140947CE0;
    v9 = 4LL;
    v8 = &v2;
    v10 = &v3;
    v11 = 4LL;
    EtwWrite(RegHandle, &LICENSING_SQM_INCREMENT_DWORD, 0LL, 4u, &UserData);
    return EtwUnregister(RegHandle);
  }
  return result;
}
