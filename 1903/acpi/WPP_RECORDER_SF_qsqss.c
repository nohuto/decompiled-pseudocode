/*
 * XREFs of WPP_RECORDER_SF_qsqss @ 0x1C005920C
 * Callers:
 *     OSNotifyDeviceWake @ 0x1C005891C (OSNotifyDeviceWake.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        const char *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rsi
  const char *v14; // rbp
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rdx
  const char *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v22; // [rsp+20h] [rbp-78h]

  v10 = a10;
  v11 = -1LL;
  v12 = a9;
  v14 = a7;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a10 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *(_BYTE *)(a10 + v15) );
    }
    if ( a9 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *(_BYTE *)(a9 + v16) );
    }
    if ( a7 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a7[v17] );
    }
    v18 = a7;
    if ( !a7 )
      v18 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
      26LL,
      &a6,
      8LL,
      v18);
  }
  if ( v10 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v10 + v19) );
  }
  if ( v12 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *(_BYTE *)(v12 + v20) );
  }
  if ( v14 )
  {
    do
      ++v11;
    while ( v14[v11] );
  }
  LOWORD(v22) = 26;
  return WppAutoLogTrace(a1, 4LL, 17LL, &WPP_2b07ff94468e36517e02013b54d392f0_Traceguids, v22, &a6);
}
