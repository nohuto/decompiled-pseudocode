/*
 * XREFs of WPP_RECORDER_SF_dqdSd @ 0x1C01216D8
 * Callers:
 *     ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1C0120F90 (-RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dqdSd(_DWORD a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  __int64 v5; // rbp
  const struct _MCGEN_TRACE_CONTEXT *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  const struct _MCGEN_TRACE_CONTEXT *v10; // rax
  int v12; // [rsp+20h] [rbp-78h]
  __int64 v13; // [rsp+C8h] [rbp+30h] BYREF
  va_list va; // [rsp+C8h] [rbp+30h]
  __int64 v15; // [rsp+D0h] [rbp+38h] BYREF
  va_list va1; // [rsp+D0h] [rbp+38h]
  __int64 v17; // [rsp+D8h] [rbp+40h] BYREF
  va_list va2; // [rsp+D8h] [rbp+40h]
  const struct _MCGEN_TRACE_CONTEXT *v19; // [rsp+E0h] [rbp+48h]
  va_list va3; // [rsp+E8h] [rbp+50h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  v19 = va_arg(va3, const struct _MCGEN_TRACE_CONTEXT *);
  v5 = gRimLog;
  v6 = v19;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( v19 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( *((_WORD *)&v19->RegistrationHandle + v8) );
      v9 = 2 * v8 + 2;
    }
    else
    {
      v9 = 10LL;
    }
    v10 = v19;
    if ( !v19 )
      v10 = &Context;
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const struct _MCGEN_TRACE_CONTEXT *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_6348e708fd723b9140a504851f6d1be1_Traceguids,
      19LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      8LL,
      (__int64 *)va2,
      4LL,
      v10,
      v9,
      va3,
      4LL,
      0LL);
  }
  if ( v6 )
  {
    do
      ++v7;
    while ( *((_WORD *)&v6->RegistrationHandle + v7) );
  }
  LOWORD(v12) = 19;
  return WppAutoLogTrace(v5, 3LL, 22LL, &WPP_6348e708fd723b9140a504851f6d1be1_Traceguids, v12, (__int64 *)va);
}
