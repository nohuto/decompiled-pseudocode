/*
 * XREFs of ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x18001FC48
 * Callers:
 *     ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180013AB0 (-OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x18001FD48 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x1800D1FDC (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPolicyConfig::ProcessPropertyChange(const unsigned __int16 *a1, struct _tagpropertykey *a2)
{
  struct IPolicyConfig *v4; // rdx
  int v5; // [rsp+30h] [rbp-20h] BYREF
  int v6; // [rsp+34h] [rbp-1Ch] BYREF
  struct IMMDevice *v7; // [rsp+38h] [rbp-18h] BYREF
  CEndpointCharacteristics *v8[2]; // [rsp+40h] [rbp-10h] BYREF

  v8[1] = (CEndpointCharacteristics *)-2LL;
  v7 = 0LL;
  v5 = 0;
  if ( (*(int (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator
                                                                                    + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a1,
         &v7) >= 0
    && ((int (__fastcall *)(struct IMMDevice *, int *))v7->lpVtbl->GetState)(v7, &v5) >= 0
    && v5 == 1 )
  {
    v8[0] = 0LL;
    if ( (*(int (__fastcall **)(PVOID, const unsigned __int16 *, __int64, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
           g_pEndpointCharacteristicsCache,
           a1,
           1LL,
           0LL,
           v8) >= 0 )
    {
      v6 = 0;
      CEndpointCharacteristics::ProcessPropertyChange(v8[0], v4, a2, &v6);
      if ( v6 )
        CPolicyConfig::DisconnectHelper(v7);
    }
    if ( v8[0] )
      (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v8[0] + 16LL))(v8[0]);
  }
  if ( v7 )
    ((void (__fastcall *)(struct IMMDevice *))v7->lpVtbl->Release)(v7);
}
