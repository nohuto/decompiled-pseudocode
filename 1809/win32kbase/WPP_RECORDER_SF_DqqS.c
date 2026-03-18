/*
 * XREFs of WPP_RECORDER_SF_DqqS @ 0x1C0125128
 * Callers:
 *     rimOnPnpArrived @ 0x1C004D7FC (rimOnPnpArrived.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DqqS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        const struct _MCGEN_TRACE_CONTEXT *a9)
{
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  const struct _MCGEN_TRACE_CONTEXT *v15; // rax
  int v17; // [rsp+20h] [rbp-68h]

  v9 = gRimLog;
  v10 = (__int64)a9;
  v11 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( a9 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( *((_WORD *)&a9->RegistrationHandle + v13) );
      v14 = 2 * v13 + 2;
    }
    else
    {
      v14 = 10LL;
    }
    v15 = a9;
    if ( !a9 )
      v15 = &Context;
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, const union _LARGE_INTEGER *, _QWORD, char *, __int64, char *, __int64, char *, __int64, const struct _MCGEN_TRACE_CONTEXT *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
      a4,
      &a6,
      4LL,
      &a7,
      8LL,
      &a8,
      8LL,
      v15,
      v14,
      0LL);
  }
  if ( v10 )
  {
    do
      ++v11;
    while ( *(_WORD *)(v10 + 2 * v11) );
  }
  LOWORD(v17) = a4;
  return WppAutoLogTrace(v9, 3LL, 22LL, &WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids, v17, &a6);
}
