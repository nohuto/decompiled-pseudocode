/*
 * XREFs of ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18005B8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x18005BB2C (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x18005BBD8 (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18005BC94 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x18005BDA8 (-SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z.c)
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x18005BE40 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z @ 0x18005BF90 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMMN@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18005C070 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18005C170 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x1800C3B74 (WPP_SF_qd.c)
 *     WPP_SF_qdg @ 0x1800C84BC (WPP_SF_qdg.c)
 *     WPP_SF_qdggg @ 0x1800C8578 (WPP_SF_qdggg.c)
 *     WPP_SF_qgg @ 0x1800C86B4 (WPP_SF_qgg.c)
 */

__int64 __fastcall CVolumeHardware::GetLevelData(CVolumeHardware *this)
{
  CVolumeHardware *v1; // rbx
  int v2; // edi
  int v3; // eax
  char *v4; // r12
  __int64 *v5; // rdx
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
  __int64 v18; // [rsp+0h] [rbp-118h] BYREF
  __int64 v19; // [rsp+20h] [rbp-F8h]
  double v20; // [rsp+28h] [rbp-F0h]
  float v21; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v22; // [rsp+44h] [rbp-D4h]
  int v23; // [rsp+48h] [rbp-D0h]
  float v24; // [rsp+4Ch] [rbp-CCh]
  float v25; // [rsp+50h] [rbp-C8h]
  char *v26; // [rsp+58h] [rbp-C0h]
  __int64 v27; // [rsp+60h] [rbp-B8h]
  ATL::CAtlException *v28; // [rsp+68h] [rbp-B0h] BYREF
  _BYTE v29[128]; // [rsp+70h] [rbp-A8h] BYREF
  float v31; // [rsp+128h] [rbp+10h] BYREF
  float v32; // [rsp+130h] [rbp+18h] BYREF
  float v33; // [rsp+138h] [rbp+20h] BYREF

  v27 = -2LL;
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
  v26 = (char *)v1 + 88;
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
    v22 = i;
    if ( i >= *((_DWORD *)v1 + 31) )
      break;
    CVolumeUnit::CVolumeUnit((CVolumeUnit *)v29);
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, float *, float *))(**((_QWORD **)v1 + 32) + 32LL))(
           *((_QWORD *)v1 + 32),
           0LL,
           &v33,
           &v32,
           &v31);
    if ( v2 < 0 )
      goto LABEL_27;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      LODWORD(v19) = i;
      WPP_SF_qdggg(*((_QWORD *)WPP_GLOBAL_Control + 2), v10, v11, v1, v19, v33, v32, v31);
    }
    v20 = DOUBLE_1_75;
    *(float *)&v19 = v31;
    v12 = v32;
    v13 = v33;
    CVolumeUnit::SetDBRange(v29);
    v7 = fminf(v13, v7);
    v24 = v7;
    v8 = fmaxf(v12, v8);
    v25 = v8;
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)v1 + 32) + 40LL))(
           *((_QWORD *)v1 + 32),
           i,
           &v21);
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
        v21);
    }
    CVolumeUnit::SetDB((CVolumeUnit *)v29, v21);
    v2 = 0;
    try
    {
      ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((char *)v1 + 88, i, v29);
    }
    catch ( ATL::CAtlException *v28 )
    {
      v5 = &v18;
      v17 = v28;
      if ( *(_DWORD *)v28 == -1073741571 )
        _o__resetstkoflw();
      v23 = *(_DWORD *)v17;
      v2 = v23;
      if ( v23 < 0 )
        goto LABEL_27;
      v1 = this;
      v7 = v24;
      v8 = v25;
      i = v22;
      v4 = v26;
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
