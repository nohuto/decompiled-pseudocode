/*
 * XREFs of WPP_RECORDER_SF_qqqDqSq @ 0x1C010B63C
 * Callers:
 *     RIMWatchDog @ 0x1C0032AE0 (RIMWatchDog.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qqqDqSq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  const struct _MCGEN_TRACE_CONTEXT *v10; // rax
  int v12; // [rsp+28h] [rbp-79h]
  __int64 v13; // [rsp+F0h] [rbp+4Fh] BYREF
  va_list va; // [rsp+F0h] [rbp+4Fh]
  __int64 v15; // [rsp+F8h] [rbp+57h] BYREF
  va_list va1; // [rsp+F8h] [rbp+57h]
  __int64 v17; // [rsp+100h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+100h] [rbp+5Fh]
  __int64 v19; // [rsp+108h] [rbp+67h] BYREF
  va_list va3; // [rsp+108h] [rbp+67h]
  __int64 v21; // [rsp+110h] [rbp+6Fh] BYREF
  va_list va4; // [rsp+110h] [rbp+6Fh]
  const struct _MCGEN_TRACE_CONTEXT *v23; // [rsp+118h] [rbp+77h]
  va_list va5; // [rsp+120h] [rbp+7Fh] BYREF

  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v19 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v21 = va_arg(va5, _QWORD);
  v23 = va_arg(va5, const struct _MCGEN_TRACE_CONTEXT *);
  v5 = gRimLog;
  v6 = (__int64)v23;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( v23 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( *((_WORD *)&v23->RegistrationHandle + v8) );
      v9 = 2 * v8 + 2;
    }
    else
    {
      v9 = 10LL;
    }
    v10 = v23;
    if ( !v23 )
      v10 = &Context;
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const struct _MCGEN_TRACE_CONTEXT *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d998f4a8bf553c0e5a398c70dcc56ce3_Traceguids,
      19LL,
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
      v10,
      v9,
      va5,
      8LL,
      0LL);
  }
  if ( v6 )
  {
    do
      ++v7;
    while ( *(_WORD *)(v6 + 2 * v7) );
  }
  LOWORD(v12) = 19;
  return WppAutoLogTrace(v5, 3LL, 22LL, &WPP_d998f4a8bf553c0e5a398c70dcc56ce3_Traceguids, v12, (__int64 *)va);
}
