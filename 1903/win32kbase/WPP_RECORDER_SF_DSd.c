/*
 * XREFs of WPP_RECORDER_SF_DSd @ 0x1C01516E8
 * Callers:
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C00A6C0C (RIMRegisterForDeviceChangeNotifications.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_DSd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  struct RECORDER_LOG__ *v5; // rbp
  __int64 v6; // rdi
  const struct _MCGEN_TRACE_CONTEXT *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  const struct _MCGEN_TRACE_CONTEXT *v11; // rcx
  bool v12; // zf
  int v14; // [rsp+20h] [rbp-68h]
  __int64 v15; // [rsp+60h] [rbp-28h]
  __int64 v16; // [rsp+68h] [rbp-20h]
  __int64 v17; // [rsp+70h] [rbp-18h]
  __int64 v18; // [rsp+78h] [rbp-10h]
  __int64 v19; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  const struct _MCGEN_TRACE_CONTEXT *v21; // [rsp+C0h] [rbp+38h]
  va_list va1; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v19 = va_arg(va1, _QWORD);
  v21 = va_arg(va1, const struct _MCGEN_TRACE_CONTEXT *);
  v5 = gRimLog;
  v6 = -1LL;
  v7 = v21;
  v8 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v21 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( *((_WORD *)&v21->RegistrationHandle + v9) );
      v10 = 2 * v9 + 2;
    }
    else
    {
      v10 = 10LL;
    }
    v11 = v21;
    if ( !v21 )
      v11 = &Context;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
      57LL,
      (__int64 *)va,
      4LL,
      v11,
      v10,
      va1);
  }
  v12 = v7 == 0LL;
  if ( v7 )
  {
    do
      ++v6;
    while ( *((_WORD *)&v7->RegistrationHandle + v6) );
    v8 = 2 * v6 + 2;
    v12 = v7 == 0LL;
  }
  if ( v12 )
    v7 = &Context;
  LOWORD(v14) = 57;
  return WppAutoLogTrace(
           v5,
           4LL,
           1LL,
           &WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
           v14,
           (__int64 *)va,
           4LL,
           v7,
           v8,
           va1,
           4LL,
           0LL,
           v15,
           v16,
           v17,
           v18);
}
