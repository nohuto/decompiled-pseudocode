/*
 * XREFs of ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C00D5E14
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C00D5B44 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0003D7C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000F554 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000F9D0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000FAAC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C00C2C0C (MonitorIsMonitorAndDriverWCGCapable.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00C2EBC (MonitorIsMonitorAndLinkHDRCapable.c)
 *     ?PickWireFormatWithPreference@@YAJW4BML_WIREFORMAT_PREFERENCE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@11@Z @ 0x1C00D5638 (-PickWireFormatWithPreference@@YAJW4BML_WIREFORMAT_PREFERENCE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREF.c)
 *     MonitorGetDitheringCaps @ 0x1C00D6040 (MonitorGetDitheringCaps.c)
 *     MonitorIsAdvancedColorEnabled @ 0x1C00D60DC (MonitorIsAdvancedColorEnabled.c)
 *     BmlDoesTargetModeSupportWireFormat @ 0x1C00D6A68 (BmlDoesTargetModeSupportWireFormat.c)
 *     ?IsHDRSourceModeAvailableForPinnedSourceMode@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0289D7C (-IsHDRSourceModeAvailableForPinnedSourceMode@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?ModeSupportsHighDepthColorFormat@@YA_NPEAVDMMVIDPNTARGETMODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C0289E58 (-ModeSupportsHighDepthColorFormat@@YA_NPEAVDMMVIDPNTARGETMODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREF.c)
 */

