/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180060770
 * Callers:
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180068220 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     _AtmosCheck::RefreshSpatialAudioLicenseModelState_::_1_::dtor$1 @ 0x18006856F (_AtmosCheck--RefreshSpatialAudioLicenseModelState_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$5 @ 0x18006B086 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$5.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$13 @ 0x18006B105 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$13.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$18 @ 0x18006B13C (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$18.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$23 @ 0x18006B173 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$23.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$24 @ 0x18006B1AA (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$24.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$25 @ 0x18006B1E1 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$25.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$4 @ 0x18006F67E (_AtmosCheck--AtmosCheck_--_1_--dtor$4.c)
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$2 @ 0x18006FFD8 (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$2.c)
 *     _dynamic_atexit_destructor_for__ApoDataTemplate__ @ 0x180070560 (_dynamic_atexit_destructor_for__ApoDataTemplate__.c)
 *     ??1AudioEffectsWatcher@@QEAA@XZ @ 0x1800BD360 (--1AudioEffectsWatcher@@QEAA@XZ.c)
 *     ??1DynamicAudioEndpointManager@@UEAA@XZ @ 0x1800CA468 (--1DynamicAudioEndpointManager@@UEAA@XZ.c)
 *     ??1CDeviceGraphObjectsStore@@UEAA@XZ @ 0x1800E6F78 (--1CDeviceGraphObjectsStore@@UEAA@XZ.c)
 *     ??1CEndpointCharacteristics@@MEAA@XZ @ 0x1801077D0 (--1CEndpointCharacteristics@@MEAA@XZ.c)
 *     ??1PhoneCallAudio@@MEAA@XZ @ 0x18011AE68 (--1PhoneCallAudio@@MEAA@XZ.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x1801375A4 (--1AtmosCheck@@UEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x1800607E4 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
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
