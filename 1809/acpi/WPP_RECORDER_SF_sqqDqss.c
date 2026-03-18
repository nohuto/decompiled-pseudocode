/*
 * XREFs of WPP_RECORDER_SF_sqqDqss @ 0x1C0029E54
 * Callers:
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C0029D1C (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     ACPIBuildDiscoverDeviceCompletion @ 0x1C00498F0 (ACPIBuildDiscoverDeviceCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sqqDqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        char a7,
        char a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12)
{
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rsi
  const char *v16; // rbp
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v21; // r9
  __int64 v22; // r9
  const char *v23; // r11
  __int64 v24; // r8
  __int64 v25; // r8
  const char *v26; // r10
  __int64 v27; // rdx
  __int64 v28; // rdx
  const char *v29; // rcx
  int v30; // [rsp+20h] [rbp-98h]

  v12 = (__int64)a12;
  v13 = -1LL;
  v14 = (__int64)a11;
  v16 = a6;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a12 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a12[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a12;
    if ( !a12 )
      v23 = "NULL";
    if ( a11 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a11[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = a11;
    if ( !a11 )
      v26 = "NULL";
    if ( a6 )
    {
      v27 = -1LL;
      do
        ++v27;
      while ( a6[v27] );
      v28 = v27 + 1;
    }
    else
    {
      v28 = 5LL;
    }
    v29 = a6;
    if ( !a6 )
      v29 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, const char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      v29,
      v28,
      &a7,
      8LL,
      &a8,
      8LL,
      &a9,
      4LL,
      &a10,
      8LL,
      v26,
      v25,
      v23,
      v22,
      0LL);
  }
  if ( v12 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_BYTE *)(v12 + v18) );
  }
  if ( v14 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v14 + v19) );
  }
  if ( a6 )
  {
    do
      ++v13;
    while ( a6[v13] );
  }
  if ( !a6 )
    v16 = "NULL";
  LOWORD(v30) = a4;
  return WppAutoLogTrace(a1, 4LL, 6LL, a5, v30, v16);
}
