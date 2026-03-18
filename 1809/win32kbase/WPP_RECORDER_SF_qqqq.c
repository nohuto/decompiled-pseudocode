/*
 * XREFs of WPP_RECORDER_SF_qqqq @ 0x1C0051F4C
 * Callers:
 *     RIMReadInput @ 0x1C004FC10 (RIMReadInput.c)
 *     rimSignalReadComplete @ 0x1C0127738 (rimSignalReadComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qqqq(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  __int64 v5; // rsi
  unsigned __int64 v8; // r11
  int v9; // eax
  int v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  __int64 v14; // [rsp+B0h] [rbp+38h] BYREF
  va_list va1; // [rsp+B0h] [rbp+38h]
  __int64 v16; // [rsp+B8h] [rbp+40h] BYREF
  va_list va2; // [rsp+B8h] [rbp+40h]
  va_list va3; // [rsp+C0h] [rbp+48h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v16 = va_arg(va3, _QWORD);
  v5 = gRimLog;
  v8 = (unsigned __int64)a3 >> 16;
  v9 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v9, (a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= 3u )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      (__int64 *)va2,
      8LL,
      va3,
      8LL,
      0LL);
  LOWORD(v11) = a4;
  return WppAutoLogTrace(v5, 3LL, a3, a5, v11, (__int64 *)va);
}
