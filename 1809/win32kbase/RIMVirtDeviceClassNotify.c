/*
 * XREFs of RIMVirtDeviceClassNotify @ 0x1C01248AC
 * Callers:
 *     ?ivCallback@CHidInput@@MEAAJPEAX@Z @ 0x1C014D340 (-ivCallback@CHidInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x1C004E4B0 (rimDoRimDevChange.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     ApiSetIsRemoteConnection @ 0x1C00503D8 (ApiSetIsRemoteConnection.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0050484 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     DeviceTypeToRimInputType @ 0x1C0050820 (DeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_S @ 0x1C005098C (WPP_RECORDER_SF_S.c)
 *     RIMDoOnPnpNotification @ 0x1C009206C (RIMDoOnPnpNotification.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C0094328 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00F4450 (WPP_RECORDER_SF_qd.c)
 *     DbgPrintRIMAlways @ 0x1C00F9910 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C010B51C (WPP_RECORDER_SF_qqqD.c)
 *     RIMFreeDev @ 0x1C0121F30 (RIMFreeDev.c)
 *     RIMVirtCreateDev @ 0x1C0122170 (RIMVirtCreateDev.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C01245D0 (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sdq @ 0x1C012554C (WPP_RECORDER_SF_Sdq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMVirtDeviceClassNotify(char *Object, __int64 a2)
{
  int Dev; // r14d
  int v5; // ebx
  int v6; // r13d
  __int64 v7; // rdi
  int v8; // r12d
  __int64 v9; // rcx
  const UNICODE_STRING *v10; // rax
  int v11; // edx
  int v12; // r8d
  const void *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r14d
  __int64 v21; // r8
  __int64 v22; // r8
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v29; // [rsp+20h] [rbp-A9h]
  __int64 v30; // [rsp+30h] [rbp-99h]
  __int64 v31; // [rsp+58h] [rbp-71h] BYREF
  int v32; // [rsp+60h] [rbp-69h]
  _DWORD v33[2]; // [rsp+68h] [rbp-61h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-59h] BYREF
  _BYTE v35[64]; // [rsp+A0h] [rbp-29h] BYREF

  Dev = -1073741823;
  memset(v35, 0, 0x3CuLL);
  v5 = *(_DWORD *)(a2 + 16);
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x43u, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids);
  WPP_RECORDER_SF_S(
    gRimLog,
    3u,
    0x15u,
    0x44u,
    (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
    *(const struct _MCGEN_TRACE_CONTEXT **)(a2 + 8));
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  v32 = 0;
  if ( Object[81] || ((unsigned int)DeviceTypeToRimInputType(v5) & *((_DWORD *)Object + 21)) == 0 )
    return 0LL;
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v33, 1, 1u);
  if ( !(unsigned int)ApiSetIsRemoteConnection() )
  {
    RIMLockExclusive((__int64)(Object + 104));
    if ( Object[80] || Object[81] )
      goto LABEL_55;
    v7 = *((_QWORD *)Object + 53);
    v31 = v7;
    if ( v7 )
    {
      v10 = (const UNICODE_STRING *)v7;
      while ( 1 )
      {
        v9 = *(unsigned int *)(v7 + 184);
        if ( (v9 & 0x20) == 0 && (v9 & 0x2000) == 0 && RtlEqualUnicodeString((PCUNICODE_STRING)a2, v10 + 13, 0) )
          break;
        v10 = *(const UNICODE_STRING **)(v7 + 40);
        v31 = (__int64)v10;
        v7 = (__int64)v10;
        if ( !v10 )
          goto LABEL_12;
      }
      if ( (*(_DWORD *)(v7 + 200) & 0x20) != 0 )
      {
        WPP_RECORDER_SF_Sdq(
          *(unsigned __int8 *)(v7 + 48),
          v11,
          v12,
          69,
          v29,
          *(_QWORD *)(a2 + 8),
          *(_BYTE *)(v7 + 48),
          *(_QWORD *)(v7 + 248));
LABEL_55:
        *((_QWORD *)Object + 14) = 0LL;
        ExReleasePushLockExclusiveEx(Object + 104, 0LL);
        KeLeaveCriticalRegion();
        v6 = v32;
        goto LABEL_56;
      }
    }
LABEL_12:
    v13 = (const void *)*((_QWORD *)Object + 4);
    if ( v13 == (const void *)PsGetCurrentProcess(v9) )
      goto LABEL_20;
    if ( Object[10] )
    {
      DbgPrintRIMAlways(
        "RIMVirtDeviceClassNotify: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping Pnp Notification!\n",
        *((const void **)Object + 9),
        v13,
        *((const void **)Object + 5),
        *((_DWORD *)Object + 21));
      WPP_RECORDER_SF_qqqD(
        v15,
        v14,
        v16,
        0x46u,
        (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
        *((_QWORD *)Object + 9),
        *((_QWORD *)Object + 4),
        *((_QWORD *)Object + 5),
        *((_DWORD *)Object + 21));
    }
    else
    {
      Dev = PsAcquireProcessExitSynchronization(v13);
      if ( Dev < 0 )
        goto LABEL_54;
      KeStackAttachProcess(*((PRKPROCESS *)Object + 4), &ApcState);
      LOBYTE(v8) = 1;
    }
    if ( Dev >= 0 )
    {
LABEL_20:
      if ( v7 )
      {
        RIMLockExclusive((__int64)(Object + 568));
        if ( (*(_DWORD *)(v7 + 184) & 0x400) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
        v20 = 0;
        if ( (*(_DWORD *)(v7 + 200) & 1) != 0 )
        {
          if ( *(_QWORD *)(v7 + 224) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
          if ( *(_QWORD *)(v7 + 232) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
          if ( (*(_DWORD *)(v7 + 184) & 0x80u) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
          WPP_RECORDER_SF_q(gRimLog, 3u, 0x16u, 0x47u, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids, v7);
        }
        else
        {
          if ( *(int *)(v7 + 184) < 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
          if ( *(_QWORD *)(v7 + 192) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
          if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
            v20 = 1;
          else
            *(_DWORD *)(v7 + 200) |= 2u;
          v7 = v31;
        }
        *((_QWORD *)Object + 72) = 0LL;
        ExReleasePushLockExclusiveEx(Object + 568, 0LL);
        KeLeaveCriticalRegion();
        if ( v20 )
        {
          rimDoRimDevChange((__int64)Object, v7, 3u);
          RIMFreeDev((__int64)Object, v7, v21);
        }
        v31 = 0LL;
      }
      Dev = RIMVirtCreateDev(
              (CDeviceIdentity **)Object,
              *(unsigned int *)(a2 + 16),
              a2,
              *(_DWORD *)(a2 + 20),
              a2,
              (struct _UNICODE_STRING **)&v31);
      if ( (_BYTE)v8 )
      {
        KeUnstackDetachProcess(&ApcState);
        PsReleaseProcessExitSynchronization(*((_QWORD *)Object + 4));
      }
      if ( Dev >= 0 )
      {
        ApiSetGetPowerTransitionsState(v35);
        v7 = v31;
        if ( *((struct _KTHREAD **)Object + 5) == KeGetCurrentThread() )
        {
          *(_DWORD *)(v31 + 184) |= 1u;
          Dev = RIMDoOnPnpNotification(Object, v7, v22);
          v8 = 0;
        }
        else
        {
          v8 = 1;
        }
        if ( Dev >= 0 )
        {
          v32 = 1;
          v23 = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1);
          if ( v23 < 0 )
          {
            LODWORD(v30) = v23;
            WPP_RECORDER_SF_qd(
              gRimLog,
              3u,
              0x16u,
              0x48u,
              (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
              Object,
              v30);
          }
          v24 = ObReferenceObjectByPointer(*(PVOID *)(v7 + 32), 3u, ExRawInputManagerObjectType, 1);
          Dev = v24;
          if ( v24 < 0 )
          {
            LODWORD(v30) = v24;
            WPP_RECORDER_SF_qd(
              gRimLog,
              3u,
              0x16u,
              0x49u,
              (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
              Object,
              v30);
          }
        }
        goto LABEL_55;
      }
      v7 = v31;
    }
LABEL_54:
    v8 = 0;
    goto LABEL_55;
  }
LABEL_56:
  if ( v33[0] && !v33[1] && (int)IsLeaveEditionCritSupported() >= 0 )
    LeaveEditionCrit();
  if ( v6 )
  {
    RIMLockExclusive((__int64)(Object + 104));
    if ( (*(_DWORD *)(v7 + 200) & 0x80u) != 0 )
    {
      RIMLockExclusive((__int64)(Object + 568));
      *((_QWORD *)Object + 72) = 0LL;
      ExReleasePushLockExclusiveEx(Object + 568, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v8 )
    {
      if ( Dev < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
      if ( (*(_DWORD *)(v7 + 184) & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
      RIMSignalOnPnpNotificationAndWait((__int64)Object, v7, 1, 0, 0, 0);
    }
    *((_QWORD *)Object + 14) = 0LL;
    ExReleasePushLockExclusiveEx(Object + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(*(PVOID *)(v7 + 32));
    ObfDereferenceObject(Object);
  }
  return 0LL;
}
