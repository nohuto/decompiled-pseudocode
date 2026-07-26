/*
 * XREFs of WPP_RECORDER_SF_qDDLq @ 0x1C0086CD0
 * Callers:
 *     ndisReferenceVcPtr @ 0x1C0087690 (ndisReferenceVcPtr.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qDDLq(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+20h] [rbp-68h]
  __int64 v9; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  __int64 v11; // [rsp+C0h] [rbp+38h] BYREF
  va_list va1; // [rsp+C0h] [rbp+38h]
  __int64 v13; // [rsp+C8h] [rbp+40h] BYREF
  va_list va2; // [rsp+C8h] [rbp+40h]
  __int64 v15; // [rsp+D0h] [rbp+48h] BYREF
  va_list va3; // [rsp+D0h] [rbp+48h]
  va_list va4; // [rsp+D8h] [rbp+50h] BYREF

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
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(
      &WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
      a4,
      va,
      8LL,
      va1,
      4LL,
      va2,
      4LL,
      va3,
      4LL,
      va4,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           20LL,
           &WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
           v8,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           4LL,
           (__int64 *)va3);
}
