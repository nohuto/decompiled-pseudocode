/*
 * XREFs of WPP_RECORDER_SF_dqqS @ 0x1C0151C5C
 * Callers:
 *     rimOnPnpArrived @ 0x1C00690B0 (rimOnPnpArrived.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dqqS(
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
  struct RECORDER_LOG__ *v9; // r14
  const struct _MCGEN_TRACE_CONTEXT *v10; // rbx
  __int64 v11; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  const struct _MCGEN_TRACE_CONTEXT *v16; // rax
  bool v17; // zf
  int v19; // [rsp+20h] [rbp-68h]
  __int64 v20; // [rsp+70h] [rbp-18h]
  __int64 v21; // [rsp+78h] [rbp-10h]

  v9 = gRimLog;
  v10 = a9;
  v11 = -1LL;
  v13 = 10LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a9 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( *((_WORD *)&a9->RegistrationHandle + v14) );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v15 = 10LL;
    }
    v16 = a9;
    if ( !a9 )
      v16 = &Context;
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, const union _LARGE_INTEGER *, _QWORD, char *, __int64, char *, __int64, char *, __int64, const struct _MCGEN_TRACE_CONTEXT *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
      a4,
      &a6,
      4LL,
      &a7,
      8LL,
      &a8,
      8LL,
      v16,
      v15,
      0LL);
  }
  v17 = v10 == 0LL;
  if ( v10 )
  {
    do
      ++v11;
    while ( *((_WORD *)&v10->RegistrationHandle + v11) );
    v13 = 2 * v11 + 2;
    v17 = v10 == 0LL;
  }
  if ( v17 )
    v10 = &Context;
  LOWORD(v19) = a4;
  return WppAutoLogTrace(
           v9,
           4LL,
           1LL,
           &WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
           v19,
           &a6,
           4LL,
           &a7,
           8LL,
           &a8,
           8LL,
           v10,
           v13,
           0LL,
           v20,
           v21);
}
