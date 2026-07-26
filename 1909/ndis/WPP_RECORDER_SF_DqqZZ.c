/*
 * XREFs of WPP_RECORDER_SF_DqqZZ @ 0x1C00404B4
 * Callers:
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C01302F0 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_DqqZZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        char a8,
        const wchar_t *a9)
{
  const wchar_t *v9; // rdi
  bool v11; // zf
  char *v13; // [rsp+20h] [rbp-A8h]
  _DWORD v14[4]; // [rsp+A0h] [rbp-28h] BYREF

  v9 = a9;
  v14[0] = 1;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    v13 = &a7;
    ndisWppFastTraceMessage((const struct _GUID *)&WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids, 0xBu, v14);
  }
  v11 = v9 == 0LL;
  if ( v9 )
    v11 = 0;
  if ( v11 )
    v9 = L"\b";
  LOWORD(v13) = 11;
  return WppAutoLogTrace(
           a1,
           4LL,
           9LL,
           &WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids,
           (_DWORD)v13,
           v14,
           4LL,
           &a7,
           8LL,
           &a8,
           8LL,
           v9);
}
