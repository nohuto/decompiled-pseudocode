/*
 * XREFs of DoesPlatformSupportSpatialAudio @ 0x18005A07C
 * Callers:
 *     ?MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z @ 0x180058EC8 (-MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z.c)
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudioEncoderDescriptor@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@50V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEBGKPEAU3@AEAK9999PEAU2@@Z @ 0x180067BB0 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAI_NAEBUSpatialAudioSettings@@IPEBUSpatialAudio.c)
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800665D8 (IsGetDefaultSpatialRenderingModePresent.c)
 */

bool __fastcall DoesPlatformSupportSpatialAudio(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax

  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(a1, a2, a3, a4) )
    v4 = IsSpatialAllowedOnPlatform();
  else
    v4 = 1;
  return v4 != 0;
}
