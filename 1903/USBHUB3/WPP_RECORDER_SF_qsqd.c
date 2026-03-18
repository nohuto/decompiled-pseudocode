/*
 * XREFs of WPP_RECORDER_SF_qsqd @ 0x1C002A32C
 * Callers:
 *     HUBMISC_WaitForSignal @ 0x1C002EB20 (HUBMISC_WaitForSignal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qsqd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  const char *v10; // rcx
  int v12; // [rsp+20h] [rbp-58h]
  __int64 v13; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  const char *v15; // [rsp+B0h] [rbp+38h]
  __int64 v16; // [rsp+B8h] [rbp+40h] BYREF
  va_list va1; // [rsp+B8h] [rbp+40h]
  va_list va2; // [rsp+C0h] [rbp+48h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v15 = va_arg(va1, const char *);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  v5 = (__int64)v15;
  v6 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( v15 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( v15[v8] );
      v9 = v8 + 1;
    }
    else
    {
      v9 = 5LL;
    }
    v10 = "NULL";
    if ( v15 )
      v10 = v15;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_699d44e6015a36edc2e41426686ae77e_Traceguids,
      84LL,
      (__int64 *)va,
      8LL,
      v10,
      v9,
      (__int64 *)va1,
      8LL,
      va2,
      4LL,
      0LL);
  }
  if ( v5 )
  {
    do
      ++v6;
    while ( *(_BYTE *)(v5 + v6) );
  }
  LOWORD(v12) = 84;
  return WppAutoLogTrace(a1, 2LL, 2LL, &WPP_699d44e6015a36edc2e41426686ae77e_Traceguids, v12, (__int64 *)va);
}
