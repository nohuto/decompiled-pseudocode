/*
 * XREFs of ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x1800E1170
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_65e9a6d7f64f8b4ca9838a0c7b29edbf__void_::_Do_call @ 0x1800E1510 (std--_Func_impl_no_alloc__lambda_65e9a6d7f64f8b4ca9838a0c7b29edbf__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call @ 0x1800E1520 (std--_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call @ 0x1800E15A0 (std--_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_--_Do_call.c)
 *     PolicyConfigSetAccessibilityAudioMonoMixState @ 0x1800E26B0 (PolicyConfigSetAccessibilityAudioMonoMixState.c)
 * Callees:
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x18000365C (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18000D900 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     GetSpatialSettingsMonitoringPKey @ 0x180051F44 (GetSpatialSettingsMonitoringPKey.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void CPolicyConfig::UpdateRenderingEndpointsSpatialSettings(void)
{
  __int64 v0; // rdx
  const GUID *v1; // r8
  const GUID *v2; // r9
  unsigned int i; // ebx
  unsigned int v4; // [rsp+30h] [rbp-50h] BYREF
  int v5; // [rsp+34h] [rbp-4Ch] BYREF
  LPVOID pv; // [rsp+38h] [rbp-48h] BYREF
  __int64 v7; // [rsp+40h] [rbp-40h] BYREF
  __int64 v8; // [rsp+48h] [rbp-38h] BYREF
  CEndpointCharacteristics *v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  struct _tagpropertykey v11; // [rsp+60h] [rbp-20h] BYREF

  v10 = -2LL;
  v4 = 0;
  v7 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         0LL,
         1LL,
         &v7) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 24LL))(v7, &v4) >= 0 )
  {
    v9 = 0LL;
    pv = 0LL;
    memset(&v11, 0, sizeof(v11));
    GetSpatialSettingsMonitoringPKey((__int64)&v11, v0, v1, v2);
    for ( i = 0; i < v4; ++i )
    {
      v8 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 32LL))(v7, i, &v8) >= 0
        && (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v8 + 40LL))(v8, &pv) >= 0
        && (*(int (__fastcall **)(PVOID, LPVOID, __int64))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
             g_pEndpointCharacteristicsCache,
             pv,
             1LL) >= 0 )
      {
        v5 = 0;
        CEndpointCharacteristics::ProcessPropertyChange(v9, &v11, &v5);
        if ( v5 )
          CPolicyConfig::DisconnectHelper((const unsigned __int16 *)pv);
      }
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
}
