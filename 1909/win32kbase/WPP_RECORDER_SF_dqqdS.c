/*
 * XREFs of WPP_RECORDER_SF_dqqdS @ 0x1C014B364
 * Callers:
 *     RIMHandleTTMDeviceArrival @ 0x1C00A49D8 (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dqqdS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        char a9,
        const struct _MCGEN_TRACE_CONTEXT *a10)
{
  struct RECORDER_LOG__ *v10; // rsi
  const struct _MCGEN_TRACE_CONTEXT *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  const struct _MCGEN_TRACE_CONTEXT *v15; // rax
  __int64 v16; // rdi
  int v18; // [rsp+20h] [rbp-98h]
  int v19; // [rsp+80h] [rbp-38h] BYREF
  void *v20; // [rsp+88h] [rbp-30h] BYREF

  v10 = gRimLog;
  v11 = a10;
  v20 = &gTTMDevCallbacks;
  v12 = -1LL;
  v19 = 2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a10 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( *((_WORD *)&a10->RegistrationHandle + v13) );
      v14 = 2 * v13 + 2;
    }
    else
    {
      v14 = 10LL;
    }
    v15 = a10;
    if ( !a10 )
      v15 = &Context;
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, int *, __int64, char *, __int64, void **, __int64, char *, __int64, const struct _MCGEN_TRACE_CONTEXT *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_6878f1d2c442338edbb7ef469ac48284_Traceguids,
      10LL,
      &v19,
      4LL,
      &a7,
      8LL,
      &v20,
      8LL,
      &a9,
      4LL,
      v15,
      v14,
      0LL);
  }
  if ( v11 )
  {
    do
      ++v12;
    while ( *((_WORD *)&v11->RegistrationHandle + v12) );
    v16 = 2 * v12 + 2;
  }
  else
  {
    v16 = 10LL;
  }
  if ( !v11 )
    v11 = &Context;
  LOWORD(v18) = 10;
  return WppAutoLogTrace(
           v10,
           4LL,
           1LL,
           &WPP_6878f1d2c442338edbb7ef469ac48284_Traceguids,
           v18,
           &v19,
           4LL,
           &a7,
           8LL,
           &v20,
           8LL,
           &a9,
           4LL,
           v11,
           v16,
           0LL);
}
