/*
 * XREFs of ndisOidPostPDOpenProvider @ 0x1C007CEF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     WPP_SF_qqqqd @ 0x1C007CC2C (WPP_SF_qqqqd_ea_1C007CC2C.c)
 *     WPP_SF_qqqqq @ 0x1C007CC9C (WPP_SF_qqqqq.c)
 */

void __fastcall ndisOidPostPDOpenProvider(__int64 a1)
{
  __int64 v1; // rdx
  ULONG_PTR v3; // rdi
  __int64 v4; // rsi
  ULONG_PTR v5; // rax
  __int64 v6; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = *(_QWORD *)(v1 + 40);
  v5 = *(_QWORD *)a1;
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
  {
    WPP_SF_qqqqq(0x1Au, v1, v3, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 24), v1);
    v5 = *(_QWORD *)a1;
  }
  if ( !v5 && !*(_DWORD *)(a1 + 40) && *(_UNKNOWN **)(v4 + 16) != &unk_1C0086D70 )
    ndisBugCheckEx(0x23uLL, 5uLL, *(_QWORD *)(a1 + 16), v3);
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
  {
    LODWORD(v6) = *(_DWORD *)(a1 + 40);
    WPP_SF_qqqqd(a1, v1, v3, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 24), v6);
  }
}
