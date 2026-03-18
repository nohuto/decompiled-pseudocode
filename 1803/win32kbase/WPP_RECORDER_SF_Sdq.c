/*
 * XREFs of WPP_RECORDER_SF_Sdq @ 0x1C00FC028
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C00FA2A0 (RIMDeviceClassNotify.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Sdq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const wchar_t *a6, ...)
{
  const wchar_t *v6; // rdi
  __int64 v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  const wchar_t *v12; // rcx
  int v14; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = a6;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
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
    v11 = 2 * v10;
    v12 = a6;
    if ( !a6 )
      v12 = L"NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
      43LL,
      v12,
      v11,
      va);
  }
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
  }
  if ( !a6 )
    v6 = L"NULL";
  LOWORD(v14) = 43;
  return WppAutoLogTrace(a1, 3LL, 20LL, &WPP_d80feb762ea23db244f84e50bb903cde_Traceguids, v14, v6);
}
