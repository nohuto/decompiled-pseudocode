/*
 * XREFs of WPP_RECORDER_SF_sd @ 0x1C0002950
 * Callers:
 *     USBHwLogStartFailure @ 0x1C002BA9C (USBHwLogStartFailure.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00118E0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_sd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const char *a6, ...)
{
  const char *v6; // rsi
  __int64 v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  const char *v11; // rcx
  int v13; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+90h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = "NULL";
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0 )
  {
    if ( a6 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a6[v9] );
      v10 = v9 + 1;
    }
    else
    {
      v10 = 5LL;
    }
    v11 = "NULL";
    if ( a6 )
      v11 = a6;
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, const char *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
      44LL,
      v11,
      v10,
      va,
      4LL,
      0LL);
  }
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
  }
  if ( a6 )
    v6 = a6;
  LOWORD(v13) = 44;
  return WppAutoLogTrace(a1, 0LL, 8LL, &WPP_45be40ce8fd538488aced682dd98354a_Traceguids, v13, v6);
}
