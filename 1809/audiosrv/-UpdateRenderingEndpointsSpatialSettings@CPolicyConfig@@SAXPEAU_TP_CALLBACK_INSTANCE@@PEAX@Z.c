/*
 * XREFs of ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x1800D6220
 * Callers:
 *     ?ReportSpatialLicenseChangedCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x1800D3B80 (-ReportSpatialLicenseChangedCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z.c)
 *     ?ValidateSpatialAudioSettingsCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x1800D65C0 (-ValidateSpatialAudioSettingsCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z.c)
 *     PolicyConfigSetAccessibilityAudioMonoMixState @ 0x1800D7470 (PolicyConfigSetAccessibilityAudioMonoMixState.c)
 * Callees:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x18001FD48 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 *     GetSpatialSettingsMonitoringPKey @ 0x18004B6E0 (GetSpatialSettingsMonitoringPKey.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x1800D1FDC (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CPolicyConfig::UpdateRenderingEndpointsSpatialSettings(PTP_CALLBACK_INSTANCE Instance, PVOID Context)
{
  __int64 v2; // rdx
  const GUID *v3; // r8
  const GUID *v4; // r9
  unsigned int i; // ebx
  struct IPolicyConfig *v6; // rdx
  unsigned int v7; // [rsp+30h] [rbp-50h] BYREF
  int v8; // [rsp+34h] [rbp-4Ch] BYREF
  struct IMMDevice *v9; // [rsp+38h] [rbp-48h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-40h] BYREF
  __int64 v11; // [rsp+48h] [rbp-38h] BYREF
  CEndpointCharacteristics *v12; // [rsp+50h] [rbp-30h]
  __int64 v13; // [rsp+58h] [rbp-28h]
  struct _tagpropertykey v14; // [rsp+60h] [rbp-20h] BYREF

  v13 = -2LL;
  v7 = 0;
  v11 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         0LL,
         1LL,
         &v11) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 24LL))(v11, &v7) >= 0 )
  {
    v12 = 0LL;
    pv = 0LL;
    memset(&v14, 0, sizeof(v14));
    GetSpatialSettingsMonitoringPKey((__int64)&v14, v2, v3, v4);
    for ( i = 0; i < v7; ++i )
    {
      v9 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v11 + 32LL))(v11, i, &v9) >= 0
        && ((int (__fastcall *)(struct IMMDevice *, LPVOID *))v9->lpVtbl->GetId)(v9, &pv) >= 0
        && (*(int (__fastcall **)(PVOID, LPVOID, __int64))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
             g_pEndpointCharacteristicsCache,
             pv,
             1LL) >= 0 )
      {
        v8 = 0;
        CEndpointCharacteristics::ProcessPropertyChange(v12, v6, &v14, &v8);
        if ( v8 )
          CPolicyConfig::DisconnectHelper(v9);
      }
      if ( v9 )
        ((void (__fastcall *)(struct IMMDevice *))v9->lpVtbl->Release)(v9);
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
}