__int64 __fastcall BmlPickColorSpaceAndWireFormat(unsigned __int8 *a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r13
  DMMVIDPNTOPOLOGY *i; // rcx
  __int64 v7; // r12
  __int64 v8; // r15
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v10; // rcx
  struct DMMVIDPNPRESENTPATH *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DMMVIDPNTARGETMODE *v14; // rax
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  char v18; // di
  int IsAdvancedColorEnabled; // eax
  __int64 v20; // rcx
  __int64 v21; // rbx
  char v22; // r13
  int IsMonitorAndDriverWCGCapable; // eax
  __int64 v24; // rcx
  __int64 v25; // rbx
  int DitheringCaps; // eax
  __int64 v27; // rcx
  __int64 v28; // rbx
  struct DMMVIDPNTARGETMODE *v29; // rbx
  __int64 v30; // rcx
  bool v31; // zf
  unsigned int v32; // ebx
  int v33; // r14d
  struct DMMVIDPNTARGETMODE *v34; // rcx
  unsigned int v35; // eax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // eax
  __int64 v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rdx
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // ebx
  int v56; // ecx
  bool v57; // al
  unsigned int v58; // ebx
  __int64 v59; // rdi
  char v60; // r14
  __int64 v61; // rax
  const struct DMMVIDPNSOURCEMODESET *v62; // rdi
  __int64 v63; // r15
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rax
  int v70; // ecx
  __int64 v71; // rax
  __int64 v72; // rax
  _QWORD *v73; // rax
  int v74; // [rsp+20h] [rbp-58h]
  unsigned int v75; // [rsp+30h] [rbp-48h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v76; // [rsp+34h] [rbp-44h] BYREF
  unsigned int v77; // [rsp+38h] [rbp-40h] BYREF
  int v78; // [rsp+3Ch] [rbp-3Ch] BYREF
  unsigned int v79; // [rsp+40h] [rbp-38h]
  struct DMMVIDPNTARGETMODE *v80; // [rsp+48h] [rbp-30h]
  __int64 v81; // [rsp+50h] [rbp-28h] BYREF
  struct DMMVIDPNPRESENTPATH *v82; // [rsp+58h] [rbp-20h]
  const struct DMMVIDPNSOURCEMODESET *v83; // [rsp+60h] [rbp-18h] BYREF
  char v84; // [rsp+C0h] [rbp+48h] BYREF
  int v85; // [rsp+C8h] [rbp+50h]
  __int64 v86; // [rsp+D0h] [rbp+58h]
  char v87; // [rsp+D8h] [rbp+60h] BYREF

  v86 = a3;
  v85 = a2;
  v3 = 0;
  v4 = a3;
  v79 = 0;
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
    v82 = Path;
    v11 = Path;
    if ( !Path )
      break;
    v12 = *((_QWORD *)Path + 12);
    v13 = *(_QWORD *)(v12 + 104);
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 96));
      v13 = *(_QWORD *)(v12 + 104);
    }
    v14 = *(struct DMMVIDPNTARGETMODE **)(v13 + 144);
    v81 = v13;
    v80 = v14;
    if ( !v14 )
    {
      v72 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v72 + 24) = *(unsigned int *)(*(_QWORD *)&a1[104 * v3 + 16] + 28LL);
      *(_QWORD *)(v72 + 32) = v4;
      WdLogEvent5_WdError(v72);
      v55 = -1071774967;
      goto LABEL_74;
    }
    v77 = 0;
    IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(
                                   *(struct HDXGMONITOR__ **)(*(_QWORD *)(*((_QWORD *)v11 + 12) + 96LL) + 112LL),
                                   &v77);
    v17 = IsMonitorAndLinkHDRCapable;
    if ( IsMonitorAndLinkHDRCapable < 0 )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v43[3] = *(unsigned int *)(*(_QWORD *)&a1[v8 + 16] + 28LL);
      v43[4] = v4;
      v43[5] = v17;
      WdLogEvent5_WdError(v43);
      v18 = 0;
      v77 = 0;
    }
    else
    {
      v18 = v77;
    }
    IsAdvancedColorEnabled = MonitorIsAdvancedColorEnabled(
                               *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 12) + 96LL) + 112LL),
                               &v84);
    v21 = IsAdvancedColorEnabled;
    if ( IsAdvancedColorEnabled < 0 )
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdError(v20);
      v44[3] = *(unsigned int *)(*(_QWORD *)&a1[v8 + 16] + 28LL);
      v44[4] = v4;
      v44[5] = v21;
      WdLogEvent5_WdError(v44);
      v22 = 0;
      v84 = 0;
    }
    else
    {
      v22 = v84;
    }
    IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(
                                     *(struct HDXGMONITOR__ **)(*(_QWORD *)(*((_QWORD *)v11 + 12) + 96LL) + 112LL),
                                     &v87);
    v25 = IsMonitorAndDriverWCGCapable;
    if ( IsMonitorAndDriverWCGCapable < 0 )
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdError(v24);
      v46 = *(unsigned int *)(*(_QWORD *)&a1[v8 + 16] + 28LL);
      v45[4] = v86;
      v45[3] = v46;
      v45[5] = v25;
      WdLogEvent5_WdError(v45);
      v87 = 0;
    }
    DitheringCaps = MonitorGetDitheringCaps(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 12) + 96LL) + 112LL), &v76);
    v28 = DitheringCaps;
    if ( DitheringCaps < 0 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v48 = *(unsigned int *)(*(_QWORD *)&a1[v8 + 16] + 28LL);
      v47[4] = v86;
      v47[3] = v48;
      v47[5] = v28;
      WdLogEvent5_WdError(v47);
      v76.Value = 0;
    }
    v29 = v80;
    v30 = *(_QWORD *)&a1[v8 + 16];
    v75 = 0;
    v31 = (*(_BYTE *)v30 & 8) == 0;
    v78 = *((_DWORD *)v80 + 32);
    if ( !v31 )
    {
      v32 = *(_DWORD *)(v30 + 204);
      v33 = *(_DWORD *)(v30 + 208);
      if ( (unsigned __int8)BmlDoesTargetModeSupportWireFormat(v80, v32) )
      {
        v75 = v32;
        if ( (unsigned int)(v33 - 31) <= 2 && !*((_BYTE *)DXGGLOBAL::GetGlobal(v30) + 20264) )
        {
          v50 = *(_QWORD *)(v86 + 48);
          v51 = *(_QWORD *)(v50 + 8);
          if ( !v51 )
          {
            v52 = WdLogNewEntry5_WdAssertion(v49);
            WdLogEvent5_WdAssertion(v52);
            v51 = *(_QWORD *)(v50 + 8);
          }
          v53 = *(unsigned int *)(*(_QWORD *)(v51 + 16) + 308LL);
          if ( (v53 & 8) == 0 )
          {
            v54 = WdLogNewEntry5_WdError(v53);
            *(_QWORD *)(v54 + 24) = *(unsigned int *)(*(_QWORD *)&a1[104 * v7 + 16] + 28LL);
            WdLogEvent5_WdError(v54);
            v55 = -1073741811;
LABEL_74:
            auto_rc<DMMVIDPNTARGETMODESET>::reset(&v81, 0LL);
            return v55;
          }
        }
        if ( v33 == 32 && (v18 & 2) == 0 || v33 == 33 && (v18 & 4) == 0 )
        {
          v55 = -1073741637;
          goto LABEL_74;
        }
        goto LABEL_20;
      }
      if ( (*(_BYTE *)(*(_QWORD *)&a1[v8 + 16] + 8LL) & 8) != 0 )
      {
        v71 = WdLogNewEntry5_WdError(v30);
        *(_QWORD *)(v71 + 24) = *(unsigned int *)(*(_QWORD *)&a1[104 * v7 + 16] + 28LL);
        WdLogEvent5_WdError(v71);
        v55 = -1071774902;
        goto LABEL_74;
      }
      v29 = v80;
    }
    if ( !v22 )
      goto LABEL_24;
    if ( (v18 & 1) == 0
      || !*((_BYTE *)DXGGLOBAL::GetGlobal(v30) + 20444)
      || !ModeSupportsHighDepthColorFormat(v29, &v76)
      || (*(_DWORD *)&a1[v8 + 116] & 2) != 0 )
    {
      if ( v87 && ModeSupportsHighDepthColorFormat(v29, &v76) && (*(_DWORD *)&a1[v8 + 116] & 2) == 0 )
      {
        wil_details_FeaturePropertyCache_ReportUsageToService(
          (__int64)&Feature_WCGTestMode__private_propertyCache,
          12077848LL,
          (const struct FEATURE_LOGGED_TRAITS *)&unk_1C00658A8,
          0,
          v74);
        v33 = 30;
        if ( (int)PickWireFormatWithPreference(3LL, &v78, &v76, &v75) < 0 )
        {
          v41 = v75 & 0xFFFFFF03 | 8;
          v33 = 0;
LABEL_28:
          v75 = v41;
          v42 = WdLogNewEntry5_WdWarning(v39, v38, v40);
          WdLogEvent5_WdWarning(v42);
        }
      }
      else
      {
LABEL_24:
        v33 = 0;
        v37 = 1;
        if ( v85 == 2 && (*((_DWORD *)a1 + 1) & 0x8000000) == 0 )
        {
          v70 = *(_DWORD *)(*(_QWORD *)&a1[v8 + 16] + 116LL);
          if ( v70 == 31 || v70 == 35 )
            v37 = 0;
        }
        if ( (int)PickWireFormatWithPreference(v37, &v78, &v76, &v75) < 0 )
        {
          v41 = v75 & 0xFFFFFF03 | 8;
          goto LABEL_28;
        }
      }
LABEL_20:
      v4 = v86;
      goto LABEL_21;
    }
    v57 = 0;
    if ( v85 == 2 && (*((_DWORD *)a1 + 1) & 0x8000000) == 0 )
    {
      v56 = *(_DWORD *)(*(_QWORD *)&a1[v8 + 16] + 116LL);
      if ( v56 != 36 && v56 != 113 )
        v57 = 1;
    }
    v58 = 4 * !v57;
    v59 = *((_QWORD *)v82 + 11);
    v60 = -!v57;
    v61 = *(_QWORD *)(v59 + 104);
    v33 = v60 & 0xC;
    if ( v61 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v61 + 96));
      v62 = *(const struct DMMVIDPNSOURCEMODESET **)(v59 + 104);
    }
    else
    {
      v62 = 0LL;
    }
    v4 = v86;
    v83 = v62;
    v63 = *(_QWORD *)(v86 + 48);
    v64 = *(_QWORD *)(v63 + 8);
    if ( !v64 )
    {
      v65 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v65);
      v64 = *(_QWORD *)(v63 + 8);
    }
    if ( !IsHDRSourceModeAvailableForPinnedSourceMode(*(const struct DXGADAPTER **)(v64 + 16), v62) )
    {
      v33 = 0;
      v58 = 0;
    }
    if ( (int)PickWireFormatWithPreference(v58, &v78, &v76, &v75) < 0 )
    {
      v75 = v75 & 0xFFFFFF03 | 8;
      v33 = 0;
      v69 = WdLogNewEntry5_WdWarning(v67, v66, v68);
      WdLogEvent5_WdWarning(v69);
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v83, 0LL);
LABEL_21:
    v34 = v80;
    *((_DWORD *)v80 + 33) = v75;
    *((_DWORD *)v34 + 34) = v33;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v81, 0LL);
    v35 = *a1;
    v3 = v79 + 1;
    v79 = v3;
    if ( v3 >= v35 )
      return 0LL;
  }
  v73 = (_QWORD *)WdLogNewEntry5_WdError(v10);
  v73[4] = a1;
  v73[3] = v3;
  v73[5] = *(unsigned int *)(*(_QWORD *)&a1[104 * v3 + 16] + 24LL);
  v73[6] = *(unsigned int *)(*(_QWORD *)&a1[104 * v3 + 16] + 28LL);
  v73[7] = v4;
  WdLogEvent5_WdError(v73);
  return 3223192345LL;
}
