/*
 * XREFs of WPP_RECORDER_SF_qDqLqD @ 0x1C0069D70
 * Callers:
 *     ndisValidateQosParameters @ 0x1C0071904 (ndisValidateQosParameters.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qDqLqD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+28h] [rbp-61h]
  _DWORD v8[4]; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v9; // [rsp+E0h] [rbp+57h] BYREF
  va_list va; // [rsp+E0h] [rbp+57h]
  __int64 v11; // [rsp+E8h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+E8h] [rbp+5Fh]
  __int64 v13; // [rsp+F0h] [rbp+67h] BYREF
  va_list va2; // [rsp+F0h] [rbp+67h]
  __int64 v15; // [rsp+F8h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+F8h] [rbp+6Fh]
  va_list va4; // [rsp+100h] [rbp+77h] BYREF

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
  v8[0] = 0;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x400) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
    ndisWppFastTraceMessage(
      &WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      0x86u,
      va,
      8LL,
      va1,
      4LL,
      va2,
      8LL,
      va3,
      4LL,
      va4,
      8LL,
      v8,
      4LL,
      0LL);
  LOWORD(v7) = 134;
  return WppAutoLogTrace(
           a1,
           5LL,
           11LL,
           &WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
           v7,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           8LL,
           (__int64 *)va3);
}
