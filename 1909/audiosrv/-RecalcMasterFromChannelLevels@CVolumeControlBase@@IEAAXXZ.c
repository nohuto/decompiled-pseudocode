/*
 * XREFs of ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18005BC94
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18005B8C0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800C5350 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x1800C6DF8 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800C6F70 (-SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800C70D0 (-SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800C7260 (-SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x18004ECF8 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005C070 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     pow @ 0x180065D0C (pow.c)
 *     WPP_SF_qd @ 0x1800C3B74 (WPP_SF_qd.c)
 *     WPP_SF_qdg @ 0x1800C84BC (WPP_SF_qdg.c)
 */

void __fastcall CVolumeControlBase::RecalcMasterFromChannelLevels(CVolumeControlBase *this)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  float v4; // xmm6_4
  __int64 v5; // rax
  float v6; // xmm1_4
  CVolumeUnit *v7; // rax
  float Wiper; // xmm0_4
  __int64 v9; // rax
  double v10; // xmm0_8

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16LL,
      &WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids,
      this,
      *((_DWORD *)this + 31));
  }
  v2 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((char *)this + 88, 0LL);
  v3 = 0;
  v4 = pow(10.0, *(float *)(v2 + 4) / 20.0);
  for ( *((_DWORD *)this + 30) = 0; v3 < *((_DWORD *)this + 31); ++v3 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v7 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                            (char *)this + 88,
                            v3);
      Wiper = CVolumeUnit::GetWiper(v7);
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        17LL,
        &WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids,
        this,
        v3,
        Wiper);
    }
    v5 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((char *)this + 88, v3);
    v6 = pow(10.0, *(float *)(v5 + 4) / 20.0);
    if ( v6 > v4 )
    {
      v9 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((char *)this + 88, v3);
      v10 = pow(10.0, *(float *)(v9 + 4) / 20.0);
      *((_DWORD *)this + 30) = v3;
      v4 = v10;
    }
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      18LL,
      &WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids,
      this,
      *((_DWORD *)this + 30),
      v4);
  }
}
