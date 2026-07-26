/*
 * XREFs of WPP_SF_ZL @ 0x1C005E7A4
 * Callers:
 *     ndisValidate60Protocol @ 0x1C00CE240 (ndisValidate60Protocol.c)
 *     ndisValidateLegacyProtocols @ 0x1C00EE584 (ndisValidateLegacyProtocols.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_ZL(unsigned __int16 a1, __int64 a2, const wchar_t *a3, int a4)
{
  __int64 v4; // rdx
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
  ndisWppFastTraceMessage(&WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, a1, a3, 2LL, v5, v4, &v6, 4LL, 0LL);
}
