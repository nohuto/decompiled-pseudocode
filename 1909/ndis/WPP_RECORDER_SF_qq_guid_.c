/*
 * XREFs of WPP_RECORDER_SF_qq_guid_ @ 0x1C009F5A0
 * Callers:
 *     NdisLWMInitializeNetworkInterface @ 0x1C009D890 (NdisLWMInitializeNetworkInterface.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qq_guid_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        __int64 a8)
{
  __int64 v9; // rbx
  int v11; // [rsp+20h] [rbp-48h]

  v9 = a8;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
    ndisWppFastTraceMessage(&WPP_3bdda7144e74370204adec44604355d7_Traceguids, 0x8Fu, &a6, 8LL, &a7, 8LL, a8, 16LL, 0LL);
  LOWORD(v11) = 143;
  return WppAutoLogTrace(
           a1,
           4LL,
           1LL,
           &WPP_3bdda7144e74370204adec44604355d7_Traceguids,
           v11,
           &a6,
           8LL,
           &a7,
           8LL,
           v9,
           16LL,
           0LL);
}
