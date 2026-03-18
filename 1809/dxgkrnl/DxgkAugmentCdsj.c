/*
 * XREFs of DxgkAugmentCdsj @ 0x1C00B4C80
 * Callers:
 *     <none>
 * Callees:
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00B4CB0 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00C99D0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 */

__int64 __fastcall DxgkAugmentCdsj(struct D3DKMT_AUGMENT_CDSJ *a1)
{
  struct CCD_BTL *v2; // rax
  __int64 v4; // rax

  if ( a1 )
  {
    v2 = CCD_BTL::Global();
    return CDS_JOURNAL::Augment((struct CCD_BTL *)((char *)v2 + 104), a1);
  }
  else
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdAssertion(v4);
    return 3221225485LL;
  }
}
