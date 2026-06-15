/*
 * XREFs of ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180049C18
 * Callers:
 *     ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180049B80 (-GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18005BE24 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z @ 0x1800B6DD4 (-FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z.c)
 *     ?GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x1800B6F60 (-GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z.c)
 *     ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800B8C00 (-SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800B9380 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x180049C94 (-TaperFromScalar@CVolumeUnit@@IEAANNN@Z.c)
 *     pow @ 0x1800616C4 (pow.c)
 */

float __fastcall CVolumeUnit::GetWiper(CVolumeUnit *this)
{
  double v2; // xmm0_8
  double v3; // xmm0_8

  v2 = pow(10.0, *((float *)this + 1) / 20.0);
  v3 = (CVolumeUnit::TaperFromScalar(this, v2, *((double *)this + 5)) - *((double *)this + 3))
     / (*((double *)this + 4) - *((double *)this + 3));
  if ( v3 >= 1.0 )
    v3 = DOUBLE_1_0;
  if ( v3 <= 0.0 )
    return 0.0;
  return v3;
}
