/*
 * XREFs of WPP_RECORDER_SF_LsHHsLLLL @ 0x1C0177280
 * Callers:
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C016F63C (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_LsHHsLLLL(_DWORD a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  struct RECORDER_LOG__ *v5; // r14
  const struct _MCGEN_TRACE_CONTEXT *v6; // rdi
  __int64 v7; // rbx
  const struct _MCGEN_TRACE_CONTEXT *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  const struct _MCGEN_TRACE_CONTEXT *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  int v17; // [rsp+28h] [rbp-99h]
  __int64 v18; // [rsp+110h] [rbp+4Fh] BYREF
  va_list va; // [rsp+110h] [rbp+4Fh]
  const struct _MCGEN_TRACE_CONTEXT *v20; // [rsp+118h] [rbp+57h]
  __int64 v21; // [rsp+120h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+120h] [rbp+5Fh]
  __int64 v23; // [rsp+128h] [rbp+67h] BYREF
  va_list va2; // [rsp+128h] [rbp+67h]
  const struct _MCGEN_TRACE_CONTEXT *v25; // [rsp+130h] [rbp+6Fh]
  va_list va3; // [rsp+138h] [rbp+77h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v18 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, const struct _MCGEN_TRACE_CONTEXT *);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  v25 = va_arg(va3, const struct _MCGEN_TRACE_CONTEXT *);
  v5 = gBaseLog;
  v6 = v25;
  v7 = -1LL;
  v8 = v20;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v25 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( *((_BYTE *)&v25->RegistrationHandle + v9) );
    }
    if ( v20 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( *((_BYTE *)&v20->RegistrationHandle + v10) );
      v11 = v10 + 1;
    }
    else
    {
      v11 = 5LL;
    }
    v12 = v20;
    if ( !v20 )
      v12 = &stru_1C01EAA14;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_06d7dff703a03015e007562f188a8383_Traceguids,
      283LL,
      (__int64 *)va,
      4LL,
      v12,
      v11,
      (__int64 *)va1);
  }
  if ( v6 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *((_BYTE *)&v6->RegistrationHandle + v13) );
    v14 = v13 + 1;
  }
  else
  {
    v14 = 5LL;
  }
  if ( !v6 )
    v6 = &stru_1C01EAA14;
  if ( v8 )
  {
    do
      ++v7;
    while ( *((_BYTE *)&v8->RegistrationHandle + v7) );
    v15 = v7 + 1;
  }
  else
  {
    v15 = 5LL;
  }
  if ( !v8 )
    v8 = &stru_1C01EAA14;
  LOWORD(v17) = 283;
  return WppAutoLogTrace(
           v5,
           4LL,
           7LL,
           &WPP_06d7dff703a03015e007562f188a8383_Traceguids,
           v17,
           (__int64 *)va,
           4LL,
           v8,
           v15,
           (__int64 *)va1,
           2LL,
           (__int64 *)va2,
           2LL,
           v6,
           v14,
           va3);
}
