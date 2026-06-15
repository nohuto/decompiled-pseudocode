/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180064DA0
 * Callers:
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x18005A158 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$5 @ 0x18006DD91 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$5.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$13 @ 0x18006DE10 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$13.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$18 @ 0x18006DE47 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$18.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$23 @ 0x18006DE7E (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$23.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$24 @ 0x18006DEB5 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$24.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$25 @ 0x18006DEEC (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$25.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$5 @ 0x18007270E (_AtmosCheck--AtmosCheck_--_1_--dtor$5.c)
 *     _AtmosCheck::RefreshSpatialAudioLicenseModelState_::_1_::dtor$1 @ 0x180072B49 (_AtmosCheck--RefreshSpatialAudioLicenseModelState_--_1_--dtor$1.c)
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$2 @ 0x18007423F (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$2.c)
 *     _dynamic_atexit_destructor_for__ApoDataTemplate__ @ 0x180074A60 (_dynamic_atexit_destructor_for__ApoDataTemplate__.c)
 *     ??1AudioEffectsWatcher@@QEAA@XZ @ 0x1800CB5E0 (--1AudioEffectsWatcher@@QEAA@XZ.c)
 *     ??1DynamicAudioEndpointManager@@UEAA@XZ @ 0x1800D89C4 (--1DynamicAudioEndpointManager@@UEAA@XZ.c)
 *     ??1CDeviceGraphObjectsStore@@UEAA@XZ @ 0x1800F1C08 (--1CDeviceGraphObjectsStore@@UEAA@XZ.c)
 *     ??1CEndpointCharacteristics@@MEAA@XZ @ 0x180114F30 (--1CEndpointCharacteristics@@MEAA@XZ.c)
 *     ??1PhoneCallAudio@@MEAA@XZ @ 0x180127468 (--1PhoneCallAudio@@MEAA@XZ.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x18013D680 (--1AtmosCheck@@UEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180064E14 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
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
