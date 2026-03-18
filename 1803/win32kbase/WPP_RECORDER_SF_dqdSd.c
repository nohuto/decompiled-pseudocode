/*
 * XREFs of WPP_RECORDER_SF_dqdSd @ 0x1C00F6CAC
 * Callers:
 *     ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1C00F6310 (-RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dqdSd(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  const wchar_t *v5; // rdi
  __int64 v6; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  const wchar_t *v10; // rax
  int v12; // [rsp+20h] [rbp-78h]
  __int64 v13; // [rsp+C8h] [rbp+30h] BYREF
  va_list va; // [rsp+C8h] [rbp+30h]
  __int64 v15; // [rsp+D0h] [rbp+38h] BYREF
  va_list va1; // [rsp+D0h] [rbp+38h]
  __int64 v17; // [rsp+D8h] [rbp+40h] BYREF
  va_list va2; // [rsp+D8h] [rbp+40h]
  const wchar_t *v19; // [rsp+E0h] [rbp+48h]
  va_list va3; // [rsp+E8h] [rbp+50h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  v19 = va_arg(va3, const wchar_t *);
  v5 = v19;
  v6 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( v19 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( v19[v8] );
      v9 = v8 + 1;
    }
    else
    {
      v9 = 5LL;
    }
    v10 = v19;
    if ( !v19 )
      v10 = L"NULL";
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_6f93d23ab5493b07c801fc1105033033_Traceguids,
      19LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      8LL,
      (__int64 *)va2,
      4LL,
      v10,
      2 * v9,
      va3,
      4LL,
      0LL);
  }
  if ( v5 )
  {
    do
      ++v6;
    while ( v5[v6] );
  }
  LOWORD(v12) = 19;
  return WppAutoLogTrace(a1, 3LL, 21LL, &WPP_6f93d23ab5493b07c801fc1105033033_Traceguids, v12, (__int64 *)va);
}
