/*
 * XREFs of WPP_SF_ZZL @ 0x1C007A46C
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BED24 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00FDA58 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_ZZL(unsigned __int16 a1, __int64 a2, const wchar_t *a3, const wchar_t *a4, ...)
{
  __int64 v5; // rdx
  __int64 v6; // r10
  const wchar_t *v7; // rax
  const wchar_t *v8; // rcx
  bool v9; // zf
  va_list va; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = 8LL;
  if ( a4 )
    v6 = *a4;
  else
    v6 = 8LL;
  v7 = L"NULL";
  if ( a4 && *a4 )
    v8 = (const wchar_t *)*((_QWORD *)a4 + 1);
  else
    v8 = L"NULL";
  if ( !a4 )
    a4 = L"\b";
  v9 = a3 == 0LL;
  if ( a3 )
  {
    v5 = *a3;
    if ( *a3 )
      v7 = (const wchar_t *)*((_QWORD *)a3 + 1);
    v9 = a3 == 0LL;
  }
  if ( v9 )
    a3 = L"\b";
  ndisWppFastTraceMessage(
    &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids,
    a1,
    a3,
    2LL,
    v7,
    v5,
    a4,
    2LL,
    v8,
    v6,
    va,
    4LL,
    0LL);
}
