/*
 * XREFs of WPP_RECORDER_SF_qqqDqSq @ 0x1C00DE5C4
 * Callers:
 *     RIMWatchDog @ 0x1C003B3D0 (RIMWatchDog.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qqqDqSq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  const wchar_t *v10; // rax
  int v12; // [rsp+28h] [rbp-79h]
  __int64 v13; // [rsp+F0h] [rbp+4Fh] BYREF
  va_list va; // [rsp+F0h] [rbp+4Fh]
  __int64 v15; // [rsp+F8h] [rbp+57h] BYREF
  va_list va1; // [rsp+F8h] [rbp+57h]
  __int64 v17; // [rsp+100h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+100h] [rbp+5Fh]
  __int64 v19; // [rsp+108h] [rbp+67h] BYREF
  va_list va3; // [rsp+108h] [rbp+67h]
  __int64 v21; // [rsp+110h] [rbp+6Fh] BYREF
  va_list va4; // [rsp+110h] [rbp+6Fh]
  const wchar_t *v23; // [rsp+118h] [rbp+77h]
  va_list va5; // [rsp+120h] [rbp+7Fh] BYREF

  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v19 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v21 = va_arg(va5, _QWORD);
  v23 = va_arg(va5, const wchar_t *);
  v5 = (__int64)v23;
  v6 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( v23 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( v23[v8] );
      v9 = v8 + 1;
    }
    else
    {
      v9 = 5LL;
    }
    v10 = v23;
    if ( !v23 )
      v10 = L"NULL";
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_73c89cb64ddf3806f3867933bb81b2ce_Traceguids,
      18LL,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      (__int64 *)va2,
      8LL,
      (__int64 *)va3,
      4LL,
      (__int64 *)va4,
      8LL,
      v10,
      2 * v9,
      va5,
      8LL,
      0LL);
  }
  if ( v5 )
  {
    do
      ++v6;
    while ( *(_WORD *)(v5 + 2 * v6) );
  }
  LOWORD(v12) = 18;
  return WppAutoLogTrace(a1, 3LL, 21LL, &WPP_73c89cb64ddf3806f3867933bb81b2ce_Traceguids, v12, (__int64 *)va);
}
