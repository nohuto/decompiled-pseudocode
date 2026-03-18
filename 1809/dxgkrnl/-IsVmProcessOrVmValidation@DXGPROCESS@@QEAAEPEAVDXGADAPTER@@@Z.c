/*
 * XREFs of ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C001279C
 * Callers:
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E5B90 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@PEAVDXGARGONEMULATIONPROCESS@@@Z @ 0x1C00F8C4C (-Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@PEAVDXGARGONEMULAT.c)
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 * Callees:
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0012DE4 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DXGPROCESS::IsVmProcessOrVmValidation(DXGPROCESS *this, struct DXGADAPTER *a2)
{
  char v3; // bl
  __int64 v5; // rax

  if ( (*((_BYTE *)this + 323) & 8) != 0 )
    return 1;
  v3 = 0;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 2100LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_BYTE *)DXGGLOBAL::m_pGlobal + 1323)
    && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
         (DXGVALIDATION *)((char *)DXGGLOBAL::m_pGlobal + 1316),
         a2) )
  {
    return 1;
  }
  return v3;
}
