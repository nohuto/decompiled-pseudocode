/*
 * XREFs of ?PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV?$function@$$A6AJXZ@wistd@@PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18013AB04
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x18001CF34 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@JPEBGU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ @ 0x18000B9E4 (-_Tidy@-$_Func_class@JPEBGU_Nil@wistd@@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z @ 0x18013A340 (-IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?IsPerformLicenseCheck@AtmosCheck@@AEAA_NJ@Z @ 0x18013A5EC (-IsPerformLicenseCheck@AtmosCheck@@AEAA_NJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::PerformLicenseCheckHelperLegacy(
        AtmosCheck *this,
        HSTRING a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rdi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  AtmosCheck *v12; // rcx
  __int64 v13; // rdx

  v6 = a3;
  v9 = *(_QWORD *)(a4 + 104);
  if ( !v9 )
    __fastfail(7u);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( AtmosCheck::IsPerformLicenseCheck(this, v10) )
    *(_DWORD *)(a5 + 8 * v6 + 4) = AtmosCheck::IsLicenseValidForPackage(v12, a2);
  wistd::_Func_class<long,unsigned short const *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    a4,
    v11);
  return wistd::_Func_class<long,unsigned short const *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
           a4,
           v13);
}
