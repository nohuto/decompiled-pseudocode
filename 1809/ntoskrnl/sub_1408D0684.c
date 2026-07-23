/*
 * XREFs of sub_1408D0684 @ 0x1408D0684
 * Callers:
 *     ExpTimeRefreshWork @ 0x14056F0E0 (ExpTimeRefreshWork.c)
 * Callees:
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     EtwRegister @ 0x1406BF7E0 (EtwRegister.c)
 *     EtwUnregister @ 0x140708610 (EtwUnregister.c)
 */

int sub_1408D0684()
{
  int result; // eax
  int v1; // [rsp+30h] [rbp-19h] BYREF
  int v2; // [rsp+38h] [rbp-11h] BYREF
  int v3; // [rsp+40h] [rbp-9h] BYREF
  ULONGLONG RegHandle; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[4]; // [rsp+50h] [rbp+7h] BYREF

  v2 = 7190;
  memset(UserData, 0, sizeof(UserData));
  v1 = 6;
  v3 = 1;
  result = EtwRegister(&LicensingSqmProvider, 0LL, 0LL, &RegHandle);
  if ( result >= 0 )
  {
    UserData[0].Ptr = (ULONGLONG)&v1;
    *(_QWORD *)&UserData[1].Size = 16LL;
    *(_QWORD *)&UserData[0].Size = 4LL;
    UserData[1].Ptr = (ULONGLONG)qword_14090A8C0;
    *(_QWORD *)&UserData[2].Size = 4LL;
    UserData[2].Ptr = (ULONGLONG)&v2;
    UserData[3].Ptr = (ULONGLONG)&v3;
    *(_QWORD *)&UserData[3].Size = 4LL;
    EtwWrite(RegHandle, &LICENSING_SQM_INCREMENT_DWORD, 0LL, 4u, UserData);
    return EtwUnregister(RegHandle);
  }
  return result;
}
