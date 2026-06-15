/*
 * XREFs of ?DoSpatialAudioProcessBlockRegistration@CAudioDeviceGraph@@AEAAJPEAUISpatialAudioProcessBlockRT@@PEAUIAdaptiveSpatialAudioRenderer@@_N@Z @ 0x1400377F8
 * Callers:
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14000B7FC (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDeviceGraph::DoSpatialAudioProcessBlockRegistration(
        CAudioDeviceGraph *this,
        struct ISpatialAudioProcessBlockRT *a2,
        struct IAdaptiveSpatialAudioRenderer *a3,
        char a4)
{
  __int64 v4; // rax

  v4 = *(_QWORD *)a3;
  if ( a4 )
    return (*(__int64 (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *, struct ISpatialAudioProcessBlockRT *))(v4 + 24))(
             a3,
             a2);
  else
    return (*(__int64 (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *, struct ISpatialAudioProcessBlockRT *))(v4 + 32))(
             a3,
             a2);
}
