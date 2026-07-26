/*
 * XREFs of WPP_RECORDER_SF_DDDDDDDD @ 0x1C007F0C4
 * Callers:
 *     ndisValidateMiniportDriverCharacteristicsHeader @ 0x1C010945C (ndisValidateMiniportDriverCharacteristicsHeader.c)
 *     ndisValidateFilterDriverCharacteristicsHeader @ 0x1C0109554 (ndisValidateFilterDriverCharacteristicsHeader.c)
 *     ndisValidateProtocolDriverCharacteristicsHeader @ 0x1C0109614 (ndisValidateProtocolDriverCharacteristicsHeader.c)
 *     ndisValidateLWMiniportDriverCharacteristicsHeader @ 0x1C0116608 (ndisValidateLWMiniportDriverCharacteristicsHeader.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_DDDDDDDD(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+28h] [rbp-81h]
  __int64 v9; // [rsp+F0h] [rbp+47h] BYREF
  va_list va; // [rsp+F0h] [rbp+47h]
  __int64 v11; // [rsp+F8h] [rbp+4Fh] BYREF
  va_list va1; // [rsp+F8h] [rbp+4Fh]
  __int64 v13; // [rsp+100h] [rbp+57h] BYREF
  va_list va2; // [rsp+100h] [rbp+57h]
  __int64 v15; // [rsp+108h] [rbp+5Fh] BYREF
  va_list va3; // [rsp+108h] [rbp+5Fh]
  __int64 v17; // [rsp+110h] [rbp+67h] BYREF
  va_list va4; // [rsp+110h] [rbp+67h]
  __int64 v19; // [rsp+118h] [rbp+6Fh] BYREF
  va_list va5; // [rsp+118h] [rbp+6Fh]
  __int64 v21; // [rsp+120h] [rbp+77h] BYREF
  va_list va6; // [rsp+120h] [rbp+77h]
  va_list va7; // [rsp+128h] [rbp+7Fh] BYREF

  va_start(va7, a5);
  va_start(va6, a5);
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
  va_copy(va6, va5);
  v19 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v21 = va_arg(va7, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    ndisWppFastTraceMessage(
      &WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
      a4,
      va,
      4LL,
      va1,
      4LL,
      va2,
      4LL,
      va3,
      4LL,
      va4,
      4LL,
      va5,
      4LL,
      va6,
      4LL,
      va7,
      4LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(
           a1,
           2LL,
           1LL,
           &WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
           v8,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           4LL,
           (__int64 *)va3);
}
