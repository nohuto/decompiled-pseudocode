/*
 * XREFs of ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C000B954
 * Callers:
 *     ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C00E1E28 (-Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E2C84 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DxgkEscape @ 0x1C0106440 (DxgkEscape.c)
 * Callees:
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000C7F8 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DXGPROCESS::IsVmProcessOrVmValidation(DXGPROCESS *this, struct DXGADAPTER *a2)
{
  char v3; // bl
  __int64 v5; // rax

  if ( (*((_BYTE *)this + 299) & 8) != 0 )
    return 1;
  v3 = 0;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 2201LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_BYTE *)DXGGLOBAL::m_pGlobal + 1291)
    && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
         (DXGVALIDATION *)((char *)DXGGLOBAL::m_pGlobal + 1284),
         a2) )
  {
    return 1;
  }
  return v3;
}
