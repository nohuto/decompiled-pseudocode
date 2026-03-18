/*
 * XREFs of ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C028D504
 * Callers:
 *     DxgkApplyCdsjToPathsModality @ 0x1C0238BC0 (DxgkApplyCdsjToPathsModality.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00B4FBC (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00B510C (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C00B5A8C (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00CC7FC (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 */

__int64 __fastcall CDS_JOURNAL::ApplyCdsjToPathModality(struct CCD_TOPOLOGY *this, struct D3DKMT_AUGMENT_CDSJ *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  struct DXGADAPTER *v6; // r8
  __int64 v7; // rdi
  _QWORD *v8; // rax
  int v9; // eax
  _QWORD v11[12]; // [rsp+20h] [rbp-78h] BYREF

  v11[0] = 0LL;
  v11[1] = 0LL;
  *(_QWORD *)((char *)&v11[2] + 4) = 0LL;
  *(_QWORD *)((char *)&v11[3] + 4) = 0LL;
  *(_QWORD *)((char *)&v11[4] + 4) = 0LL;
  memset((char *)&v11[5] + 4, 0, 0x28uLL);
  v4 = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(this, a2, 0);
  v7 = v4;
  if ( v4 < 0
    || (CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v11, a2, v6),
        v9 = CDS_JOURNAL::_CommitEntry((const struct CDS_JOURNAL::_ENTRY *)v11, this),
        v7 = v9,
        v9 < 0) )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v8[3] = v7;
    v8[4] = this;
    v8[5] = *((_QWORD *)this + 8);
    v8[6] = a2;
    WdLogEvent5_WdError(v8);
  }
  else
  {
    CCD_TOPOLOGY::FillScalingIntent(this);
  }
  return (unsigned int)v7;
}
