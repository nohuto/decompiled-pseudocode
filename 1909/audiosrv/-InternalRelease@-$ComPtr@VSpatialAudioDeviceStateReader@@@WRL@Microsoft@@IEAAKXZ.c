/*
 * XREFs of ?InternalRelease@?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x180063AB8
 * Callers:
 *     Create_SpatialAudioDeviceStateReader @ 0x18000CBC0 (Create_SpatialAudioDeviceStateReader.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x1800509E4 (--$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 *     Create_SpatialAudioDeviceStateWriter @ 0x180050A90 (Create_SpatialAudioDeviceStateWriter.c)
 *     ??1?$ComPtr@VSpatialAudioDeviceStateWriter@@@WRL@Microsoft@@QEAA@XZ @ 0x1801318B0 (--1-$ComPtr@VSpatialAudioDeviceStateWriter@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 568) + 16LL))(v1 + 568);
  }
  return result;
}
