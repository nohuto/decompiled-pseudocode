/*
 * XREFs of WPP_RECORDER_SF_LLLLLLLL @ 0x1C0098B40
 * Callers:
 *     ndisMIndicateQosParametersChange @ 0x1C009A8E4 (ndisMIndicateQosParametersChange.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_LLLLLLLL(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+28h] [rbp-A1h]
  int v8; // [rsp+B8h] [rbp-11h] BYREF
  int v9; // [rsp+C0h] [rbp-9h] BYREF
  _DWORD v10[4]; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v11; // [rsp+110h] [rbp+47h] BYREF
  va_list va; // [rsp+110h] [rbp+47h]
  __int64 v13; // [rsp+118h] [rbp+4Fh]
  __int64 v14; // [rsp+120h] [rbp+57h] BYREF
  va_list va1; // [rsp+120h] [rbp+57h]
  __int64 v16; // [rsp+128h] [rbp+5Fh]
  __int64 v17; // [rsp+130h] [rbp+67h] BYREF
  va_list va2; // [rsp+130h] [rbp+67h]
  __int64 v19; // [rsp+138h] [rbp+6Fh]
  __int64 v20; // [rsp+140h] [rbp+77h] BYREF
  va_list va3; // [rsp+140h] [rbp+77h]
  va_list va4; // [rsp+148h] [rbp+7Fh] BYREF

  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v11 = va_arg(va1, _QWORD);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  v16 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  v19 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v20 = va_arg(va4, _QWORD);
  v8 = 1;
  v9 = 52;
  v10[0] = 182;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 5u )
    ndisWppFastTraceMessage(
      &WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      0xB1u,
      va,
      4LL,
      v10,
      4LL,
      va1,
      4LL,
      &v9,
      4LL,
      va2,
      4LL,
      &v8,
      4LL,
      va3,
      4LL,
      va4,
      4LL,
      0LL);
  LOWORD(v7) = 177;
  return WppAutoLogTrace(
           a1,
           5LL,
           24LL,
           &WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           v10,
           4LL,
           (__int64 *)va1,
           4LL,
           &v9);
}
