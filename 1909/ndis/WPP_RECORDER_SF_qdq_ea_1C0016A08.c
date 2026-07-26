/*
 * XREFs of WPP_RECORDER_SF_qdq @ 0x1C0016A08
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qdq(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v11; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids, a4, va, 8LL, va1, 4LL, va2, 8LL, 0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           24LL,
           &WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
           v8,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           va2,
           8LL,
           0LL);
}
