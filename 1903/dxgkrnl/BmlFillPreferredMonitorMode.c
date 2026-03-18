/*
 * XREFs of BmlFillPreferredMonitorMode @ 0x1C0137D90
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00DD958 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00DB7C4 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     MonitorGetNextMonitorSourceMode @ 0x1C0137FA0 (MonitorGetNextMonitorSourceMode.c)
 *     BmlGetMonitorModePreference @ 0x1C01380BC (BmlGetMonitorModePreference.c)
 *     BmlIsLowResAnalogTvOutput @ 0x1C01381C4 (BmlIsLowResAnalogTvOutput.c)
 *     MonitorGetNextFrequencyRange @ 0x1C01381E0 (MonitorGetNextFrequencyRange.c)
 *     BmlIsEDIDCapableOutputTechonology @ 0x1C01382E4 (BmlIsEDIDCapableOutputTechonology.c)
 */

__int64 __fastcall BmlFillPreferredMonitorMode(__int64 a1, unsigned int a2, __int64 a3)
{
  _DWORD *v3; // rdi
  unsigned int v5; // r14d
  unsigned int v6; // r12d
  _DWORD *v7; // rdx
  int v8; // r13d
  __int64 v9; // rcx
  int NextFrequencyRange; // eax
  int v11; // esi
  unsigned __int64 v12; // rbx
  __int64 v13; // r10
  int NextMonitorSourceMode; // eax
  int MonitorModePreference; // eax
  unsigned int v16; // r10d
  unsigned int v17; // r11d
  __int64 v18; // rdx
  int v20; // eax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _DWORD *v23; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-20h] BYREF
  __int64 v25; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-10h]
  char v29; // [rsp+A0h] [rbp+58h]
  __int64 v30; // [rsp+A0h] [rbp+58h]
  int v31; // [rsp+A8h] [rbp+60h]

  v3 = 0LL;
  v5 = 0;
  v24 = 0LL;
  v6 = 0;
  v26 = 0LL;
  if ( !*(_QWORD *)(a3 + 112) )
    return 3223192376LL;
  v7 = 0LL;
  v31 = 0;
  v23 = 0LL;
  v8 = -1;
  v29 = 0;
  while ( 1 )
  {
    v9 = *(_QWORD *)(a3 + 112);
    if ( !v9 )
      break;
    NextFrequencyRange = MonitorGetNextFrequencyRange(v9, v7, &v23);
    v11 = NextFrequencyRange;
    if ( NextFrequencyRange == 1075708748 )
    {
      v12 = v26;
      v13 = 0LL;
      v25 = 0LL;
      LODWORD(v23) = 0;
      while ( 1 )
      {
        v9 = *(_QWORD *)(a3 + 112);
        if ( !v9 )
          goto LABEL_53;
        NextMonitorSourceMode = MonitorGetNextMonitorSourceMode(v9, v13, &v25, &v23);
        v11 = NextMonitorSourceMode;
        if ( NextMonitorSourceMode == 1075708748 )
        {
          if ( v31 == 1 && (v29 || (unsigned __int8)BmlIsEDIDCapableOutputTechonology(a3) && v8 >= 8) )
          {
            v8 = 11;
            v24 = v12;
          }
          if ( (unsigned __int8)BmlIsLowResAnalogTvOutput(a3) )
          {
            if ( v5 < 0x400 )
              v5 = 1024;
            if ( v6 < 0x300 )
              v6 = 768;
            v20 = BmlCompareModeExtents((int *)&qword_1C0070338, &v24);
            v21 = v24;
            if ( v20 == 1 )
              v21 = 0x30000000400LL;
            v24 = v21;
          }
          if ( v8 >= 8 )
          {
            v17 = HIDWORD(v24);
            v16 = v24;
          }
          else
          {
            if ( (unsigned __int8)BmlIsLowResAnalogTvOutput(a3) )
            {
              v16 = 800;
              v17 = 600;
            }
            v24 = __PAIR64__(v17, v16);
          }
          if ( v5 < v16 )
            v5 = v16;
          LODWORD(v30) = v5;
          if ( v6 < v17 )
            v6 = v17;
          v18 = 104LL * a2;
          HIDWORD(v30) = v6;
          *(_QWORD *)(v18 + a1 + 52) = v24;
          *(_QWORD *)(v18 + a1 + 44) = v30;
          return 1075708748LL;
        }
        if ( NextMonitorSourceMode < 0 )
        {
          v3 = (_DWORD *)v25;
          goto LABEL_54;
        }
        if ( *(_DWORD *)(v25 + 88) == 1 && *(_DWORD *)(v25 + 84) == 5 )
        {
          ++v31;
          v12 = *(_QWORD *)(v25 + 20);
        }
        MonitorModePreference = BmlGetMonitorModePreference(v25, (unsigned int)v23, a3);
        if ( MonitorModePreference == 11 )
        {
          v29 = 1;
          MonitorModePreference = 0;
        }
        if ( MonitorModePreference > v8 )
        {
          v8 = MonitorModePreference;
          v24 = *(_QWORD *)(v13 + 20);
        }
        if ( v5 < *(_DWORD *)(v13 + 20) )
          v5 = *(_DWORD *)(v13 + 20);
        if ( v6 < *(_DWORD *)(v13 + 24) )
          v6 = *(_DWORD *)(v13 + 24);
      }
    }
    if ( NextFrequencyRange < 0 )
    {
      v3 = v23;
      goto LABEL_54;
    }
    v7 = v23;
    if ( v23[9] == 1 )
    {
      if ( v5 < v23[10] )
        v5 = v23[10];
      if ( v6 < v23[11] )
        v6 = v23[11];
    }
  }
LABEL_53:
  v11 = -1071774920;
LABEL_54:
  v22 = (_QWORD *)WdLogNewEntry5_WdError(v9, v7, a3);
  v22[3] = v3;
  v22[4] = *(_QWORD *)(a3 + 112);
  v22[5] = v11;
  WdLogEvent5_WdError(v22);
  return (unsigned int)v11;
}
