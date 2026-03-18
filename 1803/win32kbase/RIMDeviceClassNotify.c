/*
 * XREFs of RIMDeviceClassNotify @ 0x1C00FA2A0
 * Callers:
 *     <none>
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C000F238 (RimDeviceTypeToRimInputType.c)
 *     ApiSetIsRemoteConnection @ 0x1C000F32C (ApiSetIsRemoteConnection.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C000F3BC (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C004E080 (_TlgCreateWsz.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00BCA68 (WPP_RECORDER_SF_qd.c)
 *     DbgPrintRIMAlways @ 0x1C00C3410 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C00DE4B0 (WPP_RECORDER_SF_qqqD.c)
 *     DeviceTypeToRimInputType @ 0x1C00DF1B0 (DeviceTypeToRimInputType.c)
 *     RIMFindInputDeviceForConfig @ 0x1C00EF58C (RIMFindInputDeviceForConfig.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C00F0344 (RIMSendLatencyMgtDeviceRequest.c)
 *     WPP_RECORDER_SF_S @ 0x1C00F08CC (WPP_RECORDER_SF_S.c)
 *     RIMCreateDev @ 0x1C00F7534 (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1C00F78F4 (RIMFreeDev.c)
 *     RIMDoOnPnpNotification @ 0x1C00FAC6C (RIMDoOnPnpNotification.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C00FB238 (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sdq @ 0x1C00FC028 (WPP_RECORDER_SF_Sdq.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C0140A4C (ApiSetGetPowerTransitionsState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeviceClassNotify(char *NotificationStructure, __int64 *Context)
{
  __int64 v2; // r12
  __int64 v4; // rsi
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  int v7; // r14d
  __int64 v8; // rax
  int v9; // r15d
  __int64 v10; // rdi
  int v11; // r13d
  __int64 v12; // rcx
  const UNICODE_STRING *v13; // rax
  int v14; // r8d
  int v15; // r9d
  const void *v16; // r15
  int v17; // eax
  int v18; // r12d
  unsigned int v19; // eax
  bool v20; // zf
  bool v21; // cf
  LPCGUID v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  NTSTATUS v29; // eax
  NTSTATUS v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  int cData; // [rsp+20h] [rbp-E0h]
  __int64 v35; // [rsp+30h] [rbp-D0h]
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  int v37; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v38; // [rsp+64h] [rbp-9Ch] BYREF
  int v39; // [rsp+68h] [rbp-98h] BYREF
  int v40; // [rsp+6Ch] [rbp-94h] BYREF
  int v41; // [rsp+70h] [rbp-90h] BYREF
  int v42; // [rsp+74h] [rbp-8Ch] BYREF
  int v43; // [rsp+78h] [rbp-88h] BYREF
  int v44; // [rsp+7Ch] [rbp-84h] BYREF
  _DWORD v45[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v46; // [rsp+88h] [rbp-78h] BYREF
  __int64 v47; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v48[16]; // [rsp+98h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-28h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v52; // [rsp+140h] [rbp+40h]
  __int64 v53; // [rsp+148h] [rbp+48h]
  BOOL *v54; // [rsp+150h] [rbp+50h]
  __int64 v55; // [rsp+158h] [rbp+58h]
  int *v56; // [rsp+160h] [rbp+60h]
  __int64 v57; // [rsp+168h] [rbp+68h]
  int *v58; // [rsp+170h] [rbp+70h]
  __int64 v59; // [rsp+178h] [rbp+78h]
  int *v60; // [rsp+180h] [rbp+80h]
  __int64 v61; // [rsp+188h] [rbp+88h]
  int *v62; // [rsp+190h] [rbp+90h]
  __int64 v63; // [rsp+198h] [rbp+98h]
  int *v64; // [rsp+1A0h] [rbp+A0h]
  __int64 v65; // [rsp+1A8h] [rbp+A8h]

  v2 = *((unsigned int *)Context + 2);
  v4 = *Context;
  if ( (unsigned int)v2 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(NotificationStructure, Context);
  v5 = *(_QWORD **)(32 * v2 + v4 + 120);
  v6 = *(_QWORD *)(NotificationStructure + 20) - *v5;
  if ( !v6 )
    v6 = *(_QWORD *)(NotificationStructure + 28) - v5[1];
  if ( v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5);
  v7 = -1073741823;
  memset(v48, 0, 0x3CuLL);
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x29u,
    (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids);
  WPP_RECORDER_SF_S(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x2Au,
    (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
    *(const wchar_t **)(*((_QWORD *)NotificationStructure + 5) + 8LL));
  v8 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v8 )
  {
    v9 = 0;
    v10 = 0LL;
    v11 = 0;
    if ( !*(_BYTE *)(v4 + 73) && ((unsigned int)DeviceTypeToRimInputType(v2) & *(_DWORD *)(v4 + 76)) != 0 )
    {
      ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v45, 1, 1u);
      if ( (unsigned int)ApiSetIsRemoteConnection() )
      {
        v18 = 0;
LABEL_73:
        if ( v45[0] && !v45[1] && (int)IsLeaveEditionCritSupported() >= 0 )
          LeaveEditionCrit();
        if ( v9 )
        {
          RIMLockExclusive(v4 + 96);
          if ( (*(_DWORD *)(v10 + 200) & 0x80u) != 0 )
          {
            if ( v48[7] || v48[8] )
              v18 = 1;
            RIMLockExclusive(v4 + 552);
            RIMSendLatencyMgtDeviceRequest((struct _UNICODE_STRING *)v10, *(_QWORD *)(v10 + 464), v18);
            *(_QWORD *)(v4 + 560) = 0LL;
            ExReleasePushLockExclusiveEx(v4 + 552, 0LL);
            KeLeaveCriticalRegion();
          }
          if ( v11 )
          {
            if ( v7 < 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31);
            if ( (*(_DWORD *)(v10 + 184) & 1) != 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31);
            RIMSignalOnPnpNotificationAndWait(v4, v10, 1, 0, 0, 0);
          }
          *(_QWORD *)(v4 + 104) = 0LL;
          ExReleasePushLockExclusiveEx(v4 + 96, 0LL);
          KeLeaveCriticalRegion();
          ObfDereferenceObject(*(PVOID *)(v10 + 32));
          ObfDereferenceObject((PVOID)v4);
        }
        return 0LL;
      }
      RIMLockExclusive(v4 + 96);
      if ( *(_BYTE *)(v4 + 72) || *(_BYTE *)(v4 + 73) )
        goto LABEL_38;
      v10 = *(_QWORD *)(v4 + 408);
      v36 = v10;
      if ( v10 )
      {
        v13 = (const UNICODE_STRING *)v10;
        while ( 1 )
        {
          v12 = *(unsigned int *)(v10 + 184);
          if ( (v12 & 0x20) == 0
            && (v12 & 0x1000) == 0
            && RtlEqualUnicodeString(*((PCUNICODE_STRING *)NotificationStructure + 5), v13 + 13, 0) )
          {
            break;
          }
          v13 = *(const UNICODE_STRING **)(v10 + 40);
          v36 = (__int64)v13;
          v10 = (__int64)v13;
          if ( !v13 )
            goto LABEL_21;
        }
        if ( (*(_DWORD *)(v10 + 200) & 0x20) != 0 )
        {
          WPP_RECORDER_SF_Sdq(
            WPP_GLOBAL_Control->DeviceExtension,
            *((_QWORD *)NotificationStructure + 5),
            v14,
            v15,
            cData,
            *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL),
            *(_BYTE *)(v10 + 48),
            *(_QWORD *)(v10 + 248));
          v18 = 0;
          if ( !*(_QWORD *)(v10 + 248)
            && hProvider > 5u
            && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
          {
            TlgCreateWsz(&pDesc, *(LPCWSTR *)(v10 + 216));
            v19 = RimDeviceTypeToRimInputType(v10, *(unsigned __int8 *)(v10 + 48));
            v52 = &v46;
            v46 = v19;
            v53 = 8LL;
            v20 = *(_QWORD *)(v10 + 248) == 0LL;
            v55 = 4LL;
            v38 = !v20;
            v54 = &v38;
            v21 = __CFSHR__(*(_DWORD *)(v10 + 184), 7);
            v57 = 4LL;
            v39 = -v21;
            v56 = &v39;
            v21 = __CFSHR__(*(_DWORD *)(v10 + 184), 10);
            v59 = 4LL;
            v40 = -v21;
            v58 = &v40;
            v21 = __CFSHR__(*(_DWORD *)(v10 + 184), 19);
            v61 = 4LL;
            v41 = -v21;
            v60 = &v41;
            v21 = __CFSHR__(*(_DWORD *)(v10 + 184), 22);
            v63 = 4LL;
            v42 = -v21;
            v62 = &v42;
            v21 = __CFSHR__(*(_DWORD *)(v10 + 184), 24);
            v65 = 4LL;
            v43 = -v21;
            v64 = &v43;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C017865F, 0LL, v22, 0xAu, &pData);
          }
          if ( *(_BYTE *)(v10 + 48) == 3 )
          {
            v37 = 0;
            v44 = 0;
            v47 = 0LL;
            WPP_RECORDER_SF_S(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              0x14u,
              0x2Cu,
              (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
              *(const wchar_t **)(*((_QWORD *)NotificationStructure + 5) + 8LL));
            if ( (unsigned int)RIMFindInputDeviceForConfig(*(_QWORD *)(v10 + 464), v4, v10, &v37, &v44, &v47) )
            {
              if ( v37 )
                WPP_RECORDER_SF_S(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  0x14u,
                  0x2Du,
                  (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
                  *(const wchar_t **)(*((_QWORD *)NotificationStructure + 5) + 8LL));
            }
          }
          goto LABEL_39;
        }
      }
LABEL_21:
      v16 = *(const void **)(v4 + 32);
      if ( v16 != (const void *)PsGetCurrentProcess(v12) )
      {
        if ( *(_BYTE *)(v4 + 9) )
        {
          DbgPrintRIMAlways(
            "RIMDeviceClassNotify: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping Pnp Notification!\n",
            *(const void **)(v4 + 64),
            v16,
            *(const void **)(v4 + 40),
            *(_DWORD *)(v4 + 76));
          WPP_RECORDER_SF_qqqD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v23,
            v24,
            0x2Eu,
            (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
            *(_QWORD *)(v4 + 64),
            *(_QWORD *)(v4 + 32),
            *(_QWORD *)(v4 + 40),
            *(_DWORD *)(v4 + 76));
        }
        else
        {
          v17 = PsAcquireProcessExitSynchronization(v16);
          v9 = 0;
          v7 = v17;
          if ( v17 < 0 )
          {
LABEL_37:
            v11 = 0;
LABEL_38:
            v18 = 0;
LABEL_39:
            *(_QWORD *)(v4 + 104) = 0LL;
            ExReleasePushLockExclusiveEx(v4 + 96, 0LL);
            KeLeaveCriticalRegion();
            goto LABEL_73;
          }
          KeStackAttachProcess(*(PRKPROCESS *)(v4 + 32), &ApcState);
          LOBYTE(v11) = 1;
        }
        if ( v7 < 0 )
        {
          v9 = 0;
          goto LABEL_37;
        }
      }
      if ( v10 )
      {
        RIMLockExclusive(v4 + 552);
        if ( (*(_DWORD *)(v10 + 184) & 0x200) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25);
        if ( (*(_DWORD *)(v10 + 200) & 1) != 0 )
        {
          if ( *(_QWORD *)(v10 + 224) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25);
          if ( *(_QWORD *)(v10 + 232) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25);
          if ( (*(_DWORD *)(v10 + 184) & 0x40) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25);
          WPP_RECORDER_SF_q(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x15u,
            0x2Fu,
            (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
            v10);
        }
        else
        {
          if ( *(int *)(v10 + 184) < 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25);
          if ( *(_QWORD *)(v10 + 192) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25);
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
          {
            v27 = v36;
            *(_BYTE *)(v4 + 74) = 1;
            RIMFreeDev(v4, v27);
            *(_BYTE *)(v4 + 74) = 0;
          }
          else
          {
            *(_DWORD *)(v10 + 200) |= 2u;
          }
        }
        v36 = 0LL;
        *(_QWORD *)(v4 + 560) = 0LL;
        ExReleasePushLockExclusiveEx(v4 + 552, 0LL);
        KeLeaveCriticalRegion();
      }
      v28 = RIMCreateDev(
              (CDeviceIdentity **)v4,
              (unsigned int)v2,
              *((const UNICODE_STRING **)NotificationStructure + 5),
              0,
              0,
              0LL,
              &v36);
      v18 = 0;
      v7 = v28;
      if ( (_BYTE)v11 )
      {
        KeUnstackDetachProcess(&ApcState);
        PsReleaseProcessExitSynchronization(*(_QWORD *)(v4 + 32));
      }
      if ( v7 < 0 )
      {
        v10 = v36;
        v9 = 0;
        v11 = 0;
      }
      else
      {
        ApiSetGetPowerTransitionsState(v48);
        v10 = v36;
        if ( *(struct _KTHREAD **)(v4 + 40) == KeGetCurrentThread() )
        {
          *(_DWORD *)(v36 + 184) |= 1u;
          v7 = RIMDoOnPnpNotification(v4, v10);
          v11 = 0;
        }
        else
        {
          v11 = 1;
        }
        if ( v7 < 0 )
        {
          v9 = 0;
        }
        else
        {
          v9 = 1;
          v29 = ObReferenceObjectByPointer((PVOID)v4, 3u, ExRawInputManagerObjectType, 1);
          if ( v29 < 0 )
          {
            LODWORD(v35) = v29;
            WPP_RECORDER_SF_qd(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              0x15u,
              0x30u,
              (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
              v4,
              v35);
          }
          v30 = ObReferenceObjectByPointer(*(PVOID *)(v10 + 32), 3u, ExRawInputManagerObjectType, 1);
          v7 = v30;
          if ( v30 < 0 )
          {
            LODWORD(v35) = v30;
            WPP_RECORDER_SF_qd(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              0x15u,
              0x31u,
              (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
              v4,
              v35);
          }
        }
      }
      goto LABEL_39;
    }
  }
  return 0LL;
}
