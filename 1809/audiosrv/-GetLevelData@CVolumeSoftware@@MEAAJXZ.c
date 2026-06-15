/*
 * XREFs of ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800B70D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18005BCBC (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18005BE24 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x18005BFD0 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18005C0BC (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18005C2E4 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x1800B7A80 (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x1800B7D68 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
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
        (__int64)&WPP_1ac98b3e4732363a42c9f2d13b70c7da_Traceguids,
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
    AudSrvTraceLoggingErrorHelper("CVolumeSoftware::GetLevelData", 1970, v3);
  return (unsigned int)v3;
}
