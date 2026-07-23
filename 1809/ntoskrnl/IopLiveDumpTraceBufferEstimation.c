/*
 * XREFs of IopLiveDumpTraceBufferEstimation @ 0x140285ED8
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x140579B0C (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140285D68 (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTraceBufferEstimation()
{
  char result; // al
  _QWORD *v1; // rcx
  __int64 v2; // [rsp+40h] [rbp-19h] BYREF
  __int64 v3; // [rsp+48h] [rbp-11h] BYREF
  __int64 v4; // [rsp+50h] [rbp-9h] BYREF
  __int64 v5; // [rsp+58h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp+7h] BYREF
  __int64 *v7; // [rsp+70h] [rbp+17h]
  __int64 v8; // [rsp+78h] [rbp+1Fh]
  __int64 *v9; // [rsp+80h] [rbp+27h]
  __int64 v10; // [rsp+88h] [rbp+2Fh]
  __int64 *v11; // [rsp+90h] [rbp+37h]
  __int64 v12; // [rsp+98h] [rbp+3Fh]

  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    v2 = v1[13] << 12;
    v3 = v1[12] << 12;
    v4 = v1[14] << 12;
    v5 = v1[15] << 12;
    UserData.Ptr = (ULONGLONG)&v2;
    v7 = &v3;
    v9 = &v4;
    v11 = &v5;
    *(_QWORD *)&UserData.Size = 8LL;
    v8 = 8LL;
    v10 = 8LL;
    v12 = 8LL;
    return EtwWriteEx(
             IopLiveDumpEtwRegHandle,
             &LIVEDUMP_EVENT_SIZING_WORKFLOW_BUFFER_ESTIMATION,
             0LL,
             0,
             0LL,
             0LL,
             4u,
             &UserData);
  }
  return result;
}
