/*
 * XREFs of ?FillPathDescriptor@CDS_JOURNAL@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBUD3DKMT_AUGMENT_CDSJ@@_N2PEAVDXGADAPTER@@@Z @ 0x1C00B569C
 * Callers:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00B510C (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x1C00B5744 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C00B5A8C (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 */

void __fastcall CDS_JOURNAL::FillPathDescriptor(
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1,
        const struct D3DKMT_AUGMENT_CDSJ *a2,
        bool a3,
        __int64 a4,
        struct DXGADAPTER *a5)
{
  struct DXGADAPTER *v8; // r8
  _QWORD v9[12]; // [rsp+30h] [rbp-88h] BYREF

  v9[0] = 0LL;
  v9[1] = 0LL;
  *(_QWORD *)((char *)&v9[2] + 4) = 0LL;
  *(_QWORD *)((char *)&v9[3] + 4) = 0LL;
  *(_QWORD *)((char *)&v9[4] + 4) = 0LL;
  memset((char *)&v9[5] + 4, 0, 0x28uLL);
  CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v9, a2, v8);
  CDS_JOURNAL::_FillPathDescriptor(a1, (const struct CDS_JOURNAL::_ENTRY *)v9, a3, 0, a5);
}
