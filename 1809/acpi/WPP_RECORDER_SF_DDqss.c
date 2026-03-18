/*
 * XREFs of WPP_RECORDER_SF_ddqss @ 0x1C005ACF4
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C000CDE0 (ACPIProcessorStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ddqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rdi
  const char *v11; // rsi
  __int64 v12; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  const char *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  const char *v19; // rax
  __int64 v20; // rax
  int v22; // [rsp+20h] [rbp-78h]

  v10 = a10;
  v11 = a9;
  v12 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a10 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a10[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = a10;
    if ( !a10 )
      v16 = "NULL";
    if ( a9 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a9[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a9;
    if ( !a9 )
      v19 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_72dd1c1115013f02fe06a3c7ab98b878_Traceguids,
      12LL,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      8LL,
      v19,
      v18,
      v16,
      v15,
      0LL);
  }
  if ( v10 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v10[v20] );
  }
  if ( v11 )
  {
    do
      ++v12;
    while ( v11[v12] );
  }
  LOWORD(v22) = 12;
  return WppAutoLogTrace(a1, 4LL, 1LL, &WPP_72dd1c1115013f02fe06a3c7ab98b878_Traceguids, v22, &a6);
}
