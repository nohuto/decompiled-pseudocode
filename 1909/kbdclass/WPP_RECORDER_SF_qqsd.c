/*
 * XREFs of WPP_RECORDER_SF_qqsd @ 0x1C0002490
 * Callers:
 *     KeyboardClassPower @ 0x1C0001880 (KeyboardClassPower.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002E90 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qqsd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const char *v5; // rdi
  __int64 v6; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  const char *v11; // rcx
  int v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  __int64 v15; // [rsp+B0h] [rbp+38h] BYREF
  va_list va1; // [rsp+B0h] [rbp+38h]
  const char *v17; // [rsp+B8h] [rbp+40h]
  va_list va2; // [rsp+C0h] [rbp+48h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  v17 = va_arg(va2, const char *);
  v5 = v17;
  v6 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v17 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v17[v9] );
      v10 = v9 + 1;
    }
    else
    {
      v10 = 5LL;
    }
    v11 = v17;
    if ( !v17 )
      v11 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_1112bdb5bda8353dfce34a5ce0e72a19_Traceguids,
      96LL,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      v11,
      v10,
      va2,
      4LL,
      0LL);
  }
  if ( v5 )
  {
    do
      ++v6;
    while ( v5[v6] );
  }
  else
  {
    v5 = "NULL";
  }
  LOWORD(v12) = 96;
  return WppAutoLogTrace(
           a1,
           4LL,
           5LL,
           &WPP_1112bdb5bda8353dfce34a5ce0e72a19_Traceguids,
           v12,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           v5);
}
