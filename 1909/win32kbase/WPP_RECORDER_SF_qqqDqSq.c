/*
 * XREFs of WPP_RECORDER_SF_qqqDqSq @ 0x1C0133318
 * Callers:
 *     RIMWatchDog @ 0x1C0037120 (RIMWatchDog.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qqqDqSq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  struct RECORDER_LOG__ *v5; // r14
  const struct _MCGEN_TRACE_CONTEXT *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  const struct _MCGEN_TRACE_CONTEXT *v11; // rax
  bool v12; // zf
  int v14; // [rsp+28h] [rbp-79h]
  __int64 v15; // [rsp+F0h] [rbp+4Fh] BYREF
  va_list va; // [rsp+F0h] [rbp+4Fh]
  __int64 v17; // [rsp+F8h] [rbp+57h] BYREF
  va_list va1; // [rsp+F8h] [rbp+57h]
  __int64 v19; // [rsp+100h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+100h] [rbp+5Fh]
  __int64 v21; // [rsp+108h] [rbp+67h] BYREF
  va_list va3; // [rsp+108h] [rbp+67h]
  __int64 v23; // [rsp+110h] [rbp+6Fh] BYREF
  va_list va4; // [rsp+110h] [rbp+6Fh]
  const struct _MCGEN_TRACE_CONTEXT *v25; // [rsp+118h] [rbp+77h]
  va_list va5; // [rsp+120h] [rbp+7Fh] BYREF

  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v19 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v21 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v23 = va_arg(va5, _QWORD);
  v25 = va_arg(va5, const struct _MCGEN_TRACE_CONTEXT *);
  v5 = gRimLog;
  v6 = v25;
  v7 = -1LL;
  v8 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v25 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( *((_WORD *)&v25->RegistrationHandle + v9) );
      v10 = 2 * v9 + 2;
    }
    else
    {
      v10 = 10LL;
    }
    v11 = v25;
    if ( !v25 )
      v11 = &Context;
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const struct _MCGEN_TRACE_CONTEXT *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_574de6f92de73fd98cf46f4140a2b0ba_Traceguids,
      17LL,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      (__int64 *)va2,
      8LL,
      (__int64 *)va3,
      4LL,
      (__int64 *)va4,
      8LL,
      v11,
      v10,
      va5,
      8LL,
      0LL);
  }
  v12 = v6 == 0LL;
  if ( v6 )
  {
    do
      ++v7;
    while ( *((_WORD *)&v6->RegistrationHandle + v7) );
    v8 = 2 * v7 + 2;
    v12 = v6 == 0LL;
  }
  if ( v12 )
    v6 = &Context;
  LOWORD(v14) = 17;
  return WppAutoLogTrace(
           v5,
           4LL,
           1LL,
           &WPP_574de6f92de73fd98cf46f4140a2b0ba_Traceguids,
           v14,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           (__int64 *)va2,
           8LL,
           (__int64 *)va3,
           4LL,
           (__int64 *)va4,
           8LL,
           v6,
           v8,
           va5);
}
