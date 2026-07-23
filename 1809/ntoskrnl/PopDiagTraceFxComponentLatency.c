/*
 * XREFs of PopDiagTraceFxComponentLatency @ 0x1402E0868
 * Callers:
 *     PoFxSetComponentLatency @ 0x1402D74E0 (PoFxSetComponentLatency.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     PopFxAddLogEntry @ 0x1400FE884 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxComponentLatency(__int64 a1, int a2, __int64 a3)
{
  REGHANDLE v3; // rbx
  __int64 v4; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v6; // [rsp+58h] [rbp-28h]
  int v7; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+64h] [rbp-1Ch]
  __int64 *v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+70h] [rbp-10h]
  int v11; // [rsp+74h] [rbp-Ch]
  int v12; // [rsp+98h] [rbp+18h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+20h] BYREF

  v13 = a3;
  v12 = a2;
  v4 = a1;
  PopFxAddLogEntry(a1, a2, 9, a3);
  if ( PopDiagHandleRegistered )
  {
    v3 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_LATENCY) )
    {
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      UserData.Ptr = (ULONGLONG)&v4;
      UserData.Size = 8;
      v6 = &v12;
      v9 = &v13;
      v10 = 8;
      v7 = 4;
      EtwWriteEx(v3, &POP_ETW_EVENT_COMPONENT_LATENCY, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
    }
  }
}
