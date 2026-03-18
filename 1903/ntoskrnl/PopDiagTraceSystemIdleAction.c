/*
 * XREFs of PopDiagTraceSystemIdleAction @ 0x1408B1004
 * Callers:
 *     PopExecuteSystemIdleAction @ 0x1408B31B0 (PopExecuteSystemIdleAction.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceSystemIdleAction(int a1, unsigned __int8 a2, int a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v5; // rbx
  int v7; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  int *v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+54h] [rbp-1Ch]
  int *v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+60h] [rbp-10h]
  int v14; // [rsp+64h] [rbp-Ch]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+8h] BYREF
  int v16; // [rsp+80h] [rbp+10h] BYREF
  int v17; // [rsp+90h] [rbp+20h] BYREF

  v3 = &retaddr;
  v17 = a3;
  v16 = a1;
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SIDLE_UPDATE_NOTIFICATION_WORKER);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      v7 = a2;
      UserData.Ptr = (ULONGLONG)&v7;
      UserData.Size = 4;
      v9 = &v17;
      v12 = &v16;
      v10 = 4;
      v13 = 4;
      LOBYTE(v3) = EtwWrite(v5, &POP_ETW_EVENT_SIDLE_UPDATE_NOTIFICATION_WORKER, 0LL, 3u, &UserData);
    }
  }
  return (char)v3;
}
