/*
 * XREFs of WPP_RECORDER_SF_llL @ 0x1C002A3D4
 * Callers:
 *     NdisIfAddIfStackEntry @ 0x1C002A1E0 (NdisIfAddIfStackEntry.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_llL(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
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
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(
      (const struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      0x2Du,
      va,
      4LL,
      va1,
      4LL,
      va2,
      4LL,
      0LL);
  LOWORD(v7) = 45;
  return WppAutoLogTrace(
           a1,
           4LL,
           22LL,
           &WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           4LL,
           va2,
           4LL,
           0LL);
}
