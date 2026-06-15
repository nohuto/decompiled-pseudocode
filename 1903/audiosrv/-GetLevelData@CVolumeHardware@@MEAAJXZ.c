/*
 * XREFs of ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18005FE80
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x1800600EC (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x180060198 (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x180060254 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x180060368 (-SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x180060400 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x180060550 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180060630 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x180060730 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x1800C4024 (WPP_SF_qd.c)
 *     WPP_SF_qdg @ 0x1800C896C (WPP_SF_qdg.c)
 *     WPP_SF_qdggg @ 0x1800C8A28 (WPP_SF_qdggg.c)
 *     WPP_SF_qgg @ 0x1800C8B64 (WPP_SF_qgg.c)
 */

__int64 __fastcall CVolumeHardware::GetLevelData(CVolumeHardware *this)
{
  CVolumeHardware *v1; // rbx
  int v2; // edi
  int v3; // eax
  char *v4; // r12
  _DWORD *v5; // rdx
  __int64 v6; // r8
  float v7; // xmm8_4
  float v8; // xmm9_4
  unsigned int i; // esi
  __int64 v10; // rdx
  __int64 v11; // r8
  float v12; // xmm7_4
  float v13; // xmm6_4
  unsigned int j; // esi
  CVolumeUnit *v15; // rax
  ATL::CAtlException *v17; // rbx
  _DWORD v18[10]; // [rsp+0h] [rbp-118h] BYREF
  double v19; // [rsp+28h] [rbp-F0h]
  float v20; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v21; // [rsp+44h] [rbp-D4h]
  int v22; // [rsp+48h] [rbp-D0h]
  float v23; // [rsp+4Ch] [rbp-CCh]
  float v24; // [rsp+50h] [rbp-C8h]
  char *v25; // [rsp+58h] [rbp-C0h]
  __int64 v26; // [rsp+60h] [rbp-B8h]
  ATL::CAtlException *v27; // [rsp+68h] [rbp-B0h] BYREF
  _BYTE v28[128]; // [rsp+70h] [rbp-A8h] BYREF
  float v30; // [rsp+128h] [rbp+10h] BYREF
  float v31; // [rsp+130h] [rbp+18h] BYREF
  float v32; // [rsp+138h] [rbp+20h] BYREF

  v26 = -2LL;
  v1 = this;
  v2 = -2147467259;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids, this);
  }
  if ( !*((_QWORD *)v1 + 32) )
    goto LABEL_26;
  v3 = *((_DWORD *)v1 + 71);
  *((_DWORD *)v1 + 31) = v3;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids, v1, v3);
  }
  v4 = (char *)v1 + 88;
  v25 = (char *)v1 + 88;
  ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetCount((char *)v1 + 88, 0LL);
  if ( !*((_QWORD *)v1 + 32) )
  {
LABEL_26:
    v2 = -2147418113;
LABEL_27:
    AudSrvTraceLoggingErrorHelper("CVolumeHardware::GetLevelData", 1242, v2);
    return (unsigned int)v2;
  }
  v7 = FLOAT_1000_0;
  v8 = FLOAT_N1000_0;
  for ( i = 0; ; ++i )
  {
    v21 = i;
    if ( i >= *((_DWORD *)v1 + 31) )
      break;
    CVolumeUnit::CVolumeUnit((CVolumeUnit *)v28);
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, float *, float *))(**((_QWORD **)v1 + 32) + 32LL))(
           *((_QWORD *)v1 + 32),
           0LL,
           &v32,
           &v31,
           &v30);
    if ( v2 < 0 )
      goto LABEL_27;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdggg(*((_QWORD *)WPP_GLOBAL_Control + 2), v10, v11, v1, i, v32, v31, v30);
    }
    v19 = DOUBLE_1_75;
    *(float *)&v18[8] = v30;
    v12 = v31;
    v13 = v32;
    CVolumeUnit::SetDBRange(v28);
    v7 = fminf(v13, v7);
    v23 = v7;
    v8 = fmaxf(v12, v8);
    v24 = v8;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)v1 + 32) + 40LL))(
           *((_QWORD *)v1 + 32),
           i,
           &v20);
    if ( v2 < 0 )
      goto LABEL_27;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        31LL,
        &WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids,
        v1,
        i,
        v20);
    }
    CVolumeUnit::SetDB((CVolumeUnit *)v28, v20);
    v2 = 0;
    try
    {
      ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((char *)v1 + 88, i, v28);
    }
    catch ( ATL::CAtlException *v27 )
    {
      v5 = v18;
      v17 = v27;
      if ( *(_DWORD *)v27 == -1073741571 )
        _o__resetstkoflw();
      v22 = *(_DWORD *)v17;
      v2 = v22;
      if ( v22 < 0 )
        goto LABEL_27;
      v1 = this;
      v7 = v23;
      v8 = v24;
      i = v21;
      v4 = v25;
    }
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qgg(*((_QWORD *)WPP_GLOBAL_Control + 2), v5, v6, v1, v7, v8);
  }
  for ( j = 0; j < *((_DWORD *)v1 + 31); ++j )
  {
    v15 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](v4, j);
    CVolumeUnit::SetTaperOverallRange(v15, v7, v8);
  }
  CVolumeControlBase::RecalcMasterFromChannelLevels(v1);
  if ( v2 < 0 )
    goto LABEL_27;
  return (unsigned int)v2;
}
