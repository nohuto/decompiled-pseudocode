/*
 * XREFs of ?PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV?$function@$$A6AJXZ@wistd@@PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18013F974
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180009498 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z @ 0x18013F2EC (-IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::PerformLicenseCheckHelperLegacy(__int64 a1, HSTRING a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rsi
  __int64 v9; // rcx
  __int64 result; // rax
  AtmosCheck *v11; // rcx
  __int64 v12; // rcx

  v6 = a3;
  v9 = *(_QWORD *)(a4 + 112);
  if ( !v9 )
    __fastfail(7u);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
  v11 = (AtmosCheck *)*(unsigned int *)(a1 + 184);
  if ( ((_DWORD)v11 != 2 || (int)result < 0)
    && ((_DWORD)v11 != 4 || (int)result < 0)
    && ((_DWORD)v11 != 3 || (int)result >= 0) )
  {
    result = AtmosCheck::IsLicenseValidForPackage(v11, a2);
    *(_DWORD *)(a5 + 24 * v6 + 4) = result;
  }
  v12 = *(_QWORD *)(a4 + 112);
  if ( v12 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
  return result;
}
