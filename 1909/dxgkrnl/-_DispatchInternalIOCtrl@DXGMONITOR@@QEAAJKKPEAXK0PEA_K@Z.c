/*
 * XREFs of ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01746F0
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x1C01577C0 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x1C001FFE4 (-EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z.c)
 *     ?EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z @ 0x1C0020090 (-EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z.c)
 *     ?EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C0020428 (-EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEA.c)
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x1C00209AC (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x1C00218F0 (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x1C00219AC (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C0021AA0 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C0021B50 (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x1C0056460 (-EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z.c)
 *     ?EDIDV1_ObtainMonitorColorCharacteristics@@YAJPEBEPEAU_WmiMonitorColorCharacteristics@@@Z @ 0x1C00564FC (-EDIDV1_ObtainMonitorColorCharacteristics@@YAJPEBEPEAU_WmiMonitorColorCharacteristics@@@Z.c)
 *     ?EDIDV1_ObtainMonitorUserFriendlyName@@YAJPEBEPEAG@Z @ 0x1C0056550 (-EDIDV1_ObtainMonitorUserFriendlyName@@YAJPEBEPEAG@Z.c)
 *     ?DisplayID_GetManufactureDate@@YAJPEAUDisplayIDObj@@PEAEPEAG@Z @ 0x1C0056B78 (-DisplayID_GetManufactureDate@@YAJPEAUDisplayIDObj@@PEAEPEAG@Z.c)
 *     ?DisplayID_GetManufacturerName@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C0056BEC (-DisplayID_GetManufacturerName@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetProductCode@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C0056CB4 (-DisplayID_GetProductCode@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetSerialNumber@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C0056D2C (-DisplayID_GetSerialNumber@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetUserFriendlyName@@YAJPEAUDisplayIDObj@@PEAGEPEAE@Z @ 0x1C0056DB8 (-DisplayID_GetUserFriendlyName@@YAJPEAUDisplayIDObj@@PEAGEPEAE@Z.c)
 *     ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x1C0057414 (-DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z.c)
 *     ?DisplayID_GetSupportedModes@@YAJPEAUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z @ 0x1C00575C4 (-DisplayID_GetSupportedModes@@YAJPEAUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z.c)
 *     ?DisplayID_GetColorDataRaw@@YAJPEAUDisplayIDObj@@PEAUDISPLAY_COLOR_DATA_RAW@@PEAW4DISPLAY_NATIVE_COLOR_DEPTH@@PEA_N@Z @ 0x1C0057E58 (-DisplayID_GetColorDataRaw@@YAJPEAUDisplayIDObj@@PEAUDISPLAY_COLOR_DATA_RAW@@PEAW4DISPLAY_NATIVE.c)
 *     ?DisplayID_GetColorimetryData@@YAJPEAUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C0057FA4 (-DisplayID_GetColorimetryData@@YAJPEAUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_.c)
 *     ?DisplayID_GetNativeLuminance@@YAJPEAUDisplayIDObj@@PEAK11PEAI@Z @ 0x1C0058054 (-DisplayID_GetNativeLuminance@@YAJPEAUDisplayIDObj@@PEAK11PEAI@Z.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C014EC54 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0176254 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     MonitorLogBadEDID @ 0x1C02C9950 (MonitorLogBadEDID.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@DXGMONITOR@@QEAAJXZ @ 0x1C02CDE90 (-SetLuminanceValuesWithBrightnessCompensation@DXGMONITOR@@QEAAJXZ.c)
 *     ?TriggerMonitorColorimetryChangedWnf@DXGMONITOR@@QEAAJXZ @ 0x1C02CE084 (-TriggerMonitorColorimetryChangedWnf@DXGMONITOR@@QEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_DispatchInternalIOCtrl(
        DXGMONITOR *this,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4,
        unsigned int a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7)
{
  __int64 v8; // rsi
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  __int16 v20; // si
  size_t v21; // r8
  unsigned __int64 v22; // r14
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rax
  int v31; // eax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdi
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rax
  int ProductCode; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rcx
  int SerialNumber; // eax
  int ManufacturerName; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r15
  int ManufactureDate; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r15
  __int64 v61; // rax
  int UserFriendlyName; // eax
  __int64 v63; // rdx
  __int64 v64; // rdi
  unsigned __int64 *v65; // rbx
  unsigned __int64 *v66; // rax
  __int128 v67; // xmm1
  __int64 v68; // rax
  unsigned int v69; // edx
  int v70; // ecx
  int SupportedMonitorFrequencyRanges; // eax
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // rcx
  unsigned __int64 v75; // r15
  __int64 v76; // r9
  int v77; // eax
  __int64 v78; // rax
  int MonitorModes; // eax
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // rcx
  unsigned __int64 v83; // r14
  __int64 v84; // rax
  int SupportedModes; // eax
  __int64 v86; // rax
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rdi
  __int64 v92; // rcx
  __int64 v93; // r12
  unsigned int v94; // r15d
  __int64 v95; // r13
  __int64 v96; // rax
  char *v97; // r14
  char *v98; // r14
  unsigned int v99; // edi
  unsigned int i; // r8d
  __int64 v101; // rcx
  __int64 v102; // rdx
  _QWORD *v103; // r12
  size_t v104; // r8
  struct _WmiMonitorColorCharacteristics *v105; // r14
  __int64 v106; // rcx
  int v107; // eax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // rax
  int ColorDataRaw; // eax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // rax
  int v117; // esi
  int v118; // esi
  int v119; // esi
  __int64 v120; // rax
  __int64 v121; // r9
  DXGMONITOR *v122; // rcx
  __int64 v123; // rcx
  int v124; // eax
  _BYTE *v125; // rbx
  __int64 v126; // rcx
  int v127; // eax
  _WmiMonitorAnalogVideoInputParams *v128; // rbx
  _QWORD *v129; // r12
  size_t v130; // r8
  unsigned __int64 v131; // r14
  __int64 v132; // rcx
  int v133; // eax
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  unsigned int v141; // edx
  char v142; // al
  __int64 v143; // rax
  unsigned int v144; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v145; // [rsp+34h] [rbp-3Ch] BYREF
  unsigned int v146; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v147; // [rsp+3Ch] [rbp-34h] BYREF
  unsigned int v148; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v149[5]; // [rsp+48h] [rbp-28h] BYREF
  _WmiMonitorAnalogVideoInputParams v150; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v151; // [rsp+B8h] [rbp+48h] BYREF

  v8 = (unsigned int)a2;
  LODWORD(v11) = -1073741637;
  v12 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v12 + 24) = v8;
  *(_QWORD *)(v12 + 32) = this;
  if ( (unsigned int)v8 > 0x23241F )
  {
    v117 = v8 - 2303011;
    if ( !v117 )
    {
      v129 = (_QWORD *)((char *)this + 168);
      if ( *((_QWORD *)this + 18) || *v129 )
      {
        if ( a3 >= 0x10 && a5 >= 0x10 )
        {
          v130 = *a4;
          if ( *a4 < 0xB )
          {
            LODWORD(v11) = -2147483643;
          }
          else
          {
            v131 = a4[1];
            memset((void *)v131, 0, v130);
            v132 = *((_QWORD *)this + 18);
            if ( v132 )
            {
              v133 = EDIDV1_ObtainMonitorBasicDisplayParams(
                       (unsigned __int8 *)(v132 + 24),
                       (struct _WmiMonitorBasicDisplayParams *)v131);
              v11 = v133;
              if ( v133 < 0 )
              {
                v137 = WdLogNewEntry5_WdWarning(v135, v134, v136);
                *(_QWORD *)(v137 + 24) = *((_QWORD *)this + 18) + 24LL;
                *(_QWORD *)(v137 + 32) = v11;
                WdLogEvent5_WdWarning(v137);
                MonitorLogBadEDID(*((_QWORD *)this + 18) + 24LL, (unsigned int)v11);
              }
            }
            else
            {
              v146 = 0;
              memset(v149, 0, 20);
              v145 = 0;
              v144 = 0;
              *(_DWORD *)&v150.SignalLevelStandard = 0;
              LOBYTE(v151) = 0;
              LODWORD(v11) = DisplayID_GetPhysicalSize((DXGMONITOR *)((char *)this + 168), &v147, &v148);
              if ( (int)v11 < 0
                || (LODWORD(v11) = DisplayID_GetNativeLuminance(
                                     (DXGMONITOR *)((char *)this + 168),
                                     &v146,
                                     &v145,
                                     &v144,
                                     (unsigned int *)&v150.SignalLevelStandard),
                    (int)v11 < 0)
                || (LODWORD(v11) = DisplayID_GetColorimetryData(
                                     (DXGMONITOR *)((char *)this + 168),
                                     (struct DISPLAYID_COLORIMETRY_DATA *)&v151,
                                     (struct DISPLAY_COLOR_DEPTHS *)v149),
                    (int)v11 < 0) )
              {
                v143 = WdLogNewEntry5_WdError(v139, v138, v140);
                *(_QWORD *)(v143 + 24) = *v129;
                *(_QWORD *)(v143 + 32) = (int)v11;
                WdLogEvent5_WdError(v143);
              }
              else
              {
                *(_BYTE *)v131 = 1;
                *(_BYTE *)(v131 + 1) = v147 / 0x64;
                v141 = v148 / 0x64;
                *(_BYTE *)(v131 + 3) = v150.SignalLevelStandard - 100;
                v142 = v151;
                *(_BYTE *)(v131 + 2) = v141;
                *(_BYTE *)(v131 + 8) = v142 & 1;
                *(_WORD *)(v131 + 9) = 1;
                *(_DWORD *)(v131 + 4) = 16843009;
              }
            }
          }
          *a6 = 11LL;
          goto LABEL_148;
        }
        goto LABEL_149;
      }
      goto LABEL_59;
    }
    v118 = v117 - 4;
    if ( v118 )
    {
      v119 = v118 - 4;
      if ( v119 )
      {
        if ( v119 != 168 )
          return (unsigned int)v11;
        if ( a3 >= 0x20 )
        {
          if ( *(_DWORD *)a4 != 3 )
          {
            v120 = WdLogNewEntry5_WdAssertion(v14, v13);
            WdLogEvent5_WdAssertion(v120);
          }
          *((_DWORD *)this + 186) = *((_DWORD *)a4 + 1) / 0x3E8u;
          LODWORD(v11) = DXGMONITOR::SetLuminanceValuesWithBrightnessCompensation(this);
          if ( (int)v11 >= 0 && *((_DWORD *)this + 187) == 12 )
          {
            DXGMONITOR::_SendAdjustedHDRParamsToDriver(this, 1, 0, v121);
            DXGMONITOR::TriggerMonitorColorimetryChangedWnf(v122);
          }
          return (unsigned int)v11;
        }
        goto LABEL_149;
      }
      v123 = *((_QWORD *)this + 18);
      if ( v123 )
      {
        if ( a3 < 0x10 || a5 < 0x10 )
          goto LABEL_149;
        LOBYTE(v151) = 0;
        v124 = EDIDV1_ObtainMonitorDigitalVideoInputParams(
                 (unsigned __int8 *)(v123 + 24),
                 (struct _WmiMonitorDigitalVideoInputParams *)&v151);
        v11 = v124;
        if ( v124 >= 0 )
        {
          if ( *a4 )
          {
            v125 = (_BYTE *)a4[1];
            memset(v125, 0, *a4);
            *v125 = v151;
          }
          else
          {
            LODWORD(v11) = -2147483643;
          }
          *a6 = 1LL;
          goto LABEL_148;
        }
LABEL_127:
        if ( (_DWORD)v11 == -1073741275 )
          return (unsigned int)v11;
        goto LABEL_15;
      }
    }
    else
    {
      v126 = *((_QWORD *)this + 18);
      if ( v126 )
      {
        if ( a3 < 0x10 || a5 < 0x10 )
          goto LABEL_149;
        *(_DWORD *)&v150.SignalLevelStandard = 0;
        *(_WORD *)&v150.SyncOnGreenVideoSupported = 0;
        v127 = EDIDV1_ObtainMonitorAnalogVideoInputParams((unsigned __int8 *)(v126 + 24), &v150);
        v11 = v127;
        if ( v127 >= 0 )
        {
          if ( *a4 < 6 )
          {
            LODWORD(v11) = -2147483643;
          }
          else
          {
            v128 = (_WmiMonitorAnalogVideoInputParams *)a4[1];
            memset(v128, 0, *a4);
            *v128 = v150;
          }
          *a6 = 6LL;
          goto LABEL_148;
        }
        goto LABEL_127;
      }
    }
    LODWORD(v11) = *((_QWORD *)this + 21) != 0LL ? -1073741275 : -1071841279;
    return (unsigned int)v11;
  }
  if ( (_DWORD)v8 == 2303007 )
  {
    v103 = (_QWORD *)((char *)this + 168);
    if ( *((_QWORD *)this + 18) || *v103 )
    {
      if ( a3 >= 0x10 && a5 >= 0x10 )
      {
        v104 = *a4;
        if ( *a4 < 0x10 )
        {
          LODWORD(v11) = -2147483643;
        }
        else
        {
          v105 = (struct _WmiMonitorColorCharacteristics *)a4[1];
          memset(v105, 0, v104);
          v106 = *((_QWORD *)this + 18);
          if ( v106 )
          {
            v107 = EDIDV1_ObtainMonitorColorCharacteristics((unsigned __int8 *)(v106 + 24), v105);
            v11 = v107;
            if ( v107 < 0 )
            {
              v111 = WdLogNewEntry5_WdWarning(v109, v108, v110);
              *(_QWORD *)(v111 + 24) = *((_QWORD *)this + 18) + 24LL;
              *(_QWORD *)(v111 + 32) = v11;
              WdLogEvent5_WdWarning(v111);
              MonitorLogBadEDID(*((_QWORD *)this + 18) + 24LL, (unsigned int)v11);
            }
          }
          else
          {
            memset(v149, 0, 0x20uLL);
            ColorDataRaw = DisplayID_GetColorDataRaw(
                             (DXGMONITOR *)((char *)this + 168),
                             (struct DISPLAY_COLOR_DATA_RAW *)v149,
                             (enum DISPLAY_NATIVE_COLOR_DEPTH *)&v150,
                             (bool *)&v151);
            v11 = ColorDataRaw;
            if ( ColorDataRaw >= 0 )
            {
              v105->Red.X = LOWORD(v149[0]) >> 2;
              v105->Red.Y = WORD2(v149[0]) >> 2;
              v105->Green.X = LOWORD(v149[1]) >> 2;
              v105->Green.Y = WORD2(v149[1]) >> 2;
              v105->Blue.X = LOWORD(v149[2]) >> 2;
              v105->Blue.Y = WORD2(v149[2]) >> 2;
              v105->DefaultWhite.X = LOWORD(v149[3]) >> 2;
              v105->DefaultWhite.Y = WORD2(v149[3]) >> 2;
            }
            else
            {
              v116 = WdLogNewEntry5_WdError(v114, v113, v115);
              *(_QWORD *)(v116 + 24) = *v103;
              *(_QWORD *)(v116 + 32) = v11;
              WdLogEvent5_WdError(v116);
            }
          }
        }
        *a6 = 16LL;
        goto LABEL_148;
      }
      goto LABEL_149;
    }
LABEL_59:
    LODWORD(v11) = -1071841279;
    return (unsigned int)v11;
  }
  v16 = v8 - 2302979;
  if ( !v16 )
  {
    if ( !a4 )
    {
      v86 = WdLogNewEntry5_WdError(v14, v13, v15);
      WdLogEvent5_WdError(v86);
      return 3221225485LL;
    }
    if ( a3 < 0x10 )
    {
      v88 = WdLogNewEntry5_WdError(v14, v13, v15);
      WdLogEvent5_WdError(v88);
      return 3221225507LL;
    }
    v89 = *((unsigned int *)this + 32);
    if ( !(_DWORD)v89 )
    {
      v90 = WdLogNewEntry5_WdWarning(v14, v89, v15);
      *(_QWORD *)(v90 + 24) = this;
      WdLogEvent5_WdWarning(v90);
      return 3223126017LL;
    }
    v91 = *(_DWORD *)a4 >> 7;
    v92 = (unsigned int)(*((_DWORD *)a4 + 1) + *(_DWORD *)a4);
    v93 = *(_DWORD *)a4 & 0x7F;
    v94 = (unsigned int)(v92 - 1) >> 7;
    v95 = (*((_BYTE *)a4 + 4) + *(_BYTE *)a4 - 1) & 0x7F;
    if ( v94 >= (unsigned int)v89 )
    {
      v96 = WdLogNewEntry5_WdWarning(v92, v89, v15);
      *(_QWORD *)(v96 + 24) = *(unsigned int *)a4;
      *(_QWORD *)(v96 + 32) = *((unsigned int *)a4 + 1);
      WdLogEvent5_WdWarning(v96);
      return 3223126024LL;
    }
    v97 = (char *)a4[1];
    memmove(v97, (const void *)(*(_QWORD *)(*((_QWORD *)this + 17) + 8 * v91) + v93 + 24), 128 - v93);
    v98 = &v97[128 - v93];
    v99 = v91 + 1;
    for ( i = v99 + 1; i < v94; ++i )
    {
      v101 = v99;
      v99 = i;
      v102 = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v101);
      *(_OWORD *)v98 = *(_OWORD *)(v102 + 24);
      *((_OWORD *)v98 + 1) = *(_OWORD *)(v102 + 40);
      *((_OWORD *)v98 + 2) = *(_OWORD *)(v102 + 56);
      *((_OWORD *)v98 + 3) = *(_OWORD *)(v102 + 72);
      *((_OWORD *)v98 + 4) = *(_OWORD *)(v102 + 88);
      *((_OWORD *)v98 + 5) = *(_OWORD *)(v102 + 104);
      *((_OWORD *)v98 + 6) = *(_OWORD *)(v102 + 120);
      *((_OWORD *)v98 + 7) = *(_OWORD *)(v102 + 136);
      v98 += 128;
    }
    if ( v99 < v94 )
      memmove(v98, (const void *)(*(_QWORD *)(*((_QWORD *)this + 17) + 8LL * v99) + 24LL), v95 + 1);
    goto LABEL_90;
  }
  v17 = v16 - 12;
  if ( !v17 )
  {
    v78 = *((_QWORD *)this + 18);
    if ( !v78 && !*((_QWORD *)this + 21) )
      goto LABEL_59;
    if ( a3 < 0x10 || a5 < 0x10 )
      goto LABEL_149;
    v151 = 0;
    if ( v78 )
      MonitorModes = EDID_V1_GetMonitorModes(
                       *(unsigned int *)(v78 + 8),
                       *(_DWORD *)(v78 + 16),
                       (unsigned __int8 *)(v78 + 24),
                       (unsigned __int16 *)&v151,
                       0LL,
                       0LL);
    else
      MonitorModes = DisplayID_GetSupportedModes((DXGMONITOR *)((char *)this + 168), &v151, 0LL, 0LL);
    v82 = 0x80000000LL;
    LODWORD(v11) = MonitorModes;
    if ( (int)(MonitorModes + 0x80000000) < 0 || MonitorModes == -1073741789 )
    {
      if ( !v151 )
        goto LABEL_59;
      v75 = 56LL * (v151 - 1) + 60;
      if ( *a4 < v75 )
        goto LABEL_55;
      v83 = a4[1];
      v84 = *((_QWORD *)this + 18);
      if ( v84 )
        SupportedModes = EDID_V1_GetMonitorModes(
                           *(unsigned int *)(v84 + 8),
                           *(_DWORD *)(v84 + 16),
                           (unsigned __int8 *)(v84 + 24),
                           (unsigned __int16 *)&v151,
                           (struct _VideoModeDescriptor *)(v83 + 4),
                           &v150);
      else
        SupportedModes = DisplayID_GetSupportedModes(
                           (DXGMONITOR *)((char *)this + 168),
                           &v151,
                           (unsigned int *)&v150.SignalLevelStandard,
                           (struct _VideoModeDescriptor *)(v83 + 4));
      LODWORD(v11) = SupportedModes;
      if ( SupportedModes >= 0 )
      {
        *(_WORD *)v83 = v151;
        *(_WORD *)(v83 + 2) = *(_WORD *)&v150.SignalLevelStandard;
        goto LABEL_56;
      }
    }
    v48 = WdLogNewEntry5_WdError(v82, v80, v81);
    v49 = (int)v11;
    goto LABEL_68;
  }
  v18 = v17 - 4;
  if ( !v18 )
  {
    v68 = *((_QWORD *)this + 18);
    if ( !v68 )
      goto LABEL_59;
    if ( a3 < 0x10 || a5 < 0x10 )
      goto LABEL_149;
    v69 = *(_DWORD *)(v68 + 16);
    v70 = *(_DWORD *)(v68 + 8);
    LOWORD(v151) = 0;
    SupportedMonitorFrequencyRanges = EDID_V1_GetSupportedMonitorFrequencyRanges(
                                        v70,
                                        v69,
                                        (unsigned __int8 *)(v68 + 24),
                                        (__int64)&v151,
                                        0LL);
    v11 = SupportedMonitorFrequencyRanges;
    if ( SupportedMonitorFrequencyRanges == -1073741275 )
      goto LABEL_59;
    v74 = 0x80000000LL;
    if ( (int)(SupportedMonitorFrequencyRanges + 0x80000000) >= 0 && SupportedMonitorFrequencyRanges != -1073741789 )
    {
LABEL_51:
      v48 = WdLogNewEntry5_WdError(v74, v72, v73);
      *(_QWORD *)(v48 + 24) = v11;
LABEL_69:
      WdLogEvent5_WdError(v48);
      return (unsigned int)v11;
    }
    v75 = 52LL * (unsigned __int16)v151 + 4;
    if ( *a4 >= v75 )
    {
      v76 = a4[1];
      *(_WORD *)v76 = v151;
      v77 = EDID_V1_GetSupportedMonitorFrequencyRanges(
              *(_DWORD *)(*((_QWORD *)this + 18) + 8LL),
              *(_DWORD *)(*((_QWORD *)this + 18) + 16LL),
              (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
              v76,
              (struct _FrequencyRangeDescriptor *)(v76 + 4));
      v11 = v77;
      if ( v77 < 0 )
        goto LABEL_51;
LABEL_56:
      *a6 = v75;
      goto LABEL_148;
    }
LABEL_55:
    LODWORD(v11) = -2147483643;
    goto LABEL_56;
  }
  v19 = v18 - 4;
  if ( !v19 )
  {
    if ( !*((_QWORD *)this + 18) )
      goto LABEL_59;
    if ( a3 < 0x88 || a5 < 0x88 )
      goto LABEL_149;
    v63 = *(unsigned __int8 *)a4;
    if ( (unsigned int)v63 >= *((_DWORD *)this + 32) )
      goto LABEL_59;
    v64 = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v63);
    if ( !v64 )
      goto LABEL_59;
    v65 = a6;
    *(_BYTE *)a6 = v63;
    *((_BYTE *)v65 + 1) = *(_BYTE *)(v64 + 12);
    ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v64 + 8), (char *)v65 + 132);
    v66 = a7;
    *(_OWORD *)((char *)v65 + 2) = *(_OWORD *)(v64 + 24);
    v67 = *(_OWORD *)(v64 + 40);
    *v66 = 136LL;
    *(_OWORD *)((char *)v65 + 18) = v67;
    *(_OWORD *)((char *)v65 + 34) = *(_OWORD *)(v64 + 56);
    *(_OWORD *)((char *)v65 + 50) = *(_OWORD *)(v64 + 72);
    *(_OWORD *)((char *)v65 + 66) = *(_OWORD *)(v64 + 88);
    *(_OWORD *)((char *)v65 + 82) = *(_OWORD *)(v64 + 104);
    *(_OWORD *)((char *)v65 + 98) = *(_OWORD *)(v64 + 120);
    *(_OWORD *)((char *)v65 + 114) = *(_OWORD *)(v64 + 136);
LABEL_90:
    LODWORD(v11) = 0;
    return (unsigned int)v11;
  }
  if ( v19 == 4 )
  {
    v20 = 0;
    if ( *((_QWORD *)this + 18) || *((_QWORD *)this + 21) )
    {
      if ( a3 >= 0x10 && a5 >= 0x10 )
      {
        v21 = *a4;
        if ( *a4 < 0x82 )
        {
          LODWORD(v11) = -2147483643;
        }
        else
        {
          v22 = a4[1];
          memset((void *)v22, 0, v21);
          v23 = *((_QWORD *)this + 18);
          if ( v23 )
          {
            v24 = EDIDV1_ObtainMonitorProductCodeID((unsigned __int8 *)(v23 + 24), (unsigned __int16 *)v22);
            v11 = v24;
            if ( v24 < 0 )
            {
LABEL_15:
              v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
              *(_QWORD *)(v28 + 24) = *((_QWORD *)this + 18) + 24LL;
              *(_QWORD *)(v28 + 32) = v11;
              WdLogEvent5_WdWarning(v28);
              MonitorLogBadEDID(*((_QWORD *)this + 18) + 24LL, (unsigned int)v11);
              return (unsigned int)v11;
            }
            v29 = EDIDV1_ObtainMonitorSerialNumber(
                    (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                    (unsigned __int16 *)(v22 + 32));
            v11 = v29;
            if ( v29 == -1073741275 )
            {
              v30 = WdLogNewEntry5_WdDmmEvent(v26, v25);
              *(_QWORD *)(v30 + 24) = *((_QWORD *)this + 18) + 24LL;
              WdLogEvent5_WdDmmEvent(v30);
            }
            else if ( v29 < 0 )
            {
              goto LABEL_15;
            }
            v31 = EDIDV1_ObtainMonitorManufacturerName(
                    (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                    (unsigned __int16 *)(v22 + 64));
            v11 = v31;
            if ( v31 < 0 )
              goto LABEL_15;
            v32 = EDIDV1_ObtainMonitorManufactureDate(
                    (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                    (unsigned __int8 *)(v22 + 96),
                    (unsigned __int16 *)(v22 + 98));
            v36 = v32;
            if ( v32 < 0 )
            {
              v37 = WdLogNewEntry5_WdWarning(v34, v33, v35);
              *(_QWORD *)(v37 + 24) = *((_QWORD *)this + 18) + 24LL;
              *(_QWORD *)(v37 + 32) = v36;
              WdLogEvent5_WdWarning(v37);
              MonitorLogBadEDID(*((_QWORD *)this + 18) + 24LL, (unsigned int)v36);
            }
            v38 = EDIDV1_ObtainMonitorUserFriendlyName(
                    (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                    (unsigned __int16 *)(v22 + 102));
            v11 = v38;
            if ( v38 == -1073741275 )
            {
              v42 = WdLogNewEntry5_WdDmmEvent(v40, v39);
              *(_QWORD *)(v42 + 24) = *((_QWORD *)this + 18) + 24LL;
              WdLogEvent5_WdDmmEvent(v42);
              LODWORD(v11) = 0;
            }
            else
            {
              if ( v38 < 0 )
              {
                v43 = WdLogNewEntry5_WdWarning(v40, v39, v41);
                *(_QWORD *)(v43 + 24) = *((_QWORD *)this + 18) + 24LL;
                *(_QWORD *)(v43 + 32) = v11;
                WdLogEvent5_WdWarning(v43);
                MonitorLogBadEDID(*((_QWORD *)this + 18) + 24LL, (unsigned int)v11);
                *(_WORD *)(v22 + 100) = 0;
                return (unsigned int)v11;
              }
              v20 = 13;
            }
            *(_WORD *)(v22 + 100) = v20;
            goto LABEL_38;
          }
          ProductCode = DisplayID_GetProductCode((DXGMONITOR *)((char *)this + 168), (unsigned __int16 *)v22);
          v11 = ProductCode;
          if ( ProductCode < 0
            || (SerialNumber = DisplayID_GetSerialNumber(
                                 (DXGMONITOR *)((char *)this + 168),
                                 (unsigned __int16 *)(v22 + 32)),
                v11 = SerialNumber,
                SerialNumber < 0) )
          {
            v48 = WdLogNewEntry5_WdError(v46, v45, v47);
            v49 = *((_QWORD *)this + 20);
            *(_QWORD *)(v48 + 32) = v11;
LABEL_68:
            *(_QWORD *)(v48 + 24) = v49;
            goto LABEL_69;
          }
          ManufacturerName = DisplayID_GetManufacturerName(
                               (DXGMONITOR *)((char *)this + 168),
                               (unsigned __int16 *)(v22 + 64));
          v55 = ManufacturerName;
          if ( ManufacturerName < 0 )
            goto LABEL_32;
          ManufactureDate = DisplayID_GetManufactureDate(
                              (DXGMONITOR *)((char *)this + 168),
                              (unsigned __int8 *)(v22 + 96),
                              (unsigned __int16 *)(v22 + 98));
          v60 = ManufactureDate;
          if ( ManufactureDate < 0 )
          {
            v61 = WdLogNewEntry5_WdError(v58, v57, v59);
            *(_QWORD *)(v61 + 24) = *((_QWORD *)this + 20);
            *(_QWORD *)(v61 + 32) = v60;
            WdLogEvent5_WdError(v61);
          }
          LOBYTE(v151) = 0;
          UserFriendlyName = DisplayID_GetUserFriendlyName(
                               (DXGMONITOR *)((char *)this + 168),
                               (unsigned __int16 *)(v22 + 102),
                               v59,
                               (unsigned __int8 *)&v151);
          v53 = (unsigned __int8)v151;
          *(_WORD *)(v22 + 100) = (unsigned __int8)v151;
          v55 = UserFriendlyName;
          if ( UserFriendlyName < 0 )
          {
LABEL_32:
            v48 = WdLogNewEntry5_WdError(v53, v52, v54);
            v49 = *((_QWORD *)this + 20);
            *(_QWORD *)(v48 + 32) = v55;
            goto LABEL_68;
          }
        }
LABEL_38:
        *a6 = 130LL;
LABEL_148:
        *a7 = 16LL;
        return (unsigned int)v11;
      }
LABEL_149:
      LODWORD(v11) = -1073741789;
      return (unsigned int)v11;
    }
    goto LABEL_59;
  }
  return (unsigned int)v11;
}
