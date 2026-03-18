/*
 * XREFs of WPP_RECORDER_SF_Sdq @ 0x1C012554C
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C004EC60 (RIMDeviceClassNotify.c)
 *     RIMVirtDeviceClassNotify @ 0x1C01248AC (RIMVirtDeviceClassNotify.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Sdq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        const struct _MCGEN_TRACE_CONTEXT *a6,
        ...)
{
  __int64 v6; // r14
  __int64 v7; // rdi
  const struct _MCGEN_TRACE_CONTEXT *v8; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  const struct _MCGEN_TRACE_CONTEXT *v12; // rcx
  bool v13; // zf
  int v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+B0h] [rbp+38h] BYREF
  va_list va; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v16 = va_arg(va1, _QWORD);
  v6 = gRimLog;
  v7 = -1LL;
  v8 = a6;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( a6 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( *((_WORD *)&a6->RegistrationHandle + v10) );
      v11 = 2 * v10 + 2;
    }
    else
    {
      v11 = 10LL;
    }
    v12 = a6;
    if ( !a6 )
      v12 = &Context;
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, const union _LARGE_INTEGER *, _QWORD, const struct _MCGEN_TRACE_CONTEXT *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
      a4,
      v12,
      v11,
      (__int64 *)va,
      4LL,
      va1,
      8LL,
      0LL);
  }
  v13 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( *((_WORD *)&a6->RegistrationHandle + v7) );
    v13 = a6 == 0LL;
  }
  if ( v13 )
    v8 = &Context;
  LOWORD(v15) = a4;
  return WppAutoLogTrace(v6, 3LL, 21LL, &WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids, v15, v8);
}
