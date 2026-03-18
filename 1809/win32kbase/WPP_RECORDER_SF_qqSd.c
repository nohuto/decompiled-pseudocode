/*
 * XREFs of WPP_RECORDER_SF_qqSd @ 0x1C010FCC4
 * Callers:
 *     RIMOnPnpNotification @ 0x1C004FE90 (RIMOnPnpNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qqSd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  const struct _MCGEN_TRACE_CONTEXT *v10; // rcx
  int v12; // [rsp+20h] [rbp-68h]
  __int64 v13; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  __int64 v15; // [rsp+C0h] [rbp+38h] BYREF
  va_list va1; // [rsp+C0h] [rbp+38h]
  const struct _MCGEN_TRACE_CONTEXT *v17; // [rsp+C8h] [rbp+40h]
  va_list va2; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  v17 = va_arg(va2, const struct _MCGEN_TRACE_CONTEXT *);
  v5 = gRimLog;
  v6 = (__int64)v17;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( v17 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( *((_WORD *)&v17->RegistrationHandle + v8) );
      v9 = 2 * v8 + 2;
    }
    else
    {
      v9 = 10LL;
    }
    v10 = v17;
    if ( !v17 )
      v10 = &Context;
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, const struct _MCGEN_TRACE_CONTEXT *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids,
      57LL,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      v10,
      v9,
      va2,
      4LL,
      0LL);
  }
  if ( v6 )
  {
    do
      ++v7;
    while ( *(_WORD *)(v6 + 2 * v7) );
  }
  LOWORD(v12) = 57;
  return WppAutoLogTrace(v5, 3LL, 21LL, &WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v12, (__int64 *)va);
}
