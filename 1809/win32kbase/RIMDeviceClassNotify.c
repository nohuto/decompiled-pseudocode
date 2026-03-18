/*
 * XREFs of RIMDeviceClassNotify @ 0x1C004EC60
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     rimDoRimDevChange @ 0x1C004E4B0 (rimDoRimDevChange.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     RIMCreateDev @ 0x1C004F7E4 (RIMCreateDev.c)
 *     ApiSetIsRemoteConnection @ 0x1C00503D8 (ApiSetIsRemoteConnection.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0050484 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     DeviceTypeToRimInputType @ 0x1C0050820 (DeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_S @ 0x1C005098C (WPP_RECORDER_SF_S.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0051550 (RimDeviceTypeToRimInputType.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     RIMDoOnPnpNotification @ 0x1C009206C (RIMDoOnPnpNotification.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C0094328 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00F4450 (WPP_RECORDER_SF_qd.c)
 *     DbgPrintRIMAlways @ 0x1C00F9910 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C010B51C (WPP_RECORDER_SF_qqqD.c)
 *     RIMFindInputDeviceForConfig @ 0x1C011ADBC (RIMFindInputDeviceForConfig.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C011B7F4 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMFreeDev @ 0x1C0121F30 (RIMFreeDev.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C01245D0 (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sdq @ 0x1C012554C (WPP_RECORDER_SF_Sdq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeviceClassNotify(char *NotificationStructure, __int64 *Context, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rsi
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  int v8; // r15d
  int v9; // r14d
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // r13d
  __int64 v15; // rcx
  __int64 v16; // r15
  unsigned int v17; // r12d
  const UNICODE_STRING *v19; // rax
  int v20; // r8d
  NTSTATUS v21; // eax
  int v22; // edx
  NTSTATUS v23; // eax
  int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int16 *v28; // r9
  __int64 v29; // rax
  unsigned __int16 *v30; // r9
  int v31; // edx
  unsigned int v32; // eax
  bool v33; // zf
  bool v34; // cf
  int v35; // edx
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // r15d
  int cData; // [rsp+20h] [rbp-E0h]
  __int64 v44; // [rsp+58h] [rbp-A8h] BYREF
  int v45; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v46; // [rsp+64h] [rbp-9Ch] BYREF
  int v47; // [rsp+68h] [rbp-98h] BYREF
  int v48; // [rsp+6Ch] [rbp-94h] BYREF
  int v49; // [rsp+70h] [rbp-90h] BYREF
  int v50; // [rsp+74h] [rbp-8Ch] BYREF
  int v51; // [rsp+78h] [rbp-88h] BYREF
  int v52; // [rsp+7Ch] [rbp-84h] BYREF
  _DWORD v53[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v54; // [rsp+88h] [rbp-78h] BYREF
  __int64 v55; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v56[16]; // [rsp+98h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-28h] BYREF
  EVENT_DATA_DESCRIPTOR v58; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v60; // [rsp+140h] [rbp+40h]
  __int64 v61; // [rsp+148h] [rbp+48h]
  BOOL *v62; // [rsp+150h] [rbp+50h]
  __int64 v63; // [rsp+158h] [rbp+58h]
  int *v64; // [rsp+160h] [rbp+60h]
  __int64 v65; // [rsp+168h] [rbp+68h]
  int *v66; // [rsp+170h] [rbp+70h]
  __int64 v67; // [rsp+178h] [rbp+78h]
  int *v68; // [rsp+180h] [rbp+80h]
  __int64 v69; // [rsp+188h] [rbp+88h]
  int *v70; // [rsp+190h] [rbp+90h]
  __int64 v71; // [rsp+198h] [rbp+98h]
  int *v72; // [rsp+1A0h] [rbp+A0h]
  __int64 v73; // [rsp+1A8h] [rbp+A8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1B0h] [rbp+B0h] BYREF
  _DWORD *v75; // [rsp+1D0h] [rbp+D0h]
  __int64 v76; // [rsp+1D8h] [rbp+D8h]
  __int64 v77; // [rsp+1E0h] [rbp+E0h]
  _DWORD v78[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  EVENT_DATA_DESCRIPTOR v79; // [rsp+1F0h] [rbp+F0h] BYREF
  _DWORD *v80; // [rsp+210h] [rbp+110h]
  __int64 v81; // [rsp+218h] [rbp+118h]
  __int64 v82; // [rsp+220h] [rbp+120h]
  _DWORD v83[2]; // [rsp+228h] [rbp+128h] BYREF

  v3 = *((unsigned int *)Context + 2);
  v4 = *Context;
  if ( (unsigned int)v3 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(NotificationStructure, Context, a3);
  v6 = *(_QWORD **)(32 * (v3 + 4) + v4);
  v7 = *(_QWORD *)(NotificationStructure + 20) - *v6;
  if ( !v7 )
    v7 = *(_QWORD *)(NotificationStructure + 28) - v6[1];
  v8 = 0;
  if ( v7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, a3);
  v9 = -1073741823;
  memset(v56, 0, 0x3CuLL);
  LOBYTE(v10) = 3;
  WPP_RECORDER_SF_S(
    gRimLog,
    v10,
    21,
    46,
    (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
    *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL));
  v11 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v11 )
    v11 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( v11 )
  {
    v29 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
    if ( !v29 )
      v29 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
    if ( !v29 && dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x100uLL) )
    {
      v81 = 2LL;
      v80 = v83;
      v82 = *((_QWORD *)v30 + 1);
      v83[0] = *v30;
      v83[1] = 0;
      TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019F30B, 0LL, 0LL, 4u, &v79);
    }
  }
  else if ( dword_1C01C7F10 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7F10, 0x100uLL) )
  {
    v76 = 2LL;
    v75 = v78;
    v77 = *((_QWORD *)v28 + 1);
    v78[0] = *v28;
    v78[1] = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7F10, &unk_1C019F2D7, 0LL, 0LL, 4u, &pData);
  }
  v12 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v12 )
    v12 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v12 )
  {
    v13 = 0LL;
    v14 = 0;
    if ( !*(_BYTE *)(v4 + 81) && ((unsigned int)DeviceTypeToRimInputType((unsigned int)v3) & *(_DWORD *)(v4 + 84)) != 0 )
    {
      ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v53, 1, 1);
      if ( (unsigned int)ApiSetIsRemoteConnection() )
      {
        v17 = 0;
LABEL_27:
        if ( !v53[1] && v53[0] && (int)IsLeaveEditionCritSupported() >= 0 )
          LeaveEditionCrit();
        if ( v8 )
        {
          RIMLockExclusive(v4 + 104);
          if ( (*(_DWORD *)(v13 + 200) & 0x80u) != 0 )
          {
            if ( v56[7] || v56[8] )
              v17 = 1;
            RIMLockExclusive(v4 + 568);
            RIMSendLatencyMgtDeviceRequest(v13, *(_QWORD *)(v13 + 464), v17);
            *(_QWORD *)(v4 + 576) = 0LL;
            ExReleasePushLockExclusiveEx(v4 + 568, 0LL);
            KeLeaveCriticalRegion();
          }
          if ( v14 )
          {
            if ( v9 < 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
            if ( (*(_DWORD *)(v13 + 184) & 1) != 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
            RIMSignalOnPnpNotificationAndWait(v4, v13, 1, 0, 0, 0);
          }
          *(_QWORD *)(v4 + 112) = 0LL;
          ExReleasePushLockExclusiveEx(v4 + 104, 0LL);
          KeLeaveCriticalRegion();
          ObfDereferenceObject(*(PVOID *)(v13 + 32));
          ObfDereferenceObject((PVOID)v4);
        }
        return 0LL;
      }
      RIMLockExclusive(v4 + 104);
      if ( *(_BYTE *)(v4 + 80) || *(_BYTE *)(v4 + 81) )
        goto LABEL_72;
      v13 = *(_QWORD *)(v4 + 424);
      v44 = v13;
      if ( v13 )
      {
        v19 = (const UNICODE_STRING *)v13;
        while ( 1 )
        {
          v15 = *(unsigned int *)(v13 + 184);
          if ( (v15 & 0x20) == 0
            && (v15 & 0x2000) == 0
            && RtlEqualUnicodeString(*((PCUNICODE_STRING *)NotificationStructure + 5), v19 + 13, 0) )
          {
            break;
          }
          v19 = *(const UNICODE_STRING **)(v13 + 40);
          v44 = (__int64)v19;
          v13 = (__int64)v19;
          if ( !v19 )
            goto LABEL_20;
        }
        if ( (*(_DWORD *)(v13 + 200) & 0x20) != 0 )
        {
          WPP_RECORDER_SF_Sdq(
            *(unsigned __int8 *)(v13 + 48),
            *((_QWORD *)NotificationStructure + 5),
            v20,
            47,
            cData,
            *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL),
            *(_BYTE *)(v13 + 48),
            *(_QWORD *)(v13 + 248));
          v17 = 0;
          if ( !*(_QWORD *)(v13 + 248)
            && hProvider > 5u
            && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
          {
            TlgCreateWsz(&pDesc, *(LPCWSTR *)(v13 + 216));
            v32 = RimDeviceTypeToRimInputType(v13, *(unsigned __int8 *)(v13 + 48));
            v60 = &v54;
            v54 = v32;
            v61 = 8LL;
            v33 = *(_QWORD *)(v13 + 248) == 0LL;
            v63 = 4LL;
            v46 = !v33;
            v62 = &v46;
            v34 = __CFSHR__(*(_DWORD *)(v13 + 184), 8);
            v65 = 4LL;
            v47 = -v34;
            v64 = &v47;
            v34 = __CFSHR__(*(_DWORD *)(v13 + 184), 11);
            v67 = 4LL;
            v48 = -v34;
            v66 = &v48;
            v34 = __CFSHR__(*(_DWORD *)(v13 + 184), 19);
            v69 = 4LL;
            v49 = -v34;
            v68 = &v49;
            v34 = __CFSHR__(*(_DWORD *)(v13 + 184), 22);
            v71 = 4LL;
            v50 = -v34;
            v70 = &v50;
            v34 = __CFSHR__(*(_DWORD *)(v13 + 184), 24);
            v73 = 4LL;
            v51 = -v34;
            v72 = &v51;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C019F200, 0LL, 0LL, 0xAu, &v58);
          }
          if ( *(_BYTE *)(v13 + 48) == 3 )
          {
            v45 = 0;
            v52 = 0;
            v55 = 0LL;
            LOBYTE(v31) = 3;
            WPP_RECORDER_SF_S(
              gRimLog,
              v31,
              21,
              48,
              (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
              *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL));
            if ( (unsigned int)RIMFindInputDeviceForConfig(
                                 *(_QWORD *)(v13 + 464),
                                 v4,
                                 v13,
                                 (unsigned int)&v45,
                                 (__int64)&v52,
                                 (__int64)&v55) )
            {
              if ( v45 )
              {
                LOBYTE(v35) = 3;
                WPP_RECORDER_SF_S(
                  gRimLog,
                  v35,
                  21,
                  49,
                  (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
                  *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL));
              }
            }
          }
          goto LABEL_26;
        }
      }
LABEL_20:
      v16 = *(_QWORD *)(v4 + 32);
      if ( v16 == PsGetCurrentProcess(v15) )
        goto LABEL_21;
      if ( *(_BYTE *)(v4 + 10) )
      {
        DbgPrintRIMAlways(
          "RIMDeviceClassNotify: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping Pnp Notification!\n");
        WPP_RECORDER_SF_qqqD(
          v37,
          v36,
          v38,
          50,
          (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
          *(_QWORD *)(v4 + 72),
          *(_QWORD *)(v4 + 32),
          *(_QWORD *)(v4 + 40),
          *(_DWORD *)(v4 + 84));
      }
      else
      {
        v9 = PsAcquireProcessExitSynchronization(v16);
        if ( v9 < 0 )
        {
LABEL_71:
          v8 = 0;
          v14 = 0;
LABEL_72:
          v17 = 0;
LABEL_26:
          *(_QWORD *)(v4 + 112) = 0LL;
          ExReleasePushLockExclusiveEx(v4 + 104, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_27;
        }
        KeStackAttachProcess(*(PRKPROCESS *)(v4 + 32), &ApcState);
        LOBYTE(v14) = 1;
      }
      if ( v9 >= 0 )
      {
LABEL_21:
        if ( v13 )
        {
          RIMLockExclusive(v4 + 568);
          if ( (*(_DWORD *)(v13 + 184) & 0x400) == 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41);
          v42 = 0;
          if ( (*(_DWORD *)(v13 + 200) & 1) != 0 )
          {
            if ( *(_QWORD *)(v13 + 224) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41);
            if ( *(_QWORD *)(v13 + 232) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41);
            if ( (*(_DWORD *)(v13 + 184) & 0x80u) != 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41);
            LOBYTE(v39) = 3;
            WPP_RECORDER_SF_q(gRimLog, v39, 22, 51, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids, v13);
          }
          else
          {
            if ( *(int *)(v13 + 184) < 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41);
            if ( *(_QWORD *)(v13 + 192) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41);
            if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
              v42 = 1;
            else
              *(_DWORD *)(v13 + 200) |= 2u;
            v13 = v44;
          }
          *(_QWORD *)(v4 + 576) = 0LL;
          ExReleasePushLockExclusiveEx(v4 + 568, 0LL);
          KeLeaveCriticalRegion();
          if ( v42 )
          {
            rimDoRimDevChange(v4, v13, 3u);
            RIMFreeDev(v4, v13);
          }
          v44 = 0LL;
        }
        v17 = 0;
        v9 = RIMCreateDev((PVOID)v4, 0, 0LL, (__int64)&v44);
        if ( (_BYTE)v14 )
        {
          KeUnstackDetachProcess(&ApcState);
          PsReleaseProcessExitSynchronization(*(_QWORD *)(v4 + 32));
        }
        if ( v9 >= 0 )
        {
          ApiSetGetPowerTransitionsState(v56);
          v13 = v44;
          if ( *(struct _KTHREAD **)(v4 + 40) == KeGetCurrentThread() )
          {
            *(_DWORD *)(v44 + 184) |= 1u;
            v9 = RIMDoOnPnpNotification(v4, v13);
            v14 = 0;
          }
          else
          {
            v14 = 1;
          }
          if ( v9 < 0 )
          {
            v8 = 0;
          }
          else
          {
            v8 = 1;
            v21 = ObReferenceObjectByPointer((PVOID)v4, 3u, ExRawInputManagerObjectType, 1);
            if ( v21 < 0 )
            {
              LOBYTE(v22) = 3;
              WPP_RECORDER_SF_qd(
                gRimLog,
                v22,
                22,
                52,
                (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
                v4,
                v21);
            }
            v23 = ObReferenceObjectByPointer(*(PVOID *)(v13 + 32), 3u, ExRawInputManagerObjectType, 1);
            v9 = v23;
            if ( v23 < 0 )
            {
              LOBYTE(v24) = 3;
              WPP_RECORDER_SF_qd(
                gRimLog,
                v24,
                22,
                53,
                (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
                v4,
                v23);
            }
          }
        }
        else
        {
          v13 = v44;
          v8 = 0;
          v14 = 0;
        }
        goto LABEL_26;
      }
      goto LABEL_71;
    }
  }
  return 0LL;
}
