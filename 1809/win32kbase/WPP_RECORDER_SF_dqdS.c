/*
 * XREFs of WPP_RECORDER_SF_dqdS @ 0x1C0121524
 * Callers:
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0121120 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dqdS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        const struct _MCGEN_TRACE_CONTEXT *a9)
{
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  const struct _MCGEN_TRACE_CONTEXT *v14; // rax
  int v16; // [rsp+20h] [rbp-68h]

  v9 = gRimLog;
  v10 = -1LL;
  v11 = (__int64)a9;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( a9 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( *((_WORD *)&a9->RegistrationHandle + v12) );
      v13 = 2 * v12 + 2;
    }
    else
    {
      v13 = 10LL;
    }
    v14 = a9;
    if ( !a9 )
      v14 = &Context;
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, const struct _MCGEN_TRACE_CONTEXT *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_6348e708fd723b9140a504851f6d1be1_Traceguids,
      24LL,
      &a6,
      4LL,
      &a7,
      8LL,
      &a8,
      4LL,
      v14,
      v13,
      0LL);
  }
  if ( v11 )
  {
    do
      ++v10;
    while ( *(_WORD *)(v11 + 2 * v10) );
  }
  LOWORD(v16) = 24;
  return WppAutoLogTrace(v9, 3LL, 22LL, &WPP_6348e708fd723b9140a504851f6d1be1_Traceguids, v16, &a6);
}
