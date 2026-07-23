/*
 * XREFs of PopDiagTraceFxComponentWake @ 0x1402E0A40
 * Callers:
 *     PoFxSetComponentWake @ 0x1402D7580 (PoFxSetComponentWake.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     PopFxAddLogEntry @ 0x1400FE884 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxComponentWake(__int64 a1, int a2, unsigned __int8 a3)
{
  REGHANDLE v4; // rbx
  int v5; // [rsp+48h] [rbp+7h] BYREF
  __int64 v6; // [rsp+50h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+17h] BYREF
  int *v8; // [rsp+68h] [rbp+27h]
  int v9; // [rsp+70h] [rbp+2Fh]
  int v10; // [rsp+74h] [rbp+33h]
  int *v11; // [rsp+78h] [rbp+37h]
  int v12; // [rsp+80h] [rbp+3Fh]
  int v13; // [rsp+84h] [rbp+43h]
  int v14; // [rsp+B0h] [rbp+6Fh] BYREF

  v14 = a2;
  v6 = a1;
  PopFxAddLogEntry(a1, a2, 11, a3);
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_WAKE) )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v5 = a3;
      UserData.Ptr = (ULONGLONG)&v6;
      v8 = &v14;
      v11 = &v5;
      v9 = 4;
      v12 = 4;
      UserData.Size = 8;
      EtwWriteEx(v4, &POP_ETW_EVENT_COMPONENT_WAKE, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
}
