/*
 * XREFs of ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C00D31CC
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00D2E58 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00043DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0005854 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     BmlDoesTargetModeSupportWireFormat @ 0x1C00D158C (BmlDoesTargetModeSupportWireFormat.c)
 *     MonitorIsAdvancedColorEnabled @ 0x1C00D312C (MonitorIsAdvancedColorEnabled.c)
 *     MonitorGetDitheringCaps @ 0x1C00D33F8 (MonitorGetDitheringCaps.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C00D601C (MonitorIsMonitorAndDriverWCGCapable.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00D60D0 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     ?PickWireFormatWithPreference@@YAJW4BML_WIREFORMAT_PREFERENCE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@11@Z @ 0x1C0141E14 (-PickWireFormatWithPreference@@YAJW4BML_WIREFORMAT_PREFERENCE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREF.c)
 *     ?IsHDRSourceModeAvailableForPinnedSourceMode@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C02C210C (-IsHDRSourceModeAvailableForPinnedSourceMode@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?ModeSupportsHighDepthColorFormat@@YA_NPEAVDMMVIDPNTARGETMODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C02C21EC (-ModeSupportsHighDepthColorFormat@@YA_NPEAVDMMVIDPNTARGETMODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREF.c)
 */

__int64 __fastcall BmlPickColorSpaceAndWireFormat(unsigned __int8 *a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r13
  DMMVIDPNTOPOLOGY *i; // rcx
  __int64 v7; // r12
  __int64 v8; // r15
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DMMVIDPNPRESENTPATH *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DMMVIDPNTARGETMODE *v16; // rax
  __int64 v17; // rax
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbx
  char v23; // di
  int IsAdvancedColorEnabled; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rbx
  bool v29; // r13
  int IsMonitorAndDriverWCGCapable; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rbx
  __int64 v35; // rax
  int DitheringCaps; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rbx
  struct DMMVIDPNTARGETMODE *v41; // rbx
  __int64 v42; // rcx
  bool v43; // zf
  unsigned int v44; // ebx
  int v45; // r14d
  __int64 v46; // r8
  struct DMMVIDPNTARGETMODE *v47; // rcx
  unsigned int v48; // eax
  _BOOL8 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  unsigned int v54; // eax
  __int64 v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rdx
  _QWORD *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  unsigned int v70; // ebx
  __int64 v71; // rdx
  int v72; // ecx
  bool v73; // al
  unsigned int v74; // ebx
  __int64 v75; // rdi
  char v76; // r14
  __int64 v77; // rax
  const struct DMMVIDPNSOURCEMODESET *v78; // rdi
  __int64 v79; // r15
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // rax
  int v86; // ecx
  __int64 v87; // rax
  __int64 v88; // rax
  _QWORD *v89; // rax
  unsigned int v90; // [rsp+20h] [rbp-48h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v91; // [rsp+24h] [rbp-44h] BYREF
  int v92; // [rsp+28h] [rbp-40h]
  int v93; // [rsp+2Ch] [rbp-3Ch] BYREF
  unsigned int v94; // [rsp+30h] [rbp-38h]
  struct DMMVIDPNTARGETMODE *v95; // [rsp+38h] [rbp-30h]
  __int64 v96; // [rsp+40h] [rbp-28h] BYREF
  struct DMMVIDPNPRESENTPATH *v97; // [rsp+48h] [rbp-20h]
  const struct DMMVIDPNSOURCEMODESET *v98; // [rsp+50h] [rbp-18h] BYREF
  bool v99; // [rsp+B0h] [rbp+48h] BYREF
  int v100; // [rsp+B8h] [rbp+50h]
  __int64 v101; // [rsp+C0h] [rbp+58h]
  char v102; // [rsp+C8h] [rbp+60h]

  v101 = a3;
  v100 = a2;
  v3 = 0;
  v4 = a3;
  v94 = 0;
  if ( !*a1 )
    return 0LL;
  for ( i = (DMMVIDPNTOPOLOGY *)(a3 + 96); ; i = (DMMVIDPNTOPOLOGY *)(v4 + 96) )
  {
    v7 = v3;
    v8 = 104LL * v3;
    Path = DMMVIDPNTOPOLOGY::FindPath(
             i,
             *(_DWORD *)(*(_QWORD *)&a1[v8 + 16] + 24LL),
             *(_DWORD *)(*(_QWORD *)&a1[v8 + 16] + 28LL));
    v97 = Path;
    v13 = Path;
    if ( !Path )
      break;
    v14 = *((_QWORD *)Path + 12);
    v15 = *(_QWORD *)(v14 + 104);
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 96));
      v15 = *(_QWORD *)(v14 + 104);
    }
    v16 = *(struct DMMVIDPNTARGETMODE **)(v15 + 144);
    v96 = v15;
    v95 = v16;
    if ( !v16 )
    {
      v88 = WdLogNewEntry5_WdError(v15, v14, v12);
      *(_QWORD *)(v88 + 24) = *(unsigned int *)(*(_QWORD *)&a1[104 * v3 + 16] + 28LL);
      *(_QWORD *)(v88 + 32) = v4;
      WdLogEvent5_WdError(v88);
      v70 = -1071774967;
      goto LABEL_74;
    }
    v17 = *((_QWORD *)v13 + 12);
    v92 = 0;
    IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(*(struct HDXGMONITOR__ **)(*(_QWORD *)(v17 + 96)
                                                                                            + 112LL));
    v22 = IsMonitorAndLinkHDRCapable;
    if ( IsMonitorAndLinkHDRCapable < 0 )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19, v21);
      v56[3] = *(unsigned int *)(*(_QWORD *)&a1[v8 + 16] + 28LL);
      v56[4] = v4;
      v56[5] = v22;
      WdLogEvent5_WdError(v56);
      v23 = 0;
      v92 = 0;
    }
    else
    {
      v23 = v92;
    }
    IsAdvancedColorEnabled = MonitorIsAdvancedColorEnabled(
                               *(struct HDXGMONITOR__ **)(*(_QWORD *)(*((_QWORD *)v13 + 12) + 96LL) + 112LL),
                               &v99);
    v28 = IsAdvancedColorEnabled;
    if ( IsAdvancedColorEnabled < 0 )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25, v27);
      v57[3] = *(unsigned int *)(*(_QWORD *)&a1[v8 + 16] + 28LL);
      v57[4] = v4;
      v57[5] = v28;
      WdLogEvent5_WdError(v57);
      v29 = 0;
      v99 = 0;
    }
    else
    {
      v29 = v99;
    }
    IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(*(struct HDXGMONITOR__ **)(*(_QWORD *)(*((_QWORD *)v13 + 12) + 96LL)
                                                                                                + 112LL));
    v34 = IsMonitorAndDriverWCGCapable;
    if ( IsMonitorAndDriverWCGCapable < 0 )
    {
      v58 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31, v33);
      v59 = *(unsigned int *)(*(_QWORD *)&a1[v8 + 16] + 28LL);
      v58[4] = v101;
      v58[3] = v59;
      v58[5] = v34;
      WdLogEvent5_WdError(v58);
      v102 = 0;
    }
    v35 = *((_QWORD *)v13 + 12);
    v91.Value = 0;
    DitheringCaps = MonitorGetDitheringCaps(*(_QWORD *)(*(_QWORD *)(v35 + 96) + 112LL), &v91);
    v40 = DitheringCaps;
    if ( DitheringCaps < 0 )
    {
      v60 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37, v39);
      v61 = *(unsigned int *)(*(_QWORD *)&a1[v8 + 16] + 28LL);
      v60[4] = v101;
      v60[3] = v61;
      v60[5] = v40;
      WdLogEvent5_WdError(v60);
      v91.Value = 0;
    }
    v41 = v95;
    v42 = *(_QWORD *)&a1[v8 + 16];
    v90 = 0;
    v43 = (*(_BYTE *)v42 & 8) == 0;
    v93 = *((_DWORD *)v95 + 32);
    if ( !v43 )
    {
      v44 = *(_DWORD *)(v42 + 204);
      v45 = *(_DWORD *)(v42 + 208);
      if ( BmlDoesTargetModeSupportWireFormat((__int64)v95, v44) )
      {
        v90 = v44;
        if ( (unsigned int)(v45 - 31) <= 2 && !*((_BYTE *)DXGGLOBAL::GetGlobal(v42, v37) + 303928) )
        {
          v65 = *(_QWORD *)(v101 + 48);
          v66 = *(_QWORD *)(v65 + 8);
          if ( !v66 )
          {
            v67 = WdLogNewEntry5_WdAssertion(v63, v62);
            WdLogEvent5_WdAssertion(v67);
            v66 = *(_QWORD *)(v65 + 8);
          }
          v68 = *(unsigned int *)(*(_QWORD *)(v66 + 16) + 308LL);
          if ( (v68 & 8) == 0 )
          {
            v69 = WdLogNewEntry5_WdError(v68, v62, v64);
            *(_QWORD *)(v69 + 24) = *(unsigned int *)(*(_QWORD *)&a1[104 * v7 + 16] + 28LL);
            WdLogEvent5_WdError(v69);
            v70 = -1073741811;
LABEL_74:
            auto_rc<DMMVIDPNTARGETMODESET>::reset(&v96, 0LL);
            return v70;
          }
        }
        if ( v45 == 32 && (v23 & 2) == 0 || v45 == 33 && (v23 & 4) == 0 )
        {
          v70 = -1073741637;
          goto LABEL_74;
        }
        goto LABEL_20;
      }
      if ( (*(_BYTE *)(*(_QWORD *)&a1[v8 + 16] + 8LL) & 8) != 0 )
      {
        v87 = WdLogNewEntry5_WdError(v42, v37, v46);
        *(_QWORD *)(v87 + 24) = *(unsigned int *)(*(_QWORD *)&a1[104 * v7 + 16] + 28LL);
        WdLogEvent5_WdError(v87);
        v70 = -1071774902;
        goto LABEL_74;
      }
      v41 = v95;
    }
    if ( !v29 )
      goto LABEL_24;
    if ( (v23 & 1) == 0
      || !*((_BYTE *)DXGGLOBAL::GetGlobal(v42, v37) + 304116)
      || !ModeSupportsHighDepthColorFormat(v41, &v91)
      || (*(_DWORD *)&a1[v8 + 116] & 2) != 0 )
    {
      if ( v102 && ModeSupportsHighDepthColorFormat(v41, &v91) && (*(_DWORD *)&a1[v8 + 116] & 2) == 0 )
      {
        v45 = 30;
        if ( (int)PickWireFormatWithPreference(3LL, &v93, &v91, &v90) < 0 )
        {
          v54 = v90 & 0xFFFFFF03 | 8;
          v45 = 0;
LABEL_28:
          v90 = v54;
          v55 = WdLogNewEntry5_WdWarning(v52, v51, v53);
          WdLogEvent5_WdWarning(v55);
        }
      }
      else
      {
LABEL_24:
        v45 = 0;
        v50 = 1;
        if ( v100 == 2 && (*((_DWORD *)a1 + 1) & 0x8000000) == 0 )
        {
          v86 = *(_DWORD *)(*(_QWORD *)&a1[v8 + 16] + 116LL);
          if ( v86 == 31 || v86 == 35 )
            v50 = 0;
        }
        if ( (int)PickWireFormatWithPreference(v50, &v93, &v91, &v90) < 0 )
        {
          v54 = v90 & 0xFFFFFF03 | 8;
          goto LABEL_28;
        }
      }
LABEL_20:
      v4 = v101;
      goto LABEL_21;
    }
    v73 = 0;
    if ( v100 == 2 && (*((_DWORD *)a1 + 1) & 0x8000000) == 0 )
    {
      v72 = *(_DWORD *)(*(_QWORD *)&a1[v8 + 16] + 116LL);
      if ( v72 != 36 && v72 != 113 )
        v73 = 1;
    }
    v74 = 4 * !v73;
    v75 = *((_QWORD *)v97 + 11);
    v76 = -!v73;
    v77 = *(_QWORD *)(v75 + 104);
    v45 = v76 & 0xC;
    if ( v77 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v77 + 96));
      v78 = *(const struct DMMVIDPNSOURCEMODESET **)(v75 + 104);
    }
    else
    {
      v78 = 0LL;
    }
    v4 = v101;
    v98 = v78;
    v79 = *(_QWORD *)(v101 + 48);
    v80 = *(_QWORD *)(v79 + 8);
    if ( !v80 )
    {
      v81 = WdLogNewEntry5_WdAssertion(0LL, v71);
      WdLogEvent5_WdAssertion(v81);
      v80 = *(_QWORD *)(v79 + 8);
    }
    if ( !IsHDRSourceModeAvailableForPinnedSourceMode(*(const struct DXGADAPTER **)(v80 + 16), v78) )
    {
      v45 = 0;
      v74 = 0;
    }
    if ( (int)PickWireFormatWithPreference(v74, &v93, &v91, &v90) < 0 )
    {
      v90 = v90 & 0xFFFFFF03 | 8;
      v45 = 0;
      v85 = WdLogNewEntry5_WdWarning(v83, v82, v84);
      WdLogEvent5_WdWarning(v85);
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v98, 0LL);
LABEL_21:
    v47 = v95;
    *((_DWORD *)v95 + 33) = v90;
    *((_DWORD *)v47 + 34) = v45;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v96, 0LL);
    v48 = *a1;
    v3 = v94 + 1;
    v94 = v3;
    if ( v3 >= v48 )
      return 0LL;
  }
  v89 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
  v89[4] = a1;
  v89[3] = v3;
  v89[5] = *(unsigned int *)(*(_QWORD *)&a1[104 * v3 + 16] + 24LL);
  v89[6] = *(unsigned int *)(*(_QWORD *)&a1[104 * v3 + 16] + 28LL);
  v89[7] = v4;
  WdLogEvent5_WdError(v89);
  return 3223192345LL;
}
