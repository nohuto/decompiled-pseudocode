/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180063DB0
 * Callers:
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x18005014C (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     _AtmosCheck::RefreshSpatialAudioLicenseModelState_::_1_::dtor$1 @ 0x18006CAD2 (_AtmosCheck--RefreshSpatialAudioLicenseModelState_--_1_--dtor$1.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$5 @ 0x18006D1A4 (_AtmosCheck--AtmosCheck_--_1_--dtor$5.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$5 @ 0x180071A12 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$5.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$13 @ 0x180071A91 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$13.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$18 @ 0x180071AC8 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$18.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$23 @ 0x180071AFF (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$23.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$24 @ 0x180071B36 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$24.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$25 @ 0x180071B6D (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$25.c)
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$2 @ 0x180071C32 (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$2.c)
 *     _dynamic_atexit_destructor_for__ApoDataTemplate__ @ 0x180073A20 (_dynamic_atexit_destructor_for__ApoDataTemplate__.c)
 *     ??1AudioEffectsWatcher@@QEAA@XZ @ 0x1800CBA70 (--1AudioEffectsWatcher@@QEAA@XZ.c)
 *     ??1DynamicAudioEndpointManager@@UEAA@XZ @ 0x1800D8E18 (--1DynamicAudioEndpointManager@@UEAA@XZ.c)
 *     ??1CDeviceGraphObjectsStore@@UEAA@XZ @ 0x1800F20B8 (--1CDeviceGraphObjectsStore@@UEAA@XZ.c)
 *     ??1CEndpointCharacteristics@@MEAA@XZ @ 0x180115430 (--1CEndpointCharacteristics@@MEAA@XZ.c)
 *     ??1PhoneCallAudio@@MEAA@XZ @ 0x1801278A8 (--1PhoneCallAudio@@MEAA@XZ.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x18013DB30 (--1AtmosCheck@@UEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180063E24 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
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
