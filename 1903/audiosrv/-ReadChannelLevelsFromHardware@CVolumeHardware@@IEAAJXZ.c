/*
 * XREFs of ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x1800C72A8
 * Callers:
 *     ?OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z @ 0x1800C6C60 (-OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x180060254 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180060630 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x180060730 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x1800C4024 (WPP_SF_qd.c)
 *     WPP_SF_dg @ 0x1800C88E4 (WPP_SF_dg.c)
 */

__int64 __fastcall CVolumeHardware::ReadChannelLevelsFromHardware(CVolumeHardware *this)
{
  int v1; // edi
  unsigned int v3; // esi
  CVolumeUnit *v4; // rax
  int v6; // [rsp+20h] [rbp-18h]
  float v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 32) )
  {
    v1 = -2147418113;
LABEL_15:
    AudSrvTraceLoggingErrorHelper("CVolumeHardware::ReadChannelLevelsFromHardware", 1489, v1);
    return (unsigned int)v1;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v6 = *((_DWORD *)this + 31);
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x28u,
      (__int64)&WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids,
      this,
      v6);
  }
  v3 = 0;
  if ( *((_DWORD *)this + 31) )
  {
    do
    {
      v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)this + 32) + 40LL))(
             *((_QWORD *)this + 32),
             v3,
             &v7);
      if ( v1 < 0 )
        goto LABEL_15;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_dg(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids, v3, v7);
      }
      v4 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                            (_QWORD *)this + 11,
                            v3);
      CVolumeUnit::SetDB(v4, v7);
    }
    while ( ++v3 < *((_DWORD *)this + 31) );
  }
  CVolumeControlBase::RecalcMasterFromChannelLevels(this);
  return (unsigned int)v1;
}
