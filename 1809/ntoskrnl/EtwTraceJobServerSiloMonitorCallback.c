/*
 * XREFs of EtwTraceJobServerSiloMonitorCallback @ 0x14018DB40
 * Callers:
 *     PspInvokeCreateCallback @ 0x140756A84 (PspInvokeCreateCallback.c)
 *     PspInvokeTerminateCallback @ 0x14088CEBC (PspInvokeTerminateCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EtwpCopyJobGuidSafe @ 0x1408B9270 (EtwpCopyJobGuidSafe.c)
 *     EtwpCopyJobIdSafe @ 0x1408B9294 (EtwpCopyJobIdSafe.c)
 */

BOOLEAN __fastcall EtwTraceJobServerSiloMonitorCallback(int a1, __int64 a2, unsigned __int16 *a3, int a4)
{
  const EVENT_DESCRIPTOR *v7; // rbx
  REGHANDLE v8; // rsi
  BOOLEAN result; // al
  unsigned int v10; // edx
  ULONGLONG v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // edx
  __int64 v14; // rax
  _BYTE v15[8]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v16[24]; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  _BYTE *v18; // [rsp+78h] [rbp-9h]
  int v19; // [rsp+80h] [rbp-1h]
  int v20; // [rsp+84h] [rbp+3h]
  int *v21; // [rsp+88h] [rbp+7h]
  int v22; // [rsp+90h] [rbp+Fh]
  int v23; // [rsp+94h] [rbp+13h]
  int v24; // [rsp+100h] [rbp+7Fh] BYREF

  v24 = a4;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v7 = &ServerSiloCreateCallbackStop;
    }
    else if ( a1 == 2 )
    {
      v7 = (const EVENT_DESCRIPTOR *)&ServerSiloTerminateCallbackStart;
    }
    else
    {
      v7 = (const EVENT_DESCRIPTOR *)&ServerSiloTerminateCallbackStop;
    }
  }
  else
  {
    v7 = (const EVENT_DESCRIPTOR *)&ServerSiloCreateCallbackStart;
  }
  v8 = EtwpPsProvRegHandle;
  result = EtwEventEnabled(EtwpPsProvRegHandle, v7);
  if ( result )
  {
    EtwpCopyJobGuidSafe(v16, a2);
    UserData.Reserved = 0;
    UserData.Ptr = (ULONGLONG)v16;
    UserData.Size = 16;
    EtwpCopyJobIdSafe(v15);
    v20 = 0;
    v18 = v15;
    v19 = 4;
    v10 = 2;
    if ( a1 == 1 )
    {
      v23 = 0;
      v21 = &v24;
      v10 = 3;
      v22 = 4;
    }
    v11 = *((_QWORD *)a3 + 1);
    v12 = v10;
    v13 = v10 + 1;
    v12 *= 2LL;
    *(&UserData.Reserved + 2 * v12) = 0;
    *(&UserData.Ptr + v12) = v11;
    *(&UserData.Size + 2 * v12) = *a3;
    v14 = 2LL * v13;
    *(&UserData.Reserved + 2 * v14) = 0;
    *(&UserData.Ptr + v14) = (ULONGLONG)&EtwpNull;
    *(&UserData.Size + 2 * v14) = 2;
    return EtwWriteEx(v8, v7, 0LL, 0, 0LL, 0LL, v13 + 1, &UserData);
  }
  return result;
}
