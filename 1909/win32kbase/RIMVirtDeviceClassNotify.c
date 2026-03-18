/*
 * XREFs of RIMVirtDeviceClassNotify @ 0x1C014E8E4
 * Callers:
 *     ?ivHandlePnpCreatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018ADB0 (-ivHandlePnpCreatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 *     rimDoRimDevChange @ 0x1C0055BCC (rimDoRimDevChange.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C005766C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0057AD4 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     DeviceTypeToRimInputType @ 0x1C0058340 (DeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_S @ 0x1C005836C (WPP_RECORDER_SF_S.c)
 *     RIMDoOnPnpNotification @ 0x1C00A4EFC (RIMDoOnPnpNotification.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C00A540C (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     WPP_RECORDER_SF_qd @ 0x1C011C630 (WPP_RECORDER_SF_qd.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C011E9D0 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C01331FC (WPP_RECORDER_SF_qqqD.c)
 *     RIMFreeDev @ 0x1C014B7F4 (RIMFreeDev.c)
 *     RIMVirtCreateDev @ 0x1C014B864 (RIMVirtCreateDev.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C014E5F0 (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sdq @ 0x1C014F464 (WPP_RECORDER_SF_Sdq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMVirtDeviceClassNotify(char *Object, __int64 a2)
{
  int Dev; // r14d
  int v5; // edx
  int v6; // ebx
  int v7; // edx
  __int64 v8; // rdi
  int v9; // r12d
  const UNICODE_STRING *v10; // rcx
  int v11; // eax
  int v12; // edx
  int v13; // r8d
  const void *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r14d
  __int64 v24; // r8
  __int64 v25; // r8
  NTSTATUS v26; // eax
  int v27; // edx
  NTSTATUS v28; // eax
  int v29; // edx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v34; // [rsp+20h] [rbp-A9h]
  __int64 v35; // [rsp+58h] [rbp-71h] BYREF
  int v36; // [rsp+60h] [rbp-69h]
  _BYTE v37[8]; // [rsp+68h] [rbp-61h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-59h] BYREF
  _BYTE v39[64]; // [rsp+A0h] [rbp-29h] BYREF

  Dev = -1073741823;
  memset(v39, 0, 0x3CuLL);
  v6 = *(_DWORD *)(a2 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v5, 1, 67, (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_S(
        (_DWORD)gRimLog,
        v7,
        1,
        68,
        (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
        *(_QWORD *)(a2 + 8));
    }
  }
  v8 = 0LL;
  v9 = 0;
  v36 = 0;
  if ( !Object[81] && ((unsigned int)DeviceTypeToRimInputType(v6) & *((_DWORD *)Object + 21)) != 0 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v37, 1, 1u);
    RIMLockExclusive((__int64)(Object + 104));
    if ( Object[80] || Object[81] )
    {
LABEL_63:
      *((_QWORD *)Object + 14) = 0LL;
      ExReleasePushLockExclusiveEx(Object + 104, 0LL);
      KeLeaveCriticalRegion();
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v37);
      if ( v36 )
      {
        RIMLockExclusive((__int64)(Object + 104));
        if ( (*(_DWORD *)(v8 + 200) & 0x80u) != 0 )
        {
          RIMLockExclusive((__int64)(Object + 568));
          *((_QWORD *)Object + 72) = 0LL;
          ExReleasePushLockExclusiveEx(Object + 568, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( v9 )
        {
          if ( Dev < 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32);
          if ( (*(_DWORD *)(v8 + 184) & 1) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32);
          RIMSignalOnPnpNotificationAndWait((__int64)Object, v8, 1, 0, 0, 0);
        }
        *((_QWORD *)Object + 14) = 0LL;
        ExReleasePushLockExclusiveEx(Object + 104, 0LL);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(*(PVOID *)(v8 + 32));
        ObfDereferenceObject(Object);
      }
      return 0LL;
    }
    v8 = *((_QWORD *)Object + 53);
    v35 = v8;
    if ( v8 )
    {
      v10 = (const UNICODE_STRING *)v8;
      while ( 1 )
      {
        v11 = *(_DWORD *)(v8 + 184);
        if ( (v11 & 0x20) == 0 && (v11 & 0x2000) == 0 && RtlEqualUnicodeString((PCUNICODE_STRING)a2, v10 + 13, 0) )
          break;
        v10 = *(const UNICODE_STRING **)(v8 + 40);
        v35 = (__int64)v10;
        v8 = (__int64)v10;
        if ( !v10 )
          goto LABEL_14;
      }
      if ( (*(_DWORD *)(v8 + 200) & 0x20) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Sdq(
            *(unsigned __int8 *)(v8 + 48),
            v12,
            v13,
            69,
            v34,
            *(_QWORD *)(a2 + 8),
            *(_BYTE *)(v8 + 48),
            *(_QWORD *)(v8 + 248));
        goto LABEL_63;
      }
    }
LABEL_14:
    memset(&ApcState, 0, sizeof(ApcState));
    v14 = (const void *)*((_QWORD *)Object + 4);
    if ( v14 == (const void *)PsGetCurrentProcess(v16, v15) )
      goto LABEL_24;
    if ( Object[9] )
    {
      DbgPrintGDI(
        "RIMVirtDeviceClassNotify: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping Pnp Notification!",
        *((const void **)Object + 9),
        v14,
        *((const void **)Object + 5),
        *((_DWORD *)Object + 21));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqqD(
          v18,
          v17,
          v19,
          70,
          (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
          *((_QWORD *)Object + 9),
          *((_QWORD *)Object + 4),
          *((_QWORD *)Object + 5),
          *((_DWORD *)Object + 21));
    }
    else
    {
      Dev = PsAcquireProcessExitSynchronization(v14);
      if ( Dev < 0 )
        goto LABEL_62;
      KeStackAttachProcess(*((PRKPROCESS *)Object + 4), &ApcState);
      LOBYTE(v9) = 1;
    }
    if ( Dev >= 0 )
    {
LABEL_24:
      if ( v8 )
      {
        RIMLockExclusive((__int64)(Object + 568));
        if ( (*(_DWORD *)(v8 + 184) & 0x400) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
        v23 = 0;
        if ( (*(_DWORD *)(v8 + 200) & 1) != 0 )
        {
          if ( *(_QWORD *)(v8 + 224) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
          if ( *(_QWORD *)(v8 + 232) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
          if ( (*(_DWORD *)(v8 + 184) & 0x80u) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v20) = 4;
            WPP_RECORDER_SF_q(
              (_DWORD)gRimLog,
              v20,
              1,
              71,
              (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
              v8);
          }
        }
        else
        {
          if ( *(int *)(v8 + 184) < 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
          if ( *(_QWORD *)(v8 + 192) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
            v23 = 1;
          else
            *(_DWORD *)(v8 + 200) |= 2u;
          v8 = v35;
        }
        *((_QWORD *)Object + 72) = 0LL;
        ExReleasePushLockExclusiveEx(Object + 568, 0LL);
        KeLeaveCriticalRegion();
        if ( v23 )
        {
          rimDoRimDevChange((__int64)Object, v8, 3LL);
          RIMFreeDev((__int64)Object, v8, v24);
        }
        v35 = 0LL;
      }
      Dev = RIMVirtCreateDev(
              (CDeviceIdentity **)Object,
              *(unsigned int *)(a2 + 16),
              a2,
              *(_DWORD *)(a2 + 20),
              a2,
              (struct _UNICODE_STRING **)&v35);
      if ( (_BYTE)v9 )
      {
        KeUnstackDetachProcess(&ApcState);
        PsReleaseProcessExitSynchronization(*((_QWORD *)Object + 4));
      }
      if ( Dev >= 0 && !*(_DWORD *)(a2 + 20) )
      {
        ApiSetGetPowerTransitionsState(v39);
        v8 = v35;
        if ( *((struct _KTHREAD **)Object + 5) == KeGetCurrentThread() )
        {
          *(_DWORD *)(v35 + 184) |= 1u;
          v9 = 0;
          Dev = RIMDoOnPnpNotification(Object, v8, v25);
        }
        else
        {
          v9 = 1;
        }
        if ( Dev >= 0 )
        {
          v36 = 1;
          v26 = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1);
          if ( v26 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v27) = 4;
            WPP_RECORDER_SF_qd(
              (_DWORD)gRimLog,
              v27,
              1,
              72,
              (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
              (char)Object,
              v26);
          }
          v28 = ObReferenceObjectByPointer(*(PVOID *)(v8 + 32), 3u, ExRawInputManagerObjectType, 1);
          Dev = v28;
          if ( v28 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v29) = 4;
            WPP_RECORDER_SF_qd(
              (_DWORD)gRimLog,
              v29,
              1,
              73,
              (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids,
              (char)Object,
              v28);
          }
        }
        goto LABEL_63;
      }
      v8 = v35;
    }
LABEL_62:
    v9 = 0;
    goto LABEL_63;
  }
  return 0LL;
}
