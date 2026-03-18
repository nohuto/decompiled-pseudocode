/*
 * XREFs of ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x1800E684C
 * Callers:
 *     ?Materialize_BamoDataProviderProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1800E2860 (-Materialize_BamoDataProviderProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 *     ?AllocateStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeerImpl@23@@Z @ 0x1800E2C90 (-AllocateStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeerImpl.c)
 *     ?Materialize_BamoCompObjectDiagnosticsRootProxy@BamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18018A7C0 (-Materialize_BamoCompObjectDiagnosticsRootProxy@BamoPeerImpl@DiagnosticCallbacks_AutoBamos@BamoI.c)
 *     ?Materialize_BamoDataSourceProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1801A3C98 (-Materialize_BamoDataSourceProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void (__fastcall ****__fastcall wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(
        void (__fastcall ****a1)(_QWORD),
        __int64 a2))(_QWORD)
{
  void (__fastcall ***v3)(_QWORD); // rcx

  v3 = *a1;
  *a1 = (void (__fastcall ***)(_QWORD))a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
  if ( v3 )
    (**v3)(v3);
  return a1;
}
