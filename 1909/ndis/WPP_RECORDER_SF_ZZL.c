/*
 * XREFs of WPP_RECORDER_SF_ZZL @ 0x1C0027984
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0104790 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011D50C (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ZZL(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        unsigned __int16 *a6,
        __int64 a7)
{
  const wchar_t *v7; // rbp
  const wchar_t *v8; // rbx
  const wchar_t *v9; // rdi
  __int64 v12; // rsi
  const wchar_t *v13; // rax
  bool v14; // zf
  const wchar_t *v16; // rax
  const wchar_t *v17; // r8
  int v18; // [rsp+20h] [rbp-88h]

  v7 = L"NULL";
  v8 = (const wchar_t *)a7;
  v9 = a6;
  v12 = 8LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a6 && *a6 )
      v16 = (const wchar_t *)*((_QWORD *)a6 + 1);
    else
      v16 = L"NULL";
    v17 = a6;
    if ( !a6 )
      v17 = L"\b";
    HIWORD(v18) = WORD1(v16);
    ndisWppFastTraceMessage(&WPP_9a24f6ed26863a1258e184bd1c2f5497_Traceguids, a4, v17);
  }
  if ( a7 && *(_WORD *)a7 )
    v13 = *(const wchar_t **)(a7 + 8);
  else
    v13 = L"NULL";
  if ( !a7 )
    v8 = L"\b";
  v14 = a6 == 0LL;
  if ( a6 )
  {
    v12 = *a6;
    if ( *a6 )
      v7 = (const wchar_t *)*((_QWORD *)a6 + 1);
    v14 = a6 == 0LL;
  }
  if ( v14 )
    v9 = L"\b";
  LOWORD(v18) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           6LL,
           &WPP_9a24f6ed26863a1258e184bd1c2f5497_Traceguids,
           v18,
           v9,
           2LL,
           v7,
           v12,
           v8,
           2LL,
           v13);
}
