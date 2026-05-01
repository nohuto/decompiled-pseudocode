/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18008AC38
 * Callers:
 *     _dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds__ @ 0x1800012F0 (_dynamic_initializer_for__Windows--Internal--Shell--CustomShell--CustomShellExperienceRepository.c)
 *     __dynamic_initializer_for__Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::c_knownExperienceIds___::_1_::dtor$2 @ 0x1800013AD (__dynamic_initializer_for__Windows--Internal--Shell--CustomShell--CustomShellExperi_ea_1800013AD.c)
 *     _dynamic_initializer_for__error__ @ 0x180003D90 (_dynamic_initializer_for__error__.c)
 *     __dynamic_initializer_for__error___::_1_::dtor$19 @ 0x180004AE4 (__dynamic_initializer_for__error___--_1_--dtor$19.c)
 *     _dynamic_initializer_for__idle__ @ 0x180004B20 (_dynamic_initializer_for__idle__.c)
 *     __dynamic_initializer_for__idle___::_1_::dtor$1 @ 0x180004C23 (__dynamic_initializer_for__idle___--_1_--dtor$1.c)
 *     _dynamic_initializer_for__listening__ @ 0x180004C50 (_dynamic_initializer_for__listening__.c)
 *     __dynamic_initializer_for__listening___::_1_::dtor$28 @ 0x180005FE8 (__dynamic_initializer_for__listening___--_1_--dtor$28.c)
 *     _dynamic_initializer_for__responding__ @ 0x180006020 (_dynamic_initializer_for__responding__.c)
 *     __dynamic_initializer_for__responding___::_1_::dtor$25 @ 0x180007191 (__dynamic_initializer_for__responding___--_1_--dtor$25.c)
 *     _dynamic_initializer_for__thinking__ @ 0x1800071C0 (_dynamic_initializer_for__thinking__.c)
 *     __dynamic_initializer_for__thinking___::_1_::dtor$90 @ 0x18000B25C (__dynamic_initializer_for__thinking___--_1_--dtor$90.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180050B40 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1800C039C (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     _winrt::immersive_shell_component::register_service_information__GUID_const___::_1_::dtor$2 @ 0x1800C043A (_winrt--immersive_shell_component--register_service_information__GUID_const___--_1_--dtor$2.c)
 *     _dynamic_atexit_destructor_for__CApplicationManager::s_rgTrustedComponentRegMap__ @ 0x1800E9820 (_dynamic_atexit_destructor_for__CApplicationManager--s_rgTrustedComponentRegMap__.c)
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1801290DC (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ??1ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x180160D50 (--1ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_48084b1ec6f75312154089ee08312ce7__Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults___::_scalar_deleting_destructor_ @ 0x18020FBA0 (Windows--Internal--COperationLambdaVar_0__lambda_48084b1ec6f75312154089ee08312ce7___ea_18020FBA0.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_dfca9d5bd4b5dfe0cdfea1896b0c370e__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::_scalar_deleting_destructor_ @ 0x18020FC10 (Windows--Internal--COperationLambdaVar_0__lambda_dfca9d5bd4b5dfe0cdfea1896b0c370e___ea_18020FC10.c)
 *     ??_EPerMonitorShellPositionerManager@@UEAAPEAXI@Z @ 0x1803B7588 (--_EPerMonitorShellPositionerManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18008ACAC (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_dispatch_icall_fptr();
  }
}
