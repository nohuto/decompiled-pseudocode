/*
 * XREFs of ?ApplyCdsjToPathModality@CDS_JOURNAL@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C02C68B0
 * Callers:
 *     DxgkApplyCdsjToPathsModality @ 0x1C026D4F0 (DxgkApplyCdsjToPathsModality.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00D0DC4 (-FillScalingIntent@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x1C012C4BC (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C012C5BC (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C012C794 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::ApplyCdsjToPathModality(struct CCD_TOPOLOGY *this, struct D3DKMT_AUGMENT_CDSJ *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGADAPTER *v7; // r8
  __int64 v8; // rdi
  _QWORD *v9; // rax
  int v10; // eax
  _QWORD v12[12]; // [rsp+20h] [rbp-78h] BYREF

  v12[0] = 0LL;
  v12[1] = 0LL;
  *(_QWORD *)((char *)&v12[2] + 4) = 0LL;
  *(_QWORD *)((char *)&v12[3] + 4) = 0LL;
  *(_QWORD *)((char *)&v12[4] + 4) = 0LL;
  memset((char *)&v12[5] + 4, 0, 0x28uLL);
  v4 = BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::AugmentTopology(this, a2, 0);
  v8 = v4;
  if ( v4 < 0
    || (CDS_JOURNAL::_FillEntry((struct CDS_JOURNAL::_ENTRY *)v12, a2, v7),
        v10 = CDS_JOURNAL::_CommitEntry((const struct CDS_JOURNAL::_ENTRY *)v12, this),
        v8 = v10,
        v10 < 0) )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5, v7);
    v9[3] = v8;
    v9[4] = this;
    v9[5] = *((_QWORD *)this + 8);
    v9[6] = a2;
    WdLogEvent5_WdError(v9);
  }
  else
  {
    CCD_TOPOLOGY::FillScalingIntent(this);
  }
  return (unsigned int)v8;
}
