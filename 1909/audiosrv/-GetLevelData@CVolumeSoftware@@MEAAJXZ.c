/*
 * XREFs of ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800C5350
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18005BB2C (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18005BC94 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x18005BE40 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18005BF90 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18005C170 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x1800C5D00 (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x1800C5FE8 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 */

__int64 __fastcall CVolumeSoftware::GetLevelData(CVolumeSoftware *this)
{
  CVolumeSoftware *v1; // rbx
  int v3; // esi
  unsigned int i; // edi
  __int64 v5; // rdx
  float v6; // xmm3_4
  int *v7; // rbx
  ATL::CAtlException *v8; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v9[64]; // [rsp+40h] [rbp-68h] BYREF

  v1 = this;
  if ( !*((_DWORD *)this + 31) )
    return 0LL;
  v3 = 0;
  if ( (int)CVolumeSoftware::LoadVolumeState(this) < 0 && (int)CVolumeSoftware::LoadDefaultVolumeForEndpoint(v1) < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x35u,
        (__int64)&WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids,
        *((const wchar_t **)v1 + 8));
    }
    for ( i = 0; i < *((_DWORD *)v1 + 31); ++i )
    {
      CVolumeUnit::CVolumeUnit((CVolumeUnit *)v9);
      if ( *((_DWORD *)v1 + 74) == 4 )
        v6 = FLOAT_30_0;
      else
        v6 = 0.0;
      CVolumeUnit::SetDBRange((__int64)v9, v5, -96.0, v6, SLODWORD(FLOAT_1_5), *(__int64 *)&DOUBLE_1_75);
      CVolumeUnit::SetDB((CVolumeUnit *)v9, 0.0);
      v3 = 0;
      try
      {
        ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((_QWORD *)v1 + 11, i, (__int64)v9);
      }
      catch ( ATL::CAtlException *v8 )
      {
        v7 = (int *)v8;
        if ( *(_DWORD *)v8 == -1073741571 )
          _o__resetstkoflw();
        v3 = *v7;
        if ( *v7 < 0 )
          goto LABEL_19;
        v1 = this;
      }
    }
  }
  CVolumeControlBase::RecalcMasterFromChannelLevels(v1);
  if ( v3 < 0 )
LABEL_19:
    AudSrvTraceLoggingErrorHelper("CVolumeSoftware::GetLevelData", 1972, v3);
  return (unsigned int)v3;
}
