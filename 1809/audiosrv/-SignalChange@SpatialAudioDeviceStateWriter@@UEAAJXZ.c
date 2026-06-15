/*
 * XREFs of ?SignalChange@SpatialAudioDeviceStateWriter@@UEAAJXZ @ 0x180128860
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPropertyValue@SpatialAudioIO@@IEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18012C650 (-SetPropertyValue@SpatialAudioIO@@IEAAJU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 */

__int64 __fastcall SpatialAudioDeviceStateWriter::SignalChange(SpatialAudioDeviceStateWriter *this)
{
  struct _tagpropertykey v2; // [rsp+20h] [rbp-48h] BYREF
  struct tagPROPVARIANT v3; // [rsp+40h] [rbp-28h] BYREF

  *(_OWORD *)&v3.vt = 2uLL;
  v3.bstrblobVal.pData = 0LL;
  v2.pid = 2;
  v2.fmtid = (GUID)PKEY_SpatialAudio_Signaling_Key;
  return SpatialAudioIO::SetPropertyValue((SpatialAudioDeviceStateWriter *)((char *)this - 568), &v2, &v3);
}
