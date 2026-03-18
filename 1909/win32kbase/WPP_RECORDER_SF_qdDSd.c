/*
 * XREFs of WPP_RECORDER_SF_qdDSd @ 0x1C014BDC4
 * Callers:
 *     RIMOpenDev @ 0x1C00531F0 (RIMOpenDev.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qdDSd(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  struct RECORDER_LOG__ *v5; // r14
  __int64 v6; // rdi
  const struct _MCGEN_TRACE_CONTEXT *v7; // rbx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  const struct _MCGEN_TRACE_CONTEXT *v12; // rax
  bool v13; // zf
  int v15; // [rsp+20h] [rbp-78h]
  __int64 v16; // [rsp+C8h] [rbp+30h] BYREF
  va_list va; // [rsp+C8h] [rbp+30h]
  __int64 v18; // [rsp+D0h] [rbp+38h] BYREF
  va_list va1; // [rsp+D0h] [rbp+38h]
  __int64 v20; // [rsp+D8h] [rbp+40h] BYREF
  va_list va2; // [rsp+D8h] [rbp+40h]
  const struct _MCGEN_TRACE_CONTEXT *v22; // [rsp+E0h] [rbp+48h]
  va_list va3; // [rsp+E8h] [rbp+50h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v16 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v18 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v20 = va_arg(va3, _QWORD);
  v22 = va_arg(va3, const struct _MCGEN_TRACE_CONTEXT *);
  v5 = gRimLog;
  v6 = -1LL;
  v7 = v22;
  v9 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v22 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( *((_WORD *)&v22->RegistrationHandle + v10) );
      v11 = 2 * v10 + 2;
    }
    else
    {
      v11 = 10LL;
    }
    v12 = v22;
    if ( !v22 )
      v12 = &Context;
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const struct _MCGEN_TRACE_CONTEXT *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_b4f7f5930cc337ed86d67593361a7c26_Traceguids,
      a4,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      v12,
      v11,
      va3,
      4LL,
      0LL);
  }
  v13 = v7 == 0LL;
  if ( v7 )
  {
    do
      ++v6;
    while ( *((_WORD *)&v7->RegistrationHandle + v6) );
    v9 = 2 * v6 + 2;
    v13 = v7 == 0LL;
  }
  if ( v13 )
    v7 = &Context;
  LOWORD(v15) = a4;
  return WppAutoLogTrace(
           v5,
           4LL,
           1LL,
           &WPP_b4f7f5930cc337ed86d67593361a7c26_Traceguids,
           v15,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           4LL,
           v7,
           v9,
           va3,
           4LL,
           0LL);
}
