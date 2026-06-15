/*
 * XREFs of ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x18000D800
 * Callers:
 *     ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800292E0 (-OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x18000365C (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18000D900 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPolicyConfig::ProcessPropertyChange(const unsigned __int16 *a1, struct _tagpropertykey *a2)
{
  int v4; // [rsp+30h] [rbp-20h] BYREF
  int v5; // [rsp+34h] [rbp-1Ch] BYREF
  CEndpointCharacteristics *v6; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v7[2]; // [rsp+40h] [rbp-10h] BYREF

  v7[1] = -2LL;
  v7[0] = 0LL;
  v4 = 0;
  if ( (*(int (__fastcall **)(_QWORD, const unsigned __int16 *, _QWORD *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a1,
         v7) >= 0
    && (*(int (__fastcall **)(_QWORD, int *))(*(_QWORD *)v7[0] + 48LL))(v7[0], &v4) >= 0
    && v4 == 1 )
  {
    v6 = 0LL;
    if ( (*(int (__fastcall **)(PVOID, const unsigned __int16 *, __int64, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
           g_pEndpointCharacteristicsCache,
           a1,
           1LL,
           0LL,
           &v6) >= 0 )
    {
      v5 = 0;
      CEndpointCharacteristics::ProcessPropertyChange(v6, a2, &v5);
      if ( v5 )
        CPolicyConfig::DisconnectHelper(a1);
    }
    if ( v6 )
      (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v7[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7[0] + 16LL))(v7[0]);
}
