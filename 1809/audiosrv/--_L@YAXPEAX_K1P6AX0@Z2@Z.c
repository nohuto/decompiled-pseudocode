/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180060CFC
 * Callers:
 *     ??0CDeviceGraphObjectsStore@@QEAA@XZ @ 0x18000DD58 (--0CDeviceGraphObjectsStore@@QEAA@XZ.c)
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x18004B3DC (--0CEndpointCharacteristics@@QEAA@XZ.c)
 *     ??0AtmosCheck@@QEAA@XZ @ 0x180054AC8 (--0AtmosCheck@@QEAA@XZ.c)
 *     ??0PhoneCallAudio@@IEAA@XZ @ 0x180058EBC (--0PhoneCallAudio@@IEAA@XZ.c)
 *     ??0DynamicAudioEndpointManager@@QEAA@XZ @ 0x18005CAEC (--0DynamicAudioEndpointManager@@QEAA@XZ.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180068220 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ??0AudioEffectsWatcher@@QEAA@XZ @ 0x1800BD210 (--0AudioEffectsWatcher@@QEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x1800607E4 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    _guard_dispatch_icall_fptr();
    a1 += a2;
  }
}
