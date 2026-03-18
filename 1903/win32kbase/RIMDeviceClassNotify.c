/*
 * XREFs of RIMDeviceClassNotify @ 0x1C006AB90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_q @ 0x1C0038944 (WPP_RECORDER_SF_q.c)
 *     rimDoRimDevChange @ 0x1C0069B2C (rimDoRimDevChange.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C006B5CC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ApiSetIsRemoteConnection @ 0x1C006B91C (ApiSetIsRemoteConnection.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C006BA34 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     RIMCreateDev @ 0x1C006BB70 (RIMCreateDev.c)
 *     DeviceTypeToRimInputType @ 0x1C006C2A0 (DeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_S @ 0x1C006C2CC (WPP_RECORDER_SF_S.c)
 *     RimDeviceTypeToRimInputType @ 0x1C006C978 (RimDeviceTypeToRimInputType.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00983C4 (_TlgCreateWsz.c)
 *     RIMDoOnPnpNotification @ 0x1C00A5F4C (RIMDoOnPnpNotification.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C00A6454 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     WPP_RECORDER_SF_qd @ 0x1C011EFA0 (WPP_RECORDER_SF_qd.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0121340 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C013586C (WPP_RECORDER_SF_qqqD.c)
 *     RIMFindInputDeviceForConfig @ 0x1C01436CC (RIMFindInputDeviceForConfig.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C0144104 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMFreeDev @ 0x1C014DE64 (RIMFreeDev.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C0150C60 (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sdq @ 0x1C0151AD4 (WPP_RECORDER_SF_Sdq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeviceClassNotify(char *NotificationStructure, __int64 *Context, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rsi
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  int v8; // r15d
  NTSTATUS v9; // r14d
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  struct RIMDEV *v13; // rdi
  int v14; // r13d
  const void *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct RIMDEV *v19; // rax
  int v20; // ecx
  int v21; // edx
  int v22; // r8d
  NTSTATUS v23; // eax
  int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int16 *v31; // r9
  __int64 v32; // rax
  unsigned __int16 *v33; // r9
  unsigned int v34; // eax
  bool v35; // zf
  bool v36; // cf
  int v37; // edx
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // r15d
  int v45; // edx
  int cData; // [rsp+20h] [rbp-E0h]
  struct RIMDEV *v47; // [rsp+58h] [rbp-A8h] BYREF
  int v48; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v49; // [rsp+64h] [rbp-9Ch] BYREF
  int v50; // [rsp+68h] [rbp-98h] BYREF
  int v51; // [rsp+6Ch] [rbp-94h] BYREF
  int v52; // [rsp+70h] [rbp-90h] BYREF
  int v53; // [rsp+74h] [rbp-8Ch] BYREF
  int v54; // [rsp+78h] [rbp-88h] BYREF
  int v55; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v56; // [rsp+80h] [rbp-80h] BYREF
  __int64 v57; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v58[8]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v59[16]; // [rsp+98h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-28h] BYREF
  EVENT_DATA_DESCRIPTOR v61; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v63; // [rsp+140h] [rbp+40h]
  __int64 v64; // [rsp+148h] [rbp+48h]
  BOOL *v65; // [rsp+150h] [rbp+50h]
  __int64 v66; // [rsp+158h] [rbp+58h]
  int *v67; // [rsp+160h] [rbp+60h]
  __int64 v68; // [rsp+168h] [rbp+68h]
  int *v69; // [rsp+170h] [rbp+70h]
  __int64 v70; // [rsp+178h] [rbp+78h]
  int *v71; // [rsp+180h] [rbp+80h]
  __int64 v72; // [rsp+188h] [rbp+88h]
  int *v73; // [rsp+190h] [rbp+90h]
  __int64 v74; // [rsp+198h] [rbp+98h]
  int *v75; // [rsp+1A0h] [rbp+A0h]
  __int64 v76; // [rsp+1A8h] [rbp+A8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1B0h] [rbp+B0h] BYREF
  _DWORD *v78; // [rsp+1D0h] [rbp+D0h]
  __int64 v79; // [rsp+1D8h] [rbp+D8h]
  __int64 v80; // [rsp+1E0h] [rbp+E0h]
  _DWORD v81[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  EVENT_DATA_DESCRIPTOR v82; // [rsp+1F0h] [rbp+F0h] BYREF
  _DWORD *v83; // [rsp+210h] [rbp+110h]
  __int64 v84; // [rsp+218h] [rbp+118h]
  __int64 v85; // [rsp+220h] [rbp+120h]
  _DWORD v86[2]; // [rsp+228h] [rbp+128h] BYREF

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
  memset(v59, 0, 0x3CuLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_S(
      (_DWORD)gRimLog,
      v10,
      1,
      46,
      (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
      *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL));
  }
  v11 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v11 )
    v11 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( v11 )
  {
    v32 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
    if ( !v32 )
      v32 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
    if ( !v32 && dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
    {
      v84 = 2LL;
      v83 = v86;
      v85 = *((_QWORD *)v33 + 1);
      v86[0] = *v33;
      v86[1] = 0;
      TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E5206, 0LL, 0LL, 4u, &v82);
    }
  }
  else if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x100uLL) )
  {
    v79 = 2LL;
    v78 = v81;
    v80 = *((_QWORD *)v31 + 1);
    v81[0] = *v31;
    v81[1] = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E51D2, 0LL, 0LL, 4u, &pData);
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
      ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v58, 1, 1);
      if ( (unsigned int)ApiSetIsRemoteConnection() )
      {
LABEL_29:
        ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v58);
        if ( v8 )
        {
          RIMLockExclusive(v4 + 104);
          if ( (*((_DWORD *)v13 + 50) & 0x80u) != 0 )
          {
            RIMLockExclusive(v4 + 568);
            RIMSendLatencyMgtDeviceRequest(v13);
            *(_QWORD *)(v4 + 576) = 0LL;
            ExReleasePushLockExclusiveEx(v4 + 568, 0LL);
            KeLeaveCriticalRegion();
          }
          if ( v14 )
          {
            if ( v9 < 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
            if ( (*((_DWORD *)v13 + 46) & 1) != 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
            RIMSignalOnPnpNotificationAndWait(v4, (_DWORD)v13, 1, 0, 0, 0);
          }
          *(_QWORD *)(v4 + 112) = 0LL;
          ExReleasePushLockExclusiveEx(v4 + 104, 0LL);
          KeLeaveCriticalRegion();
          ObfDereferenceObject(*((PVOID *)v13 + 4));
          ObfDereferenceObject((PVOID)v4);
        }
        return 0LL;
      }
      RIMLockExclusive(v4 + 104);
      if ( *(_BYTE *)(v4 + 80) || *(_BYTE *)(v4 + 81) )
      {
LABEL_28:
        *(_QWORD *)(v4 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(v4 + 104, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_29;
      }
      v13 = *(struct RIMDEV **)(v4 + 424);
      v47 = v13;
      if ( v13 )
      {
        v19 = v13;
        while ( 1 )
        {
          v20 = *((_DWORD *)v13 + 46);
          if ( (v20 & 0x20) == 0
            && (v20 & 0x2000) == 0
            && RtlEqualUnicodeString(*((PCUNICODE_STRING *)NotificationStructure + 5), (PCUNICODE_STRING)v19 + 13, 0) )
          {
            break;
          }
          v19 = (struct RIMDEV *)*((_QWORD *)v13 + 5);
          v47 = v19;
          v13 = v19;
          if ( !v19 )
            goto LABEL_22;
        }
        if ( (*((_DWORD *)v13 + 50) & 0x20) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Sdq(
              *((unsigned __int8 *)v13 + 48),
              *((_QWORD *)NotificationStructure + 5),
              v22,
              47,
              cData,
              *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL),
              *((_BYTE *)v13 + 48),
              *((_QWORD *)v13 + 31));
          if ( !*((_QWORD *)v13 + 31)
            && hProvider > 5u
            && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
          {
            TlgCreateWsz(&pDesc, *((LPCWSTR *)v13 + 27));
            v34 = RimDeviceTypeToRimInputType(v13, *((unsigned __int8 *)v13 + 48));
            v63 = &v56;
            v56 = v34;
            v64 = 8LL;
            v35 = *((_QWORD *)v13 + 31) == 0LL;
            v66 = 4LL;
            v49 = !v35;
            v65 = &v49;
            v36 = __CFSHR__(*((_DWORD *)v13 + 46), 8);
            v68 = 4LL;
            v50 = -v36;
            v67 = &v50;
            v36 = __CFSHR__(*((_DWORD *)v13 + 46), 11);
            v70 = 4LL;
            v51 = -v36;
            v69 = &v51;
            v36 = __CFSHR__(*((_DWORD *)v13 + 46), 19);
            v72 = 4LL;
            v52 = -v36;
            v71 = &v52;
            v36 = __CFSHR__(*((_DWORD *)v13 + 46), 22);
            v74 = 4LL;
            v53 = -v36;
            v73 = &v53;
            v36 = __CFSHR__(*((_DWORD *)v13 + 46), 24);
            v76 = 4LL;
            v54 = -v36;
            v75 = &v54;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E50FB, 0LL, 0LL, 0xAu, &v61);
          }
          if ( *((_BYTE *)v13 + 48) == 3 )
          {
            v48 = 0;
            v55 = 0;
            v57 = 0LL;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v21) = 4;
              WPP_RECORDER_SF_S(
                (_DWORD)gRimLog,
                v21,
                1,
                48,
                (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
                *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL));
            }
            if ( (unsigned int)RIMFindInputDeviceForConfig(
                                 *((_QWORD *)v13 + 58),
                                 v4,
                                 (_DWORD)v13,
                                 (unsigned int)&v48,
                                 (__int64)&v55,
                                 (__int64)&v57)
              && v48
              && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v37) = 4;
              WPP_RECORDER_SF_S(
                (_DWORD)gRimLog,
                v37,
                1,
                49,
                (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
                *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL));
            }
          }
          goto LABEL_28;
        }
      }
LABEL_22:
      memset(&ApcState, 0, sizeof(ApcState));
      v15 = *(const void **)(v4 + 32);
      if ( v15 == (const void *)PsGetCurrentProcess(v17, v16) )
        goto LABEL_23;
      if ( *(_BYTE *)(v4 + 9) )
      {
        DbgPrintGDI(
          "RIMDeviceClassNotify: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping Pnp Notification!",
          *(const void **)(v4 + 72),
          v15,
          *(const void **)(v4 + 40),
          *(_DWORD *)(v4 + 84));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqqD(
            v39,
            v38,
            v40,
            50,
            (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
            *(_QWORD *)(v4 + 72),
            *(_QWORD *)(v4 + 32),
            *(_QWORD *)(v4 + 40),
            *(_DWORD *)(v4 + 84));
      }
      else
      {
        v9 = PsAcquireProcessExitSynchronization(v15);
        if ( v9 < 0 )
        {
LABEL_75:
          v8 = 0;
          v14 = 0;
          goto LABEL_28;
        }
        KeStackAttachProcess(*(PRKPROCESS *)(v4 + 32), &ApcState);
        LOBYTE(v14) = 1;
      }
      if ( v9 >= 0 )
      {
LABEL_23:
        if ( v13 )
        {
          RIMLockExclusive(v4 + 568);
          if ( (*((_DWORD *)v13 + 46) & 0x400) == 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v43);
          v44 = 0;
          if ( (*((_DWORD *)v13 + 50) & 1) != 0 )
          {
            if ( *((_QWORD *)v13 + 28) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v43);
            if ( *((_QWORD *)v13 + 29) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v43);
            if ( (*((_DWORD *)v13 + 46) & 0x80u) != 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v43);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v41) = 4;
              WPP_RECORDER_SF_q(
                (_DWORD)gRimLog,
                v41,
                1,
                51,
                (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
                (char)v13);
            }
          }
          else
          {
            if ( *((int *)v13 + 46) < 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v43);
            if ( *((_QWORD *)v13 + 24) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v43);
            if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
              v44 = 1;
            else
              *((_DWORD *)v13 + 50) |= 2u;
            v13 = v47;
          }
          *(_QWORD *)(v4 + 576) = 0LL;
          ExReleasePushLockExclusiveEx(v4 + 568, 0LL);
          KeLeaveCriticalRegion();
          if ( v44 )
          {
            rimDoRimDevChange(v4, (__int64)v13, 3LL);
            RIMFreeDev(v4, v13);
          }
          v47 = 0LL;
        }
        v9 = RIMCreateDev((PVOID)v4, 0, 0LL, (__int64)&v47);
        if ( (_BYTE)v14 )
        {
          KeUnstackDetachProcess(&ApcState);
          PsReleaseProcessExitSynchronization(*(_QWORD *)(v4 + 32));
        }
        if ( v9 >= 0 )
        {
          ApiSetGetPowerTransitionsState(v59);
          v13 = v47;
          if ( *(struct _KTHREAD **)(v4 + 40) == KeGetCurrentThread() )
          {
            *((_DWORD *)v47 + 46) |= 1u;
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
            v23 = ObReferenceObjectByPointer((PVOID)v4, 3u, ExRawInputManagerObjectType, 1);
            if ( v23 < 0 )
            {
              v8 = 0;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v24) = 4;
                WPP_RECORDER_SF_qd(
                  (_DWORD)gRimLog,
                  v24,
                  1,
                  52,
                  (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
                  v4,
                  v23);
              }
            }
            v9 = ObReferenceObjectByPointer(*((PVOID *)v13 + 4), 3u, ExRawInputManagerObjectType, 1);
            if ( v9 < 0 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
              v8 = 0;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v45) = 4;
                WPP_RECORDER_SF_qd(
                  (_DWORD)gRimLog,
                  v45,
                  1,
                  53,
                  (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
                  v4,
                  v9);
              }
            }
          }
        }
        else
        {
          v13 = v47;
          v8 = 0;
          v14 = 0;
        }
        goto LABEL_28;
      }
      goto LABEL_75;
    }
  }
  return 0LL;
}
