/*
 * XREFs of PopDiagTraceShutdownAction @ 0x1402E1FCC
 * Callers:
 *     PopExecutePowerAction @ 0x1406DF390 (PopExecutePowerAction.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceShutdownAction(int a1, int a2, int a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v6; // rbx
  int v8; // [rsp+40h] [rbp-40h] BYREF
  int v9; // [rsp+44h] [rbp-3Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+64h] [rbp-1Ch]
  int *v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+70h] [rbp-10h]
  int v16; // [rsp+74h] [rbp-Ch]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+8h] BYREF
  int v18; // [rsp+98h] [rbp+18h] BYREF

  v3 = &retaddr;
  v18 = a2;
  if ( PopDiagHandleRegistered )
  {
    v6 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SHUTDOWN_ACTION);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v13 = 0;
      v16 = 0;
      UserData.Ptr = (ULONGLONG)&v8;
      UserData.Size = 4;
      v11 = &v18;
      v12 = 4;
      v14 = &v9;
      v15 = 4;
      v8 = a1;
      v9 = a3;
      LOBYTE(v3) = EtwWriteEx(v6, &POP_ETW_EVENT_SHUTDOWN_ACTION, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return (char)v3;
}
