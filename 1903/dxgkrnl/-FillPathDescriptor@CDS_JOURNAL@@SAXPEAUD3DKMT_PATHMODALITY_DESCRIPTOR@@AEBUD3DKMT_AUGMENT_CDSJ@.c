/*
 * XREFs of ?FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C012C414
 * Callers:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C012C5BC (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C012A6A8 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C012C4BC (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 */

void __fastcall CDS_JOURNAL::FillPathDescriptor(
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1,
        const struct D3DKMT_AUGMENT_CDSJ *a2,
        char a3,
        __int64 a4,
        struct DXGADAPTER *a5)
{
  struct DXGADAPTER *v8; // r8
  __int64 v9; // r8
  _QWORD v10[12]; // [rsp+30h] [rbp-88h] BYREF

  v10[0] = 0LL;
  v10[1] = 0LL;
  *(_QWORD *)((char *)&v10[2] + 4) = 0LL;
  *(_QWORD *)((char *)&v10[3] + 4) = 0LL;
  *(_QWORD *)((char *)&v10[4] + 4) = 0LL;
  memset((char *)&v10[5] + 4, 0, 0x28uLL);
  CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v10, a2, v8);
  LOBYTE(v9) = a3;
  CDS_JOURNAL::_FillPathDescriptor(a1, (const struct CDS_JOURNAL::_ENTRY *)v10, v9, 0, a5);
}
