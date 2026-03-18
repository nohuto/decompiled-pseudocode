/*
 * XREFs of ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C013E8B4
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x1C013E690 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x1C001BB9C (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 *     ?EDIDV1_ObtainMonitorUserFriendlyName@@YAJPEBEPEAG@Z @ 0x1C001CC5C (-EDIDV1_ObtainMonitorUserFriendlyName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x1C001CD00 (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C001CDBC (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x1C001CE5C (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C001CF50 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x1C004F30C (-EDIDV1_ObtainMonitorAnalogVideoInputParams@@YAJPEBEPEAU_WmiMonitorAnalogVideoInputParams@@@Z.c)
 *     ?EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x1C004F360 (-EDIDV1_ObtainMonitorBasicDisplayParams@@YAJPEBEPEAU_WmiMonitorBasicDisplayParams@@@Z.c)
 *     ?EDIDV1_ObtainMonitorColorCharacteristics@@YAJPEBEPEAU_WmiMonitorColorCharacteristics@@@Z @ 0x1C004F3FC (-EDIDV1_ObtainMonitorColorCharacteristics@@YAJPEBEPEAU_WmiMonitorColorCharacteristics@@@Z.c)
 *     ?EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z @ 0x1C004F450 (-EDIDV1_ObtainMonitorDigitalVideoInputParams@@YAJPEBEPEAU_WmiMonitorDigitalVideoInputParams@@@Z.c)
 *     ?EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C004FF08 (-EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEA.c)
 *     ?DisplayID_GetManufactureDate@@YAJPEAUDisplayIDObj@@PEAEPEAG@Z @ 0x1C0050164 (-DisplayID_GetManufactureDate@@YAJPEAUDisplayIDObj@@PEAEPEAG@Z.c)
 *     ?DisplayID_GetManufacturerName@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C00501D8 (-DisplayID_GetManufacturerName@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetProductCode@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C00502A0 (-DisplayID_GetProductCode@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetSerialNumber@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C0050318 (-DisplayID_GetSerialNumber@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetUserFriendlyName@@YAJPEAUDisplayIDObj@@PEAGEPEAE@Z @ 0x1C00503A4 (-DisplayID_GetUserFriendlyName@@YAJPEAUDisplayIDObj@@PEAGEPEAE@Z.c)
 *     ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x1C0050A84 (-DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z.c)
 *     ?DisplayID_GetSupportedModes@@YAJPEAUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z @ 0x1C0050C34 (-DisplayID_GetSupportedModes@@YAJPEAUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z.c)
 *     ?DisplayID_GetColorDataRaw@@YAJPEAUDisplayIDObj@@PEAUDISPLAY_COLOR_DATA_RAW@@PEAW4DISPLAY_NATIVE_COLOR_DEPTH@@PEA_N@Z @ 0x1C00514C8 (-DisplayID_GetColorDataRaw@@YAJPEAUDisplayIDObj@@PEAUDISPLAY_COLOR_DATA_RAW@@PEAW4DISPLAY_NATIVE.c)
 *     ?DisplayID_GetColorimetryData@@YAJPEAUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C0051614 (-DisplayID_GetColorimetryData@@YAJPEAUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_.c)
 *     ?DisplayID_GetNativeLuminance@@YAJPEAUDisplayIDObj@@PEAK11PEAI@Z @ 0x1C00516C4 (-DisplayID_GetNativeLuminance@@YAJPEAUDisplayIDObj@@PEAK11PEAI@Z.c)
 *     MonitorLogBadEDID @ 0x1C0290DF8 (MonitorLogBadEDID.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@DXGMONITOR@@QEAAJXZ @ 0x1C0297170 (-SetLuminanceValuesWithBrightnessCompensation@DXGMONITOR@@QEAAJXZ.c)
 *     ?TriggerMonitorColorimetryChangedWnf@DXGMONITOR@@QEAAJXZ @ 0x1C0297364 (-TriggerMonitorColorimetryChangedWnf@DXGMONITOR@@QEAAJXZ.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@@Z @ 0x1C0299F90 (-ConvertMonitorCapablitiesOrigin@@YAJW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@PEAW4__WMI_MONITOR_.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C029DB20 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 */

