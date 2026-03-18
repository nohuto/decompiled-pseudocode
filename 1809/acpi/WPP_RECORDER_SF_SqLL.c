/*
 * XREFs of WPP_RECORDER_SF_SqLL @ 0x1C002B070
 * Callers:
 *     ACPIMatchHardwareId @ 0x1C009E30C (ACPIMatchHardwareId.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_SqLL(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const wchar_t *a6, ...)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  bool v9; // zf
  __int64 v11; // rax
  __int64 v12; // rdx
  const wchar_t *v13; // rcx
  int v14; // [rsp+20h] [rbp-68h]
  va_list va; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a6 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a6[v11] );
      v12 = 2 * v11 + 2;
    }
    else
    {
      v12 = 10LL;
    }
    v13 = a6;
    if ( !a6 )
      v13 = L"NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5674c7d3fdf73a809948aef8edb05fda_Traceguids,
      12LL,
      v13,
      v12,
      va);
  }
  v9 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v9 = a6 == 0LL;
  }
  if ( v9 )
    v6 = L"NULL";
  LOWORD(v14) = 12;
  return WppAutoLogTrace(a1, 4LL, 6LL, &WPP_5674c7d3fdf73a809948aef8edb05fda_Traceguids, v14, v6);
}
