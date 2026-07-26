/*
 * XREFs of WPP_RECORDER_SF_qqqqDd @ 0x1C00C1C2C
 * Callers:
 *     ndisOidPrePDQueryConfig @ 0x1C00C22E0 (ndisOidPrePDQueryConfig.c)
 *     ndisOidPrePDCloseProvider @ 0x1C0122490 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C0122830 (ndisOidPrePDOpenProvider.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qqqqDd(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+28h] [rbp-51h]
  __int64 v9; // [rsp+D0h] [rbp+57h] BYREF
  va_list va; // [rsp+D0h] [rbp+57h]
  __int64 v11; // [rsp+D8h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+D8h] [rbp+5Fh]
  __int64 v13; // [rsp+E0h] [rbp+67h] BYREF
  va_list va2; // [rsp+E0h] [rbp+67h]
  __int64 v15; // [rsp+E8h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+E8h] [rbp+6Fh]
  __int64 v17; // [rsp+F0h] [rbp+77h] BYREF
  va_list va4; // [rsp+F0h] [rbp+77h]
  va_list va5; // [rsp+F8h] [rbp+7Fh] BYREF

  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v13 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v15 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v17 = va_arg(va5, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(
      &WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      a4,
      va,
      8LL,
      va1,
      8LL,
      va2,
      8LL,
      va3,
      8LL,
      va4,
      4LL,
      va5,
      4LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           29LL,
           &WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
           v8,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           (__int64 *)va2,
           8LL,
           (__int64 *)va3);
}