__int64 __fastcall DXGMONITOR::_DispatchInternalIOCtrl(
        DXGMONITOR *this,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned int a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7)
{
  __int64 v8; // rsi
  unsigned int v9; // r15d
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  __int16 v19; // si
  size_t v20; // r8
  unsigned __int64 v21; // r14
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // r9
  int v29; // eax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdi
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v41; // rax
  int MonitorModes; // eax
  __int64 v43; // rcx
  unsigned __int64 v44; // r15
  unsigned __int64 v45; // r14
  __int64 v46; // rax
  int SupportedModes; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  int ProductCode; // eax
  __int64 v53; // rcx
  int SerialNumber; // eax
  int ManufacturerName; // eax
  __int64 v56; // rcx
  __int64 v57; // r15
  int ManufactureDate; // eax
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r15
  __int64 v62; // rax
  int UserFriendlyName; // eax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rdi
  unsigned __int64 *v68; // rbx
  unsigned __int64 *v69; // rax
  __int128 v70; // xmm1
  __int64 v71; // rax
  unsigned int v72; // edx
  int v73; // ecx
  int SupportedMonitorFrequencyRanges; // eax
  __int64 v75; // rcx
  __int64 v76; // r9
  int v77; // eax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rdi
  __int64 v83; // rcx
  __int64 v84; // r12
  unsigned int v85; // r15d
  __int64 v86; // r13
  __int64 v87; // rax
  char *v88; // r14
  char *v89; // r14
  unsigned int v90; // edi
  unsigned int i; // r8d
  __int64 v92; // rcx
  __int64 v93; // rdx
  _QWORD *v94; // r12
  size_t v95; // r8
  struct _WmiMonitorColorCharacteristics *v96; // r14
  __int64 v97; // rcx
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // rax
  int ColorDataRaw; // eax
  __int64 v104; // rcx
  __int64 v105; // rax
  int v106; // esi
  int v107; // esi
  int v108; // esi
  __int64 v109; // rax
  bool v110; // zf
  DXGMONITOR *v111; // rcx
  __int64 v112; // rcx
  int v113; // eax
  _BYTE *v114; // rbx
  __int64 v115; // rcx
  int v116; // eax
  _WmiMonitorAnalogVideoInputParams *v117; // rbx
  __int64 v118; // rax
  _QWORD *v119; // r12
  size_t v120; // r8
  unsigned __int64 v121; // r14
  __int64 v122; // rcx
  int v123; // eax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // rax
  __int64 v128; // rcx
  unsigned int v129; // edx
  char v130; // al
  __int64 v131; // rax
  unsigned int v132; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v133; // [rsp+34h] [rbp-3Ch] BYREF
  unsigned int v134; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v135; // [rsp+3Ch] [rbp-34h] BYREF
  unsigned int v136; // [rsp+40h] [rbp-30h] BYREF
  _WORD v137[20]; // [rsp+48h] [rbp-28h] BYREF
  _WmiMonitorAnalogVideoInputParams v138; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v139; // [rsp+B8h] [rbp+48h] BYREF

  v8 = (unsigned int)a2;
  v9 = a3;
  LODWORD(v11) = -1073741637;
  v12 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v12 + 24) = v8;
  *(_QWORD *)(v12 + 32) = this;
  if ( (unsigned int)v8 > 0x23241F )
  {
    v106 = v8 - 2303011;
    if ( !v106 )
    {
      v119 = (_QWORD *)((char *)this + 168);
      if ( *((_QWORD *)this + 18) || *v119 )
      {
        if ( v9 >= 0x10 && a5 >= 0x10 )
        {
          v120 = *a4;
          if ( *a4 < 0xB )
          {
            LODWORD(v11) = -2147483643;
          }
          else
          {
            v121 = a4[1];
            memset((void *)v121, 0, v120);
            v122 = *((_QWORD *)this + 18);
            if ( v122 )
            {
              v123 = EDIDV1_ObtainMonitorBasicDisplayParams(
                       (unsigned __int8 *)(v122 + 24),
                       (struct _WmiMonitorBasicDisplayParams *)v121);
              v11 = v123;
              if ( v123 < 0 )
              {
                v127 = WdLogNewEntry5_WdWarning(v125, v124, v126);
                *(_QWORD *)(v127 + 24) = *((_QWORD *)this + 18) + 24LL;
                *(_QWORD *)(v127 + 32) = v11;
                WdLogEvent5_WdWarning(v127);
                MonitorLogBadEDID(*((_QWORD *)this + 18) + 24LL, (unsigned int)v11);
              }
            }
            else
            {
              v134 = 0;
              LOBYTE(v139) = 0;
              v133 = 0;
              v132 = 0;
              *(_DWORD *)&v138.SignalLevelStandard = 0;
              LODWORD(v11) = DisplayID_GetPhysicalSize((DXGMONITOR *)((char *)this + 168), &v135, &v136);
              if ( (int)v11 < 0
                || (LODWORD(v11) = DisplayID_GetNativeLuminance(
                                     (DXGMONITOR *)((char *)this + 168),
                                     &v134,
                                     &v133,
                                     &v132,
                                     (unsigned int *)&v138.SignalLevelStandard),
                    (int)v11 < 0)
                || (LODWORD(v11) = DisplayID_GetColorimetryData(
                                     (DXGMONITOR *)((char *)this + 168),
                                     (struct DISPLAYID_COLORIMETRY_DATA *)&v139,
                                     (struct DISPLAY_COLOR_DEPTHS *)v137),
                    (int)v11 < 0) )
              {
                v131 = WdLogNewEntry5_WdError(v128);
                *(_QWORD *)(v131 + 24) = *v119;
                *(_QWORD *)(v131 + 32) = (int)v11;
                WdLogEvent5_WdError(v131);
              }
              else
              {
                *(_BYTE *)v121 = 1;
                *(_BYTE *)(v121 + 1) = v135 / 0x64;
                v129 = v136 / 0x64;
                *(_BYTE *)(v121 + 3) = v138.SignalLevelStandard - 100;
                v130 = v139;
                *(_BYTE *)(v121 + 2) = v129;
                *(_BYTE *)(v121 + 8) = v130 & 1;
                *(_WORD *)(v121 + 9) = 1;
                *(_DWORD *)(v121 + 4) = 16843009;
              }
            }
          }
          *a6 = 11LL;
          goto LABEL_24;
        }
        goto LABEL_149;
      }
      goto LABEL_71;
    }
    v107 = v106 - 4;
    if ( v107 )
    {
      v108 = v107 - 4;
      if ( v108 )
      {
        if ( v108 != 168 )
          return (unsigned int)v11;
        if ( v9 >= 0x20 )
        {
          if ( *(_DWORD *)a4 != 3 )
          {
            v109 = WdLogNewEntry5_WdAssertion(v13);
            WdLogEvent5_WdAssertion(v109);
          }
          v110 = *((_DWORD *)this + 186) == 12;
          *((_DWORD *)this + 185) = *((_DWORD *)a4 + 1) / 0x3E8u;
          if ( v110 )
          {
            LODWORD(v11) = DXGMONITOR::SetLuminanceValuesWithBrightnessCompensation(this);
            if ( (int)v11 >= 0 )
            {
              DXGMONITOR::_SendAdjustedHDRParamsToDriver(this, 1, 0);
              DXGMONITOR::TriggerMonitorColorimetryChangedWnf(v111);
            }
          }
          return (unsigned int)v11;
        }
        goto LABEL_149;
      }
      v112 = *((_QWORD *)this + 18);
      if ( v112 )
      {
        if ( v9 < 0x10 || a5 < 0x10 )
          goto LABEL_149;
        LOBYTE(v139) = 0;
        v113 = EDIDV1_ObtainMonitorDigitalVideoInputParams(
                 (unsigned __int8 *)(v112 + 24),
                 (struct _WmiMonitorDigitalVideoInputParams *)&v139);
        v11 = v113;
        if ( v113 >= 0 )
        {
          if ( *a4 )
          {
            v114 = (_BYTE *)a4[1];
            memset(v114, 0, *a4);
            *v114 = v139;
          }
          else
          {
            LODWORD(v11) = -2147483643;
          }
          *a6 = 1LL;
          goto LABEL_24;
        }
LABEL_130:
        if ( (_DWORD)v11 == -1073741275 )
          return (unsigned int)v11;
        goto LABEL_131;
      }
    }
    else
    {
      v115 = *((_QWORD *)this + 18);
      if ( v115 )
      {
        if ( v9 < 0x10 || a5 < 0x10 )
          goto LABEL_149;
        *(_DWORD *)&v138.SignalLevelStandard = 0;
        *(_WORD *)&v138.SyncOnGreenVideoSupported = 0;
        v116 = EDIDV1_ObtainMonitorAnalogVideoInputParams((unsigned __int8 *)(v115 + 24), &v138);
        v11 = v116;
        if ( v116 >= 0 )
        {
          if ( *a4 < 6 )
          {
            LODWORD(v11) = -2147483643;
          }
          else
          {
            v117 = (_WmiMonitorAnalogVideoInputParams *)a4[1];
            memset(v117, 0, *a4);
            *v117 = v138;
          }
          *a6 = 6LL;
          goto LABEL_24;
        }
        goto LABEL_130;
      }
    }
    LODWORD(v11) = *((_QWORD *)this + 21) != 0LL ? -1073741275 : -1071841279;
    return (unsigned int)v11;
  }
  if ( (_DWORD)v8 == 2303007 )
  {
    v94 = (_QWORD *)((char *)this + 168);
    if ( *((_QWORD *)this + 18) || *v94 )
    {
      if ( v9 >= 0x10 && a5 >= 0x10 )
      {
        v95 = *a4;
        if ( *a4 < 0x10 )
        {
          LODWORD(v11) = -2147483643;
        }
        else
        {
          v96 = (struct _WmiMonitorColorCharacteristics *)a4[1];
          memset(v96, 0, v95);
          v97 = *((_QWORD *)this + 18);
          if ( v97 )
          {
            v98 = EDIDV1_ObtainMonitorColorCharacteristics((unsigned __int8 *)(v97 + 24), v96);
            v11 = v98;
            if ( v98 < 0 )
            {
              v102 = WdLogNewEntry5_WdWarning(v100, v99, v101);
              *(_QWORD *)(v102 + 24) = *((_QWORD *)this + 18) + 24LL;
              *(_QWORD *)(v102 + 32) = v11;
              WdLogEvent5_WdWarning(v102);
              MonitorLogBadEDID(*((_QWORD *)this + 18) + 24LL, (unsigned int)v11);
            }
          }
          else
          {
            ColorDataRaw = DisplayID_GetColorDataRaw(
                             (DXGMONITOR *)((char *)this + 168),
                             (struct DISPLAY_COLOR_DATA_RAW *)v137,
                             (enum DISPLAY_NATIVE_COLOR_DEPTH *)&v138,
                             (bool *)&v139);
            v11 = ColorDataRaw;
            if ( ColorDataRaw >= 0 )
            {
              v96->Red.X = v137[0] >> 2;
              v96->Red.Y = v137[2] >> 2;
              v96->Green.X = v137[4] >> 2;
              v96->Green.Y = v137[6] >> 2;
              v96->Blue.X = v137[8] >> 2;
              v96->Blue.Y = v137[10] >> 2;
              v96->DefaultWhite.X = v137[12] >> 2;
              v96->DefaultWhite.Y = v137[14] >> 2;
            }
            else
            {
              v105 = WdLogNewEntry5_WdError(v104);
              *(_QWORD *)(v105 + 24) = *v94;
              *(_QWORD *)(v105 + 32) = v11;
              WdLogEvent5_WdError(v105);
            }
          }
        }
        *a6 = 16LL;
        goto LABEL_24;
      }
      goto LABEL_149;
    }
LABEL_71:
    LODWORD(v11) = -1071841279;
    return (unsigned int)v11;
  }
  v15 = v8 - 2302979;
  if ( v15 )
  {
    v16 = v15 - 12;
    if ( v16 )
    {
      v17 = v16 - 4;
      if ( v17 )
      {
        v18 = v17 - 4;
        if ( v18 )
        {
          if ( v18 != 4 )
            return (unsigned int)v11;
          v19 = 0;
          if ( *((_QWORD *)this + 18) || *((_QWORD *)this + 21) )
          {
            if ( v9 >= 0x10 && a5 >= 0x10 )
            {
              v20 = *a4;
              if ( *a4 < 0x82 )
              {
                LODWORD(v11) = -2147483643;
              }
              else
              {
                v21 = a4[1];
                memset((void *)v21, 0, v20);
                v22 = *((_QWORD *)this + 18);
                if ( v22 )
                {
                  v23 = EDIDV1_ObtainMonitorProductCodeID((unsigned __int8 *)(v22 + 24), (unsigned __int16 *)v21);
                  v11 = v23;
                  if ( v23 >= 0 )
                  {
                    v27 = EDIDV1_ObtainMonitorSerialNumber(
                            (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                            (unsigned __int16 *)(v21 + 32));
                    v11 = v27;
                    if ( v27 == -1073741275 )
                    {
                      v48 = WdLogNewEntry5_WdDmmEvent(v25, v24, v26, v28);
                      *(_QWORD *)(v48 + 24) = *((_QWORD *)this + 18) + 24LL;
                      WdLogEvent5_WdDmmEvent(v48);
                    }
                    else if ( v27 < 0 )
                    {
                      goto LABEL_131;
                    }
                    v29 = EDIDV1_ObtainMonitorManufacturerName(
                            (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                            (unsigned __int16 *)(v21 + 64));
                    v11 = v29;
                    if ( v29 >= 0 )
                    {
                      v30 = EDIDV1_ObtainMonitorManufactureDate(
                              (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                              (unsigned __int8 *)(v21 + 96),
                              (unsigned __int16 *)(v21 + 98));
                      v34 = v30;
                      if ( v30 < 0 )
                      {
                        v49 = WdLogNewEntry5_WdWarning(v32, v31, v33);
                        *(_QWORD *)(v49 + 24) = *((_QWORD *)this + 18) + 24LL;
                        *(_QWORD *)(v49 + 32) = v34;
                        WdLogEvent5_WdWarning(v49);
                        MonitorLogBadEDID(*((_QWORD *)this + 18) + 24LL, (unsigned int)v34);
                      }
                      v35 = EDIDV1_ObtainMonitorUserFriendlyName(
                              (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                              (unsigned __int16 *)(v21 + 102));
                      v11 = v35;
                      if ( v35 == -1073741275 )
                      {
                        v50 = WdLogNewEntry5_WdDmmEvent(v37, v36, v38, v39);
                        *(_QWORD *)(v50 + 24) = *((_QWORD *)this + 18) + 24LL;
                        WdLogEvent5_WdDmmEvent(v50);
                        LODWORD(v11) = 0;
                      }
                      else
                      {
                        if ( v35 < 0 )
                        {
                          v51 = WdLogNewEntry5_WdWarning(v37, v36, v38);
                          *(_QWORD *)(v51 + 24) = *((_QWORD *)this + 18) + 24LL;
                          *(_QWORD *)(v51 + 32) = v11;
                          WdLogEvent5_WdWarning(v51);
                          MonitorLogBadEDID(*((_QWORD *)this + 18) + 24LL, (unsigned int)v11);
                          *(_WORD *)(v21 + 100) = 0;
                          return (unsigned int)v11;
                        }
                        v19 = 13;
                      }
                      *(_WORD *)(v21 + 100) = v19;
                      goto LABEL_23;
                    }
                  }
LABEL_131:
                  v118 = WdLogNewEntry5_WdWarning(v25, v24, v26);
                  *(_QWORD *)(v118 + 24) = *((_QWORD *)this + 18) + 24LL;
                  *(_QWORD *)(v118 + 32) = v11;
                  WdLogEvent5_WdWarning(v118);
                  MonitorLogBadEDID(*((_QWORD *)this + 18) + 24LL, (unsigned int)v11);
                  return (unsigned int)v11;
                }
                ProductCode = DisplayID_GetProductCode((DXGMONITOR *)((char *)this + 168), (unsigned __int16 *)v21);
                v11 = ProductCode;
                if ( ProductCode < 0
                  || (SerialNumber = DisplayID_GetSerialNumber(
                                       (DXGMONITOR *)((char *)this + 168),
                                       (unsigned __int16 *)(v21 + 32)),
                      v11 = SerialNumber,
                      SerialNumber < 0) )
                {
                  v64 = WdLogNewEntry5_WdError(v53);
                  v65 = *((_QWORD *)this + 20);
                  *(_QWORD *)(v64 + 32) = v11;
                  goto LABEL_75;
                }
                ManufacturerName = DisplayID_GetManufacturerName(
                                     (DXGMONITOR *)((char *)this + 168),
                                     (unsigned __int16 *)(v21 + 64));
                v57 = ManufacturerName;
                if ( ManufacturerName < 0 )
                  goto LABEL_51;
                ManufactureDate = DisplayID_GetManufactureDate(
                                    (DXGMONITOR *)((char *)this + 168),
                                    (unsigned __int8 *)(v21 + 96),
                                    (unsigned __int16 *)(v21 + 98));
                v61 = ManufactureDate;
                if ( ManufactureDate < 0 )
                {
                  v62 = WdLogNewEntry5_WdError(v59);
                  *(_QWORD *)(v62 + 24) = *((_QWORD *)this + 20);
                  *(_QWORD *)(v62 + 32) = v61;
                  WdLogEvent5_WdError(v62);
                }
                LOBYTE(v139) = 0;
                UserFriendlyName = DisplayID_GetUserFriendlyName(
                                     (DXGMONITOR *)((char *)this + 168),
                                     (unsigned __int16 *)(v21 + 102),
                                     v60,
                                     (unsigned __int8 *)&v139);
                v56 = (unsigned __int8)v139;
                *(_WORD *)(v21 + 100) = (unsigned __int8)v139;
                v57 = UserFriendlyName;
                if ( UserFriendlyName < 0 )
                {
LABEL_51:
                  v64 = WdLogNewEntry5_WdError(v56);
                  v65 = *((_QWORD *)this + 20);
                  *(_QWORD *)(v64 + 32) = v57;
LABEL_75:
                  *(_QWORD *)(v64 + 24) = v65;
                  goto LABEL_76;
                }
              }
LABEL_23:
              *a6 = 130LL;
LABEL_24:
              *a7 = 16LL;
              return (unsigned int)v11;
            }
LABEL_149:
            LODWORD(v11) = -1073741789;
            return (unsigned int)v11;
          }
          goto LABEL_71;
        }
        if ( !*((_QWORD *)this + 18) )
          goto LABEL_71;
        if ( v9 < 0x88 || a5 < 0x88 )
          goto LABEL_149;
        v66 = *(unsigned __int8 *)a4;
        if ( (unsigned int)v66 >= *((_DWORD *)this + 32) )
          goto LABEL_71;
        v67 = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v66);
        if ( !v67 )
          goto LABEL_71;
        v68 = a6;
        *(_BYTE *)a6 = v66;
        *((_BYTE *)v68 + 1) = *(_BYTE *)(v67 + 12);
        ConvertMonitorCapablitiesOrigin(
          *(enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *)(v67 + 8),
          (enum __WMI_MONITOR_CAPABILITY_ORIGIN_TYPE *)((char *)v68 + 132));
        v69 = a7;
        *(_OWORD *)((char *)v68 + 2) = *(_OWORD *)(v67 + 24);
        v70 = *(_OWORD *)(v67 + 40);
        *v69 = 136LL;
        *(_OWORD *)((char *)v68 + 18) = v70;
        *(_OWORD *)((char *)v68 + 34) = *(_OWORD *)(v67 + 56);
        *(_OWORD *)((char *)v68 + 50) = *(_OWORD *)(v67 + 72);
        *(_OWORD *)((char *)v68 + 66) = *(_OWORD *)(v67 + 88);
        *(_OWORD *)((char *)v68 + 82) = *(_OWORD *)(v67 + 104);
        *(_OWORD *)((char *)v68 + 98) = *(_OWORD *)(v67 + 120);
        *(_OWORD *)((char *)v68 + 114) = *(_OWORD *)(v67 + 136);
LABEL_91:
        LODWORD(v11) = 0;
        return (unsigned int)v11;
      }
      v71 = *((_QWORD *)this + 18);
      if ( !v71 )
        goto LABEL_71;
      if ( v9 < 0x10 || a5 < 0x10 )
        goto LABEL_149;
      v72 = *(_DWORD *)(v71 + 16);
      v73 = *(_DWORD *)(v71 + 8);
      LOWORD(v139) = 0;
      SupportedMonitorFrequencyRanges = EDID_V1_GetSupportedMonitorFrequencyRanges(
                                          v73,
                                          v72,
                                          (unsigned __int8 *)(v71 + 24),
                                          (__int64)&v139,
                                          0LL);
      v11 = SupportedMonitorFrequencyRanges;
      if ( SupportedMonitorFrequencyRanges == -1073741275 )
        goto LABEL_71;
      v75 = 0x80000000LL;
      if ( (int)(SupportedMonitorFrequencyRanges + 0x80000000) >= 0 && SupportedMonitorFrequencyRanges != -1073741789 )
      {
LABEL_66:
        v64 = WdLogNewEntry5_WdError(v75);
        *(_QWORD *)(v64 + 24) = v11;
LABEL_76:
        WdLogEvent5_WdError(v64);
        return (unsigned int)v11;
      }
      v44 = 52LL * (unsigned __int16)v139 + 4;
      if ( *a4 >= v44 )
      {
        v76 = a4[1];
        *(_WORD *)v76 = v139;
        v77 = EDID_V1_GetSupportedMonitorFrequencyRanges(
                *(_DWORD *)(*((_QWORD *)this + 18) + 8LL),
                *(_DWORD *)(*((_QWORD *)this + 18) + 16LL),
                (unsigned __int8 *)(*((_QWORD *)this + 18) + 24LL),
                v76,
                (struct _FrequencyRangeDescriptor *)(v76 + 4));
        v11 = v77;
        if ( v77 < 0 )
          goto LABEL_66;
LABEL_38:
        *a6 = v44;
        goto LABEL_24;
      }
LABEL_39:
      LODWORD(v11) = -2147483643;
      goto LABEL_38;
    }
    v41 = *((_QWORD *)this + 18);
    if ( !v41 && !*((_QWORD *)this + 21) )
      goto LABEL_71;
    if ( v9 < 0x10 || a5 < 0x10 )
      goto LABEL_149;
    v139 = 0;
    if ( v41 )
      MonitorModes = EDID_V1_GetMonitorModes(
                       *(unsigned int *)(v41 + 8),
                       *(_DWORD *)(v41 + 16),
                       (unsigned __int8 *)(v41 + 24),
                       (unsigned __int16 *)&v139,
                       0LL,
                       0LL);
    else
      MonitorModes = DisplayID_GetSupportedModes((DXGMONITOR *)((char *)this + 168), &v139, 0LL, 0LL);
    v43 = 0x80000000LL;
    LODWORD(v11) = MonitorModes;
    if ( (int)(MonitorModes + 0x80000000) < 0 || MonitorModes == -1073741789 )
    {
      if ( !v139 )
        goto LABEL_71;
      v44 = 56LL * (v139 - 1) + 60;
      if ( *a4 < v44 )
        goto LABEL_39;
      v45 = a4[1];
      v46 = *((_QWORD *)this + 18);
      if ( v46 )
        SupportedModes = EDID_V1_GetMonitorModes(
                           *(unsigned int *)(v46 + 8),
                           *(_DWORD *)(v46 + 16),
                           (unsigned __int8 *)(v46 + 24),
                           (unsigned __int16 *)&v139,
                           (struct _VideoModeDescriptor *)(v45 + 4),
                           &v138);
      else
        SupportedModes = DisplayID_GetSupportedModes(
                           (DXGMONITOR *)((char *)this + 168),
                           &v139,
                           (unsigned int *)&v138.SignalLevelStandard,
                           (struct _VideoModeDescriptor *)(v45 + 4));
      LODWORD(v11) = SupportedModes;
      if ( SupportedModes >= 0 )
      {
        *(_WORD *)v45 = v139;
        *(_WORD *)(v45 + 2) = *(_WORD *)&v138.SignalLevelStandard;
        goto LABEL_38;
      }
    }
    v64 = WdLogNewEntry5_WdError(v43);
    v65 = (int)v11;
    goto LABEL_75;
  }
  if ( a4 )
  {
    if ( v9 >= 0x10 )
    {
      v80 = *((unsigned int *)this + 32);
      if ( (_DWORD)v80 )
      {
        v82 = *(_DWORD *)a4 >> 7;
        v83 = (unsigned int)(*((_DWORD *)a4 + 1) + *(_DWORD *)a4);
        v84 = *(_DWORD *)a4 & 0x7F;
        v85 = (unsigned int)(v83 - 1) >> 7;
        v86 = (*((_BYTE *)a4 + 4) + *(_BYTE *)a4 - 1) & 0x7F;
        if ( v85 < (unsigned int)v80 )
        {
          v88 = (char *)a4[1];
          memmove(v88, (const void *)(*(_QWORD *)(*((_QWORD *)this + 17) + 8 * v82) + v84 + 24), 128 - v84);
          v89 = &v88[128 - v84];
          v90 = v82 + 1;
          for ( i = v90 + 1; i < v85; ++i )
          {
            v92 = v90;
            v90 = i;
            v93 = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v92);
            *(_OWORD *)v89 = *(_OWORD *)(v93 + 24);
            *((_OWORD *)v89 + 1) = *(_OWORD *)(v93 + 40);
            *((_OWORD *)v89 + 2) = *(_OWORD *)(v93 + 56);
            *((_OWORD *)v89 + 3) = *(_OWORD *)(v93 + 72);
            *((_OWORD *)v89 + 4) = *(_OWORD *)(v93 + 88);
            *((_OWORD *)v89 + 5) = *(_OWORD *)(v93 + 104);
            *((_OWORD *)v89 + 6) = *(_OWORD *)(v93 + 120);
            *((_OWORD *)v89 + 7) = *(_OWORD *)(v93 + 136);
            v89 += 128;
          }
          if ( v90 < v85 )
            memmove(v89, (const void *)(*(_QWORD *)(*((_QWORD *)this + 17) + 8LL * v90) + 24LL), v86 + 1);
          goto LABEL_91;
        }
        v87 = WdLogNewEntry5_WdWarning(v83, v80, v14);
        *(_QWORD *)(v87 + 24) = *(unsigned int *)a4;
        *(_QWORD *)(v87 + 32) = *((unsigned int *)a4 + 1);
        WdLogEvent5_WdWarning(v87);
        return 3223126024LL;
      }
      else
      {
        v81 = WdLogNewEntry5_WdWarning(v13, v80, v14);
        *(_QWORD *)(v81 + 24) = this;
        WdLogEvent5_WdWarning(v81);
        return 3223126017LL;
      }
    }
    else
    {
      v79 = WdLogNewEntry5_WdError(v13);
      WdLogEvent5_WdError(v79);
      return 3221225507LL;
    }
  }
  else
  {
    v78 = WdLogNewEntry5_WdError(v13);
    WdLogEvent5_WdError(v78);
    return 3221225485LL;
  }
}
