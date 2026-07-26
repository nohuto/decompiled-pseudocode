/*
 * XREFs of WPP_RECORDER_SF__guid_Dd @ 0x1C0066E9C
 * Callers:
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C010B380 (ndisIfOpenInterfaceRegistryKey.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF__guid_Dd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, ...)
{
  int v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+A0h] [rbp+38h] BYREF
  va_list va; // [rsp+A0h] [rbp+38h]
  va_list va1; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v9 = va_arg(va1, _QWORD);
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
    ndisWppFastTraceMessage(
      (const struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      0xABu,
      a6,
      16LL,
      va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v8) = 171;
  return WppAutoLogTrace(
           a1,
           3LL,
           22LL,
           &WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
           v8,
           a6,
           16LL,
           (__int64 *)va,
           4LL,
           va1,
           4LL,
           0LL);
}
