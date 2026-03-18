/*
 * XREFs of WPP_RECORDER_SF_qqS @ 0x1C009365C
 * Callers:
 *     rimOnPnpArrived @ 0x1C004D7FC (rimOnPnpArrived.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        const struct _MCGEN_TRACE_CONTEXT *a8)
{
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  const struct _MCGEN_TRACE_CONTEXT *v15; // rcx
  int v16; // [rsp+20h] [rbp-68h]

  v8 = gRimLog;
  v9 = (__int64)a8;
  v10 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( a8 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( *((_WORD *)&a8->RegistrationHandle + v13) );
      v14 = 2 * v13 + 2;
    }
    else
    {
      v14 = 10LL;
    }
    v15 = a8;
    if ( !a8 )
      v15 = &Context;
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, const union _LARGE_INTEGER *, _QWORD, char *, __int64, char *, __int64, const struct _MCGEN_TRACE_CONTEXT *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
      a4,
      &a6,
      8LL,
      &a7,
      8LL,
      v15,
      v14,
      0LL);
  }
  if ( v9 )
  {
    do
      ++v10;
    while ( *(_WORD *)(v9 + 2 * v10) );
  }
  LOWORD(v16) = a4;
  return WppAutoLogTrace(v8, 3LL, 22LL, &WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids, v16, &a6);
}
