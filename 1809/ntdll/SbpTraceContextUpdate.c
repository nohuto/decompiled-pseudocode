/*
 * XREFs of SbpTraceContextUpdate @ 0x1801116A8
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x1800279F0 (SbUpdateSwitchContextBasedOnDll.c)
 *     SbSelectProcedure @ 0x180027CD0 (SbSelectProcedure.c)
 *     SbObtainTraceHandle @ 0x1800826E0 (SbObtainTraceHandle.c)
 * Callees:
 *     EtwEventWrite @ 0x18004DC20 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

ULONG __fastcall SbpTraceContextUpdate(
        REGHANDLE RegHandle,
        unsigned __int64 a2,
        __int16 a3,
        unsigned __int16 a4,
        unsigned __int64 a5)
{
  ULONG v9; // r8d
  __int16 v11; // [rsp+28h] [rbp-61h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData[8]; // [rsp+38h] [rbp-51h] BYREF
  unsigned __int16 v13; // [rsp+100h] [rbp+77h] BYREF

  v13 = a4;
  memset(UserData, 0, sizeof(UserData));
  v11 = a3;
  UserData[0].Ptr = a2;
  UserData[1].Ptr = (unsigned __int64)&v11;
  UserData[2].Ptr = (unsigned __int64)&v13;
  *(_QWORD *)&UserData[0].Size = 16LL;
  v9 = 3;
  *(_QWORD *)&UserData[1].Size = 2LL;
  *(_QWORD *)&UserData[2].Size = 2LL;
  if ( a4 )
  {
    v9 = 4;
    UserData[3].Ptr = a5;
    UserData[3].Size = a4;
    UserData[3].Reserved = 0;
  }
  return EtwEventWrite(RegHandle, &AeSbContextUpdateEvent, v9, UserData);
}
