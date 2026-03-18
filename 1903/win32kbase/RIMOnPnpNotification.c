/*
 * XREFs of RIMOnPnpNotification @ 0x1C006B250
 * Callers:
 *     NtRIMOnPnpNotification @ 0x1C006A200 (NtRIMOnPnpNotification.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0098840 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x1C0178B90 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     rimOnPnpRemoveComplete @ 0x1C0069434 (rimOnPnpRemoveComplete.c)
 *     rimDoRimDevChange @ 0x1C0069B2C (rimDoRimDevChange.c)
 *     rimDoScheduledUserModeRimPnpRegistration @ 0x1C0069C8C (rimDoScheduledUserModeRimPnpRegistration.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C006AF5C (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C006B9C0 (RawInputManagerObjectResolveHandle.c)
 *     RimDeviceTypeToRimInputType @ 0x1C006C978 (RimDeviceTypeToRimInputType.c)
 *     RIMStartDeviceSpecificRead @ 0x1C006F2B0 (RIMStartDeviceSpecificRead.c)
 *     RIMDoOnPnpNotification @ 0x1C00A5F4C (RIMDoOnPnpNotification.c)
 *     WPP_RECORDER_SF_qqSd @ 0x1C013AC24 (WPP_RECORDER_SF_qqSd.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C014B948 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     RIMFreeDev @ 0x1C014DE64 (RIMFreeDev.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0153230 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimSignalReadComplete @ 0x1C01542AC (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C0154534 (rimStackAttachAndProcessInput.c)
 *     rimUpdateLatestMouseState @ 0x1C0154684 (rimUpdateLatestMouseState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMOnPnpNotification(__int64 a1)
{
  int v2; // r15d
  char *v3; // rbx
  char *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 i; // rdi
  __int64 v9; // r8
  __int64 j; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 m; // rdi
  __int64 n; // rdi
  int v17; // edx
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  __int64 v25; // rdi
  int v26; // eax
  __int64 k; // rdi
  int v28; // eax
  NTSTATUS v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // r8d
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned int v39; // eax
  unsigned __int64 v40; // rax
  char v41; // al
  int v42; // edx
  int v43; // ecx
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // rcx
  struct _KTHREAD *v47; // rcx
  struct _KEVENT *v48; // rcx
  int ObjectType; // [rsp+20h] [rbp-58h]
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 53, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  v2 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v2 < 0 )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, a1, Object, 0LL, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    v3 = (char *)Object;
    v4 = (char *)Object + 104;
    RIMLockExclusive((__int64)Object + 104);
    if ( v3[81] || v3[82] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 57, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      KeBugCheckEx(0x164u, 0x111uLL, (ULONG_PTR)v3, 0LL, 0LL);
    }
    if ( v3[392] )
    {
      v3[392] = 0;
      *((_QWORD *)v4 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v4, 0LL);
      KeLeaveCriticalRegion();
      v2 = rimDoScheduledUserModeRimPnpRegistration(v3, v19, v20);
      RIMLockExclusive((__int64)v4);
    }
    if ( v3[393] )
    {
      v3[393] = 0;
      if ( *((_DWORD *)v3 + 216) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
      for ( i = *((_QWORD *)v3 + 53); i; i = *(_QWORD *)(i + 40) )
      {
        v28 = *(_DWORD *)(i + 184);
        if ( (v28 & 0x2000) == 0 && (v28 & 0x400) == 0 )
        {
          *(_DWORD *)(i + 184) = v28 | 8;
          rimOnPnpRemoveComplete((__int64)v3, i, v7);
        }
      }
    }
    RIMLockExclusive((__int64)(v3 + 568));
    for ( j = *((_QWORD *)v3 + 53); j; j = *(_QWORD *)(j + 40) )
    {
      v21 = *(_DWORD *)(j + 184);
      if ( (v21 & 0x2000) == 0 && *(_BYTE *)(j + 204) && (v21 & 0x80u) == 0 )
        RIMStartDeviceSpecificRead(v3, j, v9);
    }
    *((_QWORD *)v3 + 72) = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 568, 0LL);
    KeLeaveCriticalRegion();
    v14 = *((_QWORD *)v3 + 53);
    if ( v14 )
    {
      do
      {
        if ( *((_QWORD *)v3 + 80) || *((_DWORD *)v3 + 216) )
        {
          v24 = *(_DWORD *)(v14 + 184);
          if ( (v24 & 0x2000) != 0 && (v24 & 0x20000) != 0 )
          {
            if ( *(_QWORD *)(v14 + 344) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
            if ( *((_DWORD *)v3 + 216) )
              v29 = 0;
            else
              v29 = ObOpenObjectByPointer(
                      *(PVOID *)(v14 + 32),
                      0,
                      0LL,
                      3u,
                      ExRawInputManagerObjectType,
                      0,
                      (PHANDLE)(v14 + 344));
            if ( v29 < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v11) = 3;
                WPP_RECORDER_SF_D(
                  (_DWORD)gRimLog,
                  v11,
                  1,
                  54,
                  (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids,
                  v29);
              }
            }
            else
            {
              rimDoRimDevChange((__int64)v3, v14, 2LL);
              v30 = *(_DWORD *)(v14 + 184) & 0xFFFDFFFF;
              *(_DWORD *)(v14 + 184) = v30;
              if ( *((_DWORD *)v3 + 216) )
                v30 |= 0x400000u;
              v31 = v30 | 0x1000000;
              *(_DWORD *)(v14 + 184) = v31;
              if ( (v31 & 0x400) != 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
            }
          }
        }
        v14 = *(_QWORD *)(v14 + 40);
      }
      while ( v14 );
      v25 = *((_QWORD *)v3 + 53);
      if ( v25 )
      {
        do
        {
          if ( *((_QWORD *)v3 + 80) || *((_DWORD *)v3 + 216) )
          {
            v26 = *(_DWORD *)(v25 + 184);
            if ( (v26 & 0x2000) != 0 && (v26 & 0x1000000) != 0 )
            {
              *(_DWORD *)(v25 + 184) = v26 & 0xFEFFFFFF;
              RIMLockExclusive((__int64)(v3 + 568));
              if ( (*(_DWORD *)(v25 + 184) & 0x400) != 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34);
              if ( (*(_DWORD *)(v25 + 200) & 0x80u) == 0 )
              {
                if ( v3[584] )
                {
                  LOBYTE(v33) = *(_BYTE *)(v25 + 48);
                  if ( (unsigned __int8)v33 <= 1u )
                  {
                    if ( (*(_DWORD *)(v25 + 184) & 0x2000) != 0 )
                    {
                      RIMTransferInjectionDeviceDataFifoToDataBuffer(v33, v25);
                      LOBYTE(v33) = *(_BYTE *)(v25 + 48);
                    }
                    if ( !(_BYTE)v33 )
                      rimUpdateLatestMouseState(v33, v25);
                    v3[584] = 0;
                    v35 = 504;
                    if ( *(_BYTE *)(v25 + 48) != 1 )
                      v35 = 476;
                    rimStackAttachAndProcessInput((_DWORD)v3, v25, v25 + v35, v25 + 256, 0);
                    rimSignalReadComplete((struct RawInputManagerObject *)v3, (struct RIMDEV *)v25);
                  }
                }
              }
              else
              {
                rimProcessAnyQueuedCompleteFrames((struct RawInputManagerObject *)v3);
              }
              *((_QWORD *)v3 + 72) = 0LL;
              ExReleasePushLockExclusiveEx(v3 + 568, 0LL);
              KeLeaveCriticalRegion();
            }
          }
          v25 = *(_QWORD *)(v25 + 40);
        }
        while ( v25 );
        for ( k = *((_QWORD *)v3 + 53); k; k = *(_QWORD *)(k + 40) )
        {
          if ( (*((_QWORD *)v3 + 80) || *((_DWORD *)v3 + 216)) && (*(_DWORD *)(k + 184) & 0x80000) != 0 )
          {
            rimDoRimDevChange((__int64)v3, k, 5LL);
            *(_DWORD *)(k + 184) &= ~0x80000u;
          }
        }
      }
    }
LABEL_16:
    for ( m = *((_QWORD *)v3 + 53); m; m = *(_QWORD *)(m + 40) )
    {
      if ( *((_QWORD *)v3 + 80) || *((_DWORD *)v3 + 216) )
      {
        v22 = *(_DWORD *)(m + 184);
        if ( (v22 & 0x2000) != 0 && (v22 & 0x40000) != 0 )
        {
          if ( *(_QWORD *)(m + 344) || *((_DWORD *)v3 + 216) )
          {
            rimDoRimDevChange((__int64)v3, m, 3LL);
            v39 = *(_DWORD *)(m + 184) & 0xFFFBFFFF;
            *(_DWORD *)(m + 184) = v39;
            if ( *((_DWORD *)v3 + 216) )
            {
              *(_DWORD *)(m + 184) = v39 | 0x800000;
              if ( *(_QWORD *)(m + 344) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v38);
            }
            else
            {
              NtClose(*(HANDLE *)(m + 344));
            }
            v40 = *(_QWORD *)(m + 32);
            *(_QWORD *)(m + 344) = 0LL;
            RIMFreeDev(v3, (v40 + 88) & ((unsigned __int128)-(__int128)v40 >> 64));
            goto LABEL_16;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 55, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
        }
      }
    }
    for ( n = *((_QWORD *)v3 + 53); n; n = *(_QWORD *)(n + 40) )
    {
      v23 = *(_DWORD *)(n + 184);
      if ( (v23 & 0x10) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v41 = RimDeviceTypeToRimInputType(n, *(unsigned __int8 *)(n + 48));
          WPP_RECORDER_SF_qqSd(v43, v42, v44, v45, ObjectType, (char)v3, n, *(_QWORD *)(n + 216), v41);
          v23 = *(_DWORD *)(n + 184);
        }
        v46 = v23;
        if ( (v23 & 0x20) != 0 && (v23 & 0x40) == 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v11, v13);
          v46 = *(unsigned int *)(n + 184);
        }
        if ( (v46 & 0x2000) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v11, v13);
        v47 = *(struct _KTHREAD **)(n + 312);
        if ( !v47 || (v3 = (char *)Object, v47 == KeGetCurrentThread()) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v11, v13);
        RIMDoOnPnpNotification(v3, n);
        v48 = *(struct _KEVENT **)(n + 352);
        *(_DWORD *)(n + 184) &= ~0x10u;
        KeSetEvent(v48, 1, 0);
      }
    }
    RIMSignalAllPriorPnpWorkToCompleteWaiters((__int64)v3);
    *((_QWORD *)v4 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v3);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v17, 1, 58, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v2);
  }
  return (unsigned int)v2;
}
