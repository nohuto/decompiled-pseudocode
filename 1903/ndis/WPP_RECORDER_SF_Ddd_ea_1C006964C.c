/*
 * XREFs of WPP_RECORDER_SF_Ddd @ 0x1C006964C
 * Callers:
 *     ndisQuerySetMiniportEx2 @ 0x1C003400C (ndisQuerySetMiniportEx2.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_Ddd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v10; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x400) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    ndisWppFastTraceMessage(&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids, 0xAu, va, 4LL, va1, 4LL, va2, 4LL, 0LL);
  LOWORD(v7) = 10;
  return WppAutoLogTrace(
           a1,
           2LL,
           11LL,
           &WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           4LL,
           va2,
           4LL,
           0LL);
}
