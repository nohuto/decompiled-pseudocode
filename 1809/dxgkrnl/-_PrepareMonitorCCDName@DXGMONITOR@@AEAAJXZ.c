/*
 * XREFs of ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C00B46DC
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B44E8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0003560 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0004C10 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x1C001CD00 (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C001CDBC (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x1C001CE5C (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C001CF50 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C00207A0 (__report_rangecheckfailure.c)
 *     memcmp @ 0x1C0022D50 (memcmp.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C004F2D0 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?DisplayID_GetManufactureDate@@YAJPEAUDisplayIDObj@@PEAEPEAG@Z @ 0x1C0050164 (-DisplayID_GetManufactureDate@@YAJPEAUDisplayIDObj@@PEAEPEAG@Z.c)
 *     ?DisplayID_GetManufacturerName@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C00501D8 (-DisplayID_GetManufacturerName@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetProductCode@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C00502A0 (-DisplayID_GetProductCode@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetSerialNumber@@YAJPEAUDisplayIDObj@@PEAG@Z @ 0x1C0050318 (-DisplayID_GetSerialNumber@@YAJPEAUDisplayIDObj@@PEAG@Z.c)
 *     MonitorUnifyCCDMonitorString @ 0x1C0149938 (MonitorUnifyCCDMonitorString.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C01BDAB4 (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     MonitorLogBadEDID @ 0x1C0290DF8 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_PrepareMonitorCCDName(DXGMONITOR *this, __int64 a2, __int64 a3)
{
  _OWORD *v4; // rdi
  char v5; // al
  char v6; // cl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  const UNICODE_STRING *v11; // rsi
  DXGADAPTER *v12; // rcx
  ULONG v13; // ecx
  __int64 v14; // rcx
  unsigned __int16 v15; // di
  wchar_t *v16; // rax
  __int64 v17; // rcx
  wchar_t *v18; // r14
  struct _UNICODE_STRING *v19; // rbx
  __int64 v21; // rax
  unsigned __int8 *v22; // rdi
  __int64 **v23; // rax
  __int64 *v24; // rax
  unsigned __int8 *v25; // r14
  int IsEDIDBaseBlock; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  bool v33; // si
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rsi
  int v39; // eax
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned __int64 v43; // rsi
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r14
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rsi
  unsigned int v53; // ecx
  unsigned __int64 v54; // rax
  __int64 v55; // rcx
  unsigned __int64 v56; // rsi
  __int64 v57; // rax
  int ManufacturerName; // eax
  __int64 v59; // rcx
  __int64 v60; // rsi
  int ProductCode; // eax
  int SerialNumber; // eax
  int ManufactureDate; // eax
  __int64 v64; // rcx
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rcx
  unsigned __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rcx
  struct _LIST_ENTRY *Flink; // r14
  __int64 v72; // rdi
  __int64 v73; // rax
  __int64 v74; // rax
  int v75; // eax
  __int64 v76; // rax
  PVOID v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 *v83; // rax
  __int64 v84; // rax
  unsigned int v85; // edx
  __int64 v86; // rax
  unsigned __int8 v87[4]; // [rsp+28h] [rbp-79h] BYREF
  unsigned __int16 v88[2]; // [rsp+2Ch] [rbp-75h] BYREF
  struct _UNICODE_STRING String; // [rsp+30h] [rbp-71h] BYREF
  unsigned __int64 v90; // [rsp+40h] [rbp-61h] BYREF
  __int64 v91; // [rsp+48h] [rbp-59h] BYREF
  struct _UNICODE_STRING v92; // [rsp+50h] [rbp-51h]
  WCHAR Buf2[3]; // [rsp+68h] [rbp-39h] BYREF
  unsigned __int16 v94[3]; // [rsp+6Eh] [rbp-33h] BYREF
  unsigned __int16 v95; // [rsp+74h] [rbp-2Dh] BYREF
  unsigned __int16 v96[3]; // [rsp+76h] [rbp-2Bh] BYREF
  unsigned __int16 v97[10]; // [rsp+7Ch] [rbp-25h] BYREF
  wchar_t v98; // [rsp+90h] [rbp-11h]
  __int16 v99; // [rsp+92h] [rbp-Fh]
  wchar_t v100; // [rsp+94h] [rbp-Dh]
  wchar_t v101; // [rsp+96h] [rbp-Bh]
  wchar_t v102; // [rsp+98h] [rbp-9h]
  wchar_t v103; // [rsp+9Ah] [rbp-7h]
  __int16 v104; // [rsp+9Ch] [rbp-5h]
  wchar_t v105; // [rsp+9Eh] [rbp-3h]
  wchar_t v106; // [rsp+A0h] [rbp-1h]
  __int16 v107; // [rsp+A2h] [rbp+1h]
  __int16 v108; // [rsp+ACh] [rbp+Bh]
  __int16 v109; // [rsp+B8h] [rbp+17h] BYREF

  if ( *((_QWORD *)this + 66) )
  {
    v21 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( *((_DWORD *)this + 108) == 1 )
  {
    v22 = 0LL;
    if ( !*((_DWORD *)this + 32) )
      goto LABEL_26;
    v23 = (__int64 **)*((_QWORD *)this + 17);
    if ( !v23 )
      goto LABEL_26;
    v24 = *v23;
    if ( !v24 )
      goto LABEL_26;
    do
    {
      if ( *((_DWORD *)v24 + 2) == 2 )
        break;
      v24 = (__int64 *)*v24;
    }
    while ( v24 );
    if ( v24 )
    {
      v25 = (unsigned __int8 *)(v24 + 3);
      IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v24 + 24);
      v30 = IsEDIDBaseBlock;
      if ( IsEDIDBaseBlock >= 0 )
      {
        v22 = v25;
        LODWORD(v30) = 0;
      }
      else
      {
        v31 = WdLogNewEntry5_WdWarning(v28, v27, v29);
        *(_QWORD *)(v31 + 24) = v25;
        *(_QWORD *)(v31 + 32) = v30;
        WdLogEvent5_WdWarning(v31);
        MonitorLogBadEDID(v25, (unsigned int)v30);
      }
    }
    else
    {
LABEL_26:
      v32 = WdLogNewEntry5_WdWarning(this, a2, a3);
      *(_QWORD *)(v32 + 24) = this;
      WdLogEvent5_WdWarning(v32);
      LODWORD(v30) = -1071841279;
    }
    v33 = (int)v30 >= 0;
    if ( v33 || *((_QWORD *)this + 20) )
    {
      v108 = 0;
      if ( v33 )
      {
        v34 = EDIDV1_ObtainMonitorManufacturerName(v22, Buf2);
        v38 = v34;
        if ( v34 >= 0 )
        {
          v39 = EDIDV1_ObtainMonitorProductCodeID(v22, v94);
          v38 = v39;
          if ( v39 >= 0 )
          {
            v40 = EDIDV1_ObtainMonitorSerialNumber(v22, v96);
            v38 = v40;
            if ( v40 >= 0 )
            {
              v90 = 20LL;
              v98 = 0;
              if ( (int)RtlStringCchLengthW(Buf2, 0x23uLL, &v90) < 0 )
              {
                v42 = WdLogNewEntry5_WdAssertion(v41);
                WdLogEvent5_WdAssertion(v42);
              }
              v43 = v90;
              if ( v90 > 0x17 )
              {
                v44 = WdLogNewEntry5_WdAssertion(v41);
                WdLogEvent5_WdAssertion(v44);
              }
              v87[0] = 0;
              v88[0] = 0;
              v45 = EDIDV1_ObtainMonitorManufactureDate(v22, v87, v88);
              v49 = v45;
              if ( v45 < 0 )
              {
                v50 = WdLogNewEntry5_WdWarning(v47, v46, v48);
                *(_QWORD *)(v50 + 24) = v22;
                *(_QWORD *)(v50 + 32) = v49;
                WdLogEvent5_WdWarning(v50);
                MonitorLogBadEDID(v22, (unsigned int)v49);
              }
              v51 = v87[0];
              Buf2[v43] = 95;
              v52 = v43 + 1;
              Buf2[v52++] = a0123456789abcd_0[v51 >> 4];
              v53 = v88[0];
              Buf2[v52++] = a0123456789abcd_0[v51 & 0xF];
              Buf2[v52++] = 95;
              Buf2[v52++] = a0123456789abcd_0[(unsigned __int64)v53 >> 12];
              Buf2[v52++] = a0123456789abcd_0[(v53 >> 8) & 0xF];
              Buf2[v52++] = a0123456789abcd_0[(unsigned __int8)v53 >> 4];
              Buf2[v52++] = a0123456789abcd_0[v53 & 0xF];
              Buf2[v52++] = 95;
              v54 = v22[127];
              v55 = v54 & 0xF;
              Buf2[v52++] = a0123456789abcd_0[v54 >> 4];
              Buf2[v52] = a0123456789abcd_0[v55];
              v56 = v52 + 1;
              if ( 2 * v56 >= 0x46 )
                _report_rangecheckfailure();
              Buf2[v56] = 0;
              goto LABEL_49;
            }
          }
        }
        v57 = WdLogNewEntry5_WdWarning(v36, v35, v37);
        *(_QWORD *)(v57 + 24) = v22;
        *(_QWORD *)(v57 + 32) = v38;
        WdLogEvent5_WdWarning(v57);
        MonitorLogBadEDID(v22, (unsigned int)v38);
      }
      else
      {
        ManufacturerName = DisplayID_GetManufacturerName((DXGMONITOR *)((char *)this + 168), Buf2);
        v60 = ManufacturerName;
        if ( ManufacturerName >= 0 )
        {
          ProductCode = DisplayID_GetProductCode((DXGMONITOR *)((char *)this + 168), &v95);
          v60 = ProductCode;
          if ( ProductCode >= 0 )
          {
            SerialNumber = DisplayID_GetSerialNumber((DXGMONITOR *)((char *)this + 168), v97);
            v60 = SerialNumber;
            if ( SerialNumber >= 0 )
            {
              v87[0] = 0;
              v88[0] = 0;
              ManufactureDate = DisplayID_GetManufactureDate((DXGMONITOR *)((char *)this + 168), v87, v88);
              v65 = ManufactureDate;
              if ( ManufactureDate < 0 )
              {
                v66 = WdLogNewEntry5_WdError(v64);
                *(_QWORD *)(v66 + 24) = *((_QWORD *)this + 20);
                *(_QWORD *)(v66 + 32) = v65;
                WdLogEvent5_WdError(v66);
              }
              v97[8] = 95;
              v99 = 95;
              v56 = 29LL;
              v97[9] = a0123456789abcd_0[(unsigned __int64)v87[0] >> 4];
              v98 = a0123456789abcd_0[v87[0] & 0xF];
              v100 = a0123456789abcd_0[(unsigned __int64)v88[0] >> 12];
              v101 = a0123456789abcd_0[((unsigned __int64)v88[0] >> 8) & 0xF];
              v102 = a0123456789abcd_0[((unsigned __int64)v88[0] >> 4) & 0xF];
              v67 = *((unsigned int *)this + 45);
              v103 = a0123456789abcd_0[v88[0] & 0xF];
              LOBYTE(v67) = *(_BYTE *)(v67 + *((_QWORD *)this + 21) - 1);
              v104 = 95;
              v107 = 0;
              v68 = (unsigned __int64)(unsigned __int8)v67 >> 4;
              v55 = v67 & 0xF;
              v105 = a0123456789abcd_0[v68];
              v106 = a0123456789abcd_0[(unsigned int)v55];
LABEL_49:
              if ( v56 >= 0x23 )
              {
                v69 = WdLogNewEntry5_WdAssertion(v55);
                WdLogEvent5_WdAssertion(v69);
              }
              KeAcquireGuardedMutex(&DXGMONITOR::_UniqueTableLock);
              Flink = DXGMONITOR::_UniqueEntryList.Flink;
              v72 = 0LL;
              while ( Flink != &DXGMONITOR::_UniqueEntryList )
              {
                v72 = (__int64)Flink;
                if ( HIDWORD(Flink[1].Flink) == v56 && !memcmp(&Flink[1].Blink, Buf2, 2 * v56) )
                {
                  Flink = 0LL;
                  break;
                }
                Flink = Flink->Flink;
              }
              if ( Flink )
              {
                v77 = operator new(2 * v56 + 32, 0x4D677844u, PagedPool);
                v72 = (__int64)v77;
                if ( !v77 )
                {
                  v79 = WdLogNewEntry5_WdLowResource(v78);
                  WdLogEvent5_WdLowResource(v79);
                  KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
                  return 3221225495LL;
                }
                *((_DWORD *)v77 + 5) = v56;
                *((_DWORD *)v77 + 4) = 1;
                if ( (int)RtlStringCchCopyW((unsigned __int16 *)v77 + 12, v56 + 1, Buf2) < 0 )
                {
                  v82 = WdLogNewEntry5_WdAssertion(v81);
                  WdLogEvent5_WdAssertion(v82);
                }
                *(_WORD *)(v72 + 2 * v56 + 24) = 0;
                v83 = (__int64 *)qword_1C008F9C8;
                if ( *(struct _LIST_ENTRY **)qword_1C008F9C8 != &DXGMONITOR::_UniqueEntryList )
                  __fastfail(3u);
                *(_QWORD *)v72 = &DXGMONITOR::_UniqueEntryList;
                *(_QWORD *)(v72 + 8) = v83;
                *v83 = v72;
                qword_1C008F9C8 = v72;
              }
              else
              {
                if ( !v72 )
                {
                  v74 = WdLogNewEntry5_WdAssertion(v70);
                  WdLogEvent5_WdAssertion(v74);
                }
                v75 = *(_DWORD *)(v72 + 16);
                if ( !v75 )
                {
                  v76 = WdLogNewEntry5_WdAssertion(v70);
                  WdLogEvent5_WdAssertion(v76);
                  v75 = *(_DWORD *)(v72 + 16);
                }
                *(_DWORD *)(v72 + 16) = v75 + 1;
              }
              *((_QWORD *)this + 71) = v72;
              KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
              v4 = (_OWORD *)((char *)this + 520);
              if ( !RtlCreateUnicodeString((PUNICODE_STRING)((char *)this + 520), Buf2) )
              {
LABEL_67:
                v80 = WdLogNewEntry5_WdLowResource(v17);
                WdLogEvent5_WdLowResource(v80);
                return 3221225495LL;
              }
              v5 = 1;
              goto LABEL_76;
            }
          }
        }
        v73 = WdLogNewEntry5_WdError(v59);
        *(_QWORD *)(v73 + 24) = *((_QWORD *)this + 20);
        *(_QWORD *)(v73 + 32) = v60;
        WdLogEvent5_WdError(v73);
      }
    }
    v4 = (_OWORD *)((char *)this + 520);
    *((_QWORD *)this + 71) = 0LL;
    RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 520), L"NOEDID");
    v5 = 0;
LABEL_76:
    *((_BYTE *)this + 516) = v5;
    goto LABEL_5;
  }
  v4 = (_OWORD *)((char *)this + 520);
  *((_QWORD *)this + 71) = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 520), L"SIMULATED");
  v5 = 0;
  *((_BYTE *)this + 516) = 0;
LABEL_5:
  v6 = v5;
  if ( *((_QWORD *)this + 66) && v5 )
  {
    MonitorUnifyCCDMonitorString(v4);
    v6 = *((_BYTE *)this + 516);
  }
  *(_OWORD *)((char *)this + 536) = *v4;
  if ( v6 )
    *((_WORD *)this + 268) -= 6;
  v7 = *((_QWORD *)this + 4);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 16LL) + 192LL) + 64LL);
  v9 = *(_QWORD *)(v8 + 4752);
  v10 = v8 + 4744;
  v11 = (const UNICODE_STRING *)(v10 & -(__int64)(v9 != 0));
  if ( v11 )
  {
    *(_QWORD *)&String.Length = 0LL;
    String.Buffer = 0LL;
    v12 = *(DXGADAPTER **)(*(_QWORD *)(v7 + 8) + 16LL);
    if ( (*((_DWORD *)v12 + 77) & 0x40000) != 0 )
    {
      v85 = *((_DWORD *)this + 11);
      v91 = 0LL;
      v92 = (struct _UNICODE_STRING)0LL;
      DXGADAPTER::GetVirtualMonitorInfo(v12, v85, (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)&v91);
      if ( v92.Length )
        String = v92;
    }
    v109 = 0;
    if ( !String.Length )
    {
      v13 = *((_DWORD *)this + 11);
      *(_QWORD *)&String.Length = 1310720LL;
      String.Buffer = (wchar_t *)&v109;
      if ( RtlIntegerToUnicodeString(v13, 0x10u, &String) < 0 )
      {
        v86 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v86);
      }
    }
    v15 = String.Length + v11->Length + 8;
    v16 = (wchar_t *)operator new(v15, 0x4D677844u, PagedPool);
    v18 = v16;
    if ( v16 )
    {
      memset(v16, 0, v15);
      v19 = (struct _UNICODE_STRING *)((char *)this + 552);
      *(_QWORD *)&v19->Length = 0LL;
      v19->MaximumLength = v15;
      v19->Buffer = v18;
      RtlAppendUnicodeToString(v19, L"_");
      RtlAppendUnicodeStringToString(v19, v11);
      RtlAppendUnicodeToString(v19, L"_");
      RtlAppendUnicodeStringToString(v19, &String);
      return 0LL;
    }
    goto LABEL_67;
  }
  v84 = WdLogNewEntry5_WdError(v10);
  *(_QWORD *)(v84 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 192LL);
  WdLogEvent5_WdError(v84);
  return 3221225473LL;
}
