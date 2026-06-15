/*
 * XREFs of ?Store@SpatialAudioStateIO@@IEAAJXZ @ 0x18012C6A4
 * Callers:
 *     ?ResetState@SpatialAudioDeviceStateWriter@@UEAAJXZ @ 0x180128600 (-ResetState@SpatialAudioDeviceStateWriter@@UEAAJXZ.c)
 *     ?SetActiveSpatialAudioEncoderId@SpatialAudioDeviceStateWriter@@UEAAJAEBU_GUID@@@Z @ 0x180128680 (-SetActiveSpatialAudioEncoderId@SpatialAudioDeviceStateWriter@@UEAAJAEBU_GUID@@@Z.c)
 *     ?SetSpatialRendererSelectionMode@SpatialAudioDeviceStateWriter@@UEAAJW4SpatialRendererSelectionMode@@@Z @ 0x180128720 (-SetSpatialRendererSelectionMode@SpatialAudioDeviceStateWriter@@UEAAJW4SpatialRendererSelectionM.c)
 *     ?SetSpatialVssSelectionMode@SpatialAudioDeviceStateWriter@@UEAAJW4SpatialVssSelectionMode@@@Z @ 0x1801287C0 (-SetSpatialVssSelectionMode@SpatialAudioDeviceStateWriter@@UEAAJW4SpatialVssSelectionMode@@@Z.c)
 * Callees:
 *     ?SetPropertyValue@SpatialAudioIO@@IEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18012C650 (-SetPropertyValue@SpatialAudioIO@@IEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 */

__int64 __fastcall SpatialAudioStateIO::Store(SpatialAudioStateIO *this)
{
  struct _tagpropertykey v2; // [rsp+20h] [rbp-48h] BYREF
  struct tagPROPVARIANT v3; // [rsp+40h] [rbp-28h] BYREF

  *(_QWORD *)&v3.vt = 65LL;
  v3.hVal.QuadPart = 24LL;
  v3.bstrblobVal.pData = (BYTE *)this + 544;
  v2.pid = 2;
  v2.fmtid = (GUID)PKEY_SpatialAudio_Endpoint_State;
  return SpatialAudioIO::SetPropertyValue(this, &v2, &v3);
}
