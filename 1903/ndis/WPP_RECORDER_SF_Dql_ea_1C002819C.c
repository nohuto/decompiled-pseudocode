/*
 * XREFs of WPP_RECORDER_SF_Dql @ 0x1C002819C
 * Callers:
 *     ndisDereferenceProtocol @ 0x1C00280F0 (ndisDereferenceProtocol.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_Dql(__int64 a1, _DWORD a2, _BYTE a3, _DWORD a4, __int64 a5, ...)
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
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(
      (const struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      0x26u,
      va,
      4LL,
      va1,
      8LL,
      va2,
      4LL,
      0LL);
  LOWORD(v7) = 38;
  return WppAutoLogTrace(
           a1,
           4LL,
           5LL,
           &WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           8LL,
           va2,
           4LL,
           0LL);
}
