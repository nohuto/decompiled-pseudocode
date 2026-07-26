/*
 * XREFs of WPP_SF_Zd @ 0x1C004F7B4
 * Callers:
 *     ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004EEEC (-ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C0107920 (-ReferenceWdi@@YA_NXZ.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_Zd(unsigned __int16 a1, const struct _GUID *a2, const wchar_t *a3, int a4)
{
  __int64 v4; // r9
  const wchar_t *v5; // rax
  int v6; // [rsp+78h] [rbp+20h] BYREF

  v6 = a4;
  if ( a3 )
    v4 = *a3;
  else
    v4 = 8LL;
  if ( a3 && *a3 )
    v5 = (const wchar_t *)*((_QWORD *)a3 + 1);
  else
    v5 = L"NULL";
  if ( !a3 )
    a3 = L"\b";
  ndisWppFastTraceMessage(a2, a1, a3, 2LL, v5, v4, &v6, 4LL, 0LL);
}
