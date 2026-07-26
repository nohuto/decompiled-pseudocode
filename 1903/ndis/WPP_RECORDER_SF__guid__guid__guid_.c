/*
 * XREFs of WPP_RECORDER_SF__guid__guid__guid_ @ 0x1C0066F7C
 * Callers:
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0113F9C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF__guid__guid__guid_(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v10; // [rsp+20h] [rbp-58h]

  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
    ndisWppFastTraceMessage(
      (const struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      0xB7u,
      a6,
      16LL,
      a7,
      16LL,
      a8,
      16LL,
      0LL);
  LOWORD(v10) = 183;
  return WppAutoLogTrace(
           a1,
           3LL,
           22LL,
           &WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
           v10,
           a6,
           16LL,
           a7,
           16LL,
           a8,
           16LL,
           0LL);
}
