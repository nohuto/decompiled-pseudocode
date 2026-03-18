/*
 * XREFs of RIMOnPnpNotification @ 0x1C004FE90
 * Callers:
 *     NtRIMOnPnpNotification @ 0x1C004E7C0 (NtRIMOnPnpNotification.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0086C40 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x1C0149D10 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     rimOnPnpRemoveComplete @ 0x1C004DB18 (rimOnPnpRemoveComplete.c)
 *     rimDoScheduledUserModeRimPnpRegistration @ 0x1C004DC30 (rimDoScheduledUserModeRimPnpRegistration.c)
 *     rimDoRimDevChange @ 0x1C004E4B0 (rimDoRimDevChange.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C004F6D4 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0051550 (RimDeviceTypeToRimInputType.c)
 *     RIMStartDeviceSpecificRead @ 0x1C008DF48 (RIMStartDeviceSpecificRead.c)
 *     RIMDoOnPnpNotification @ 0x1C009206C (RIMDoOnPnpNotification.c)
 *     WPP_RECORDER_SF_qqSd @ 0x1C010FCC4 (WPP_RECORDER_SF_qqSd.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C011FD64 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     RIMFreeDev @ 0x1C0121F30 (RIMFreeDev.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C012689C (rimProcessAnyQueuedCompleteFrames.c)
 *     rimSignalReadComplete @ 0x1C0127738 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C0127974 (rimStackAttachAndProcessInput.c)
 *     rimUpdateLatestMouseState @ 0x1C0127AA4 (rimUpdateLatestMouseState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdi
  int v22; // eax
  __int64 k; // rdi
  int v24; // eax
  NTSTATUS v25; // eax
  unsigned int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // r8d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned int v35; // eax
  unsigned __int64 v36; // rax
  char v37; // al
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // rdx
  __int64 v43; // r8
  unsigned int v44; // eax
  __int64 v45; // rcx
  struct _KTHREAD *v46; // rcx
  int ObjectType; // [rsp+20h] [rbp-58h]
  KPROCESSOR_MODE AccessMode[8]; // [rsp+28h] [rbp-50h]
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x36u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
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
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x3Au, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
      KeBugCheckEx(0x164u, 0x111uLL, (ULONG_PTR)v3, 0LL, 0LL);
    }
    if ( v3[392] )
    {
      v3[392] = 0;
      *((_QWORD *)v4 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v4, 0LL);
      KeLeaveCriticalRegion();
      v2 = rimDoScheduledUserModeRimPnpRegistration(v3);
      RIMLockExclusive((__int64)v4);
    }
    if ( v3[393] )
    {
      v3[393] = 0;
      if ( *((_DWORD *)v3 + 216) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
      for ( i = *((_QWORD *)v3 + 53); i; i = *(_QWORD *)(i + 40) )
      {
        v24 = *(_DWORD *)(i + 184);
        if ( (v24 & 0x2000) == 0 && (v24 & 0x400) == 0 )
        {
          *(_DWORD *)(i + 184) = v24 | 8;
          rimOnPnpRemoveComplete((__int64)v3, i, v7);
        }
      }
    }
    RIMLockExclusive((__int64)(v3 + 568));
    for ( j = *((_QWORD *)v3 + 53); j; j = *(_QWORD *)(j + 40) )
    {
      v18 = *(_DWORD *)(j + 184);
      if ( (v18 & 0x2000) == 0 && *(_BYTE *)(j + 204) && (v18 & 0x80u) == 0 )
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
          v20 = *(_DWORD *)(v14 + 184);
          if ( (v20 & 0x2000) != 0 && (v20 & 0x20000) != 0 )
          {
            if ( *(_QWORD *)(v14 + 344) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
            if ( *((_DWORD *)v3 + 216) )
              v25 = 0;
            else
              v25 = ObOpenObjectByPointer(
                      *(PVOID *)(v14 + 32),
                      0,
                      0LL,
                      3u,
                      ExRawInputManagerObjectType,
                      0,
                      (PHANDLE)(v14 + 344));
            if ( v25 < 0 )
            {
              WPP_RECORDER_SF_d(gRimLog, 3u, 0x14u, 0x37u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
            }
            else
            {
              rimDoRimDevChange((__int64)v3, v14, 2u);
              v26 = *(_DWORD *)(v14 + 184) & 0xFFFDFFFF;
              *(_DWORD *)(v14 + 184) = v26;
              if ( *((_DWORD *)v3 + 216) )
              {
                v26 |= 0x400000u;
                *(_DWORD *)(v14 + 184) = v26;
              }
              v27 = v26 | 0x1000000;
              *(_DWORD *)(v14 + 184) = v27;
              if ( (v27 & 0x400) != 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
            }
          }
        }
        v14 = *(_QWORD *)(v14 + 40);
      }
      while ( v14 );
      v21 = *((_QWORD *)v3 + 53);
      if ( v21 )
      {
        do
        {
          if ( *((_QWORD *)v3 + 80) || *((_DWORD *)v3 + 216) )
          {
            v22 = *(_DWORD *)(v21 + 184);
            if ( (v22 & 0x2000) != 0 && (v22 & 0x1000000) != 0 )
            {
              *(_DWORD *)(v21 + 184) = v22 & 0xFEFFFFFF;
              RIMLockExclusive((__int64)(v3 + 568));
              if ( (*(_DWORD *)(v21 + 184) & 0x400) != 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
              if ( (*(_DWORD *)(v21 + 200) & 0x80u) == 0 )
              {
                if ( v3[584] )
                {
                  LOBYTE(v29) = *(_BYTE *)(v21 + 48);
                  if ( (unsigned __int8)v29 <= 1u )
                  {
                    if ( (*(_DWORD *)(v21 + 184) & 0x2000) != 0 )
                    {
                      RIMTransferInjectionDeviceDataFifoToDataBuffer(v29, v21);
                      LOBYTE(v29) = *(_BYTE *)(v21 + 48);
                    }
                    if ( !(_BYTE)v29 )
                      rimUpdateLatestMouseState(v29, v21);
                    v3[584] = 0;
                    v31 = 500;
                    if ( *(_BYTE *)(v21 + 48) != 1 )
                      v31 = 476;
                    rimStackAttachAndProcessInput((_DWORD)v3, v21, v21 + v31, v21 + 256, 0);
                    rimSignalReadComplete((struct RawInputManagerObject *)v3, (struct RIMDEV *)v21);
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
          v21 = *(_QWORD *)(v21 + 40);
        }
        while ( v21 );
        for ( k = *((_QWORD *)v3 + 53); k; k = *(_QWORD *)(k + 40) )
        {
          if ( (*((_QWORD *)v3 + 80) || *((_DWORD *)v3 + 216)) && (*(_DWORD *)(k + 184) & 0x80000) != 0 )
          {
            rimDoRimDevChange((__int64)v3, k, 5u);
            *(_DWORD *)(k + 184) &= ~0x80000u;
          }
        }
      }
    }
LABEL_14:
    for ( m = *((_QWORD *)v3 + 53); m; m = *(_QWORD *)(m + 40) )
    {
      if ( *((_QWORD *)v3 + 80) || *((_DWORD *)v3 + 216) )
      {
        v19 = *(_DWORD *)(m + 184);
        if ( (v19 & 0x2000) != 0 && (v19 & 0x40000) != 0 )
        {
          if ( *(_QWORD *)(m + 344) || *((_DWORD *)v3 + 216) )
          {
            rimDoRimDevChange((__int64)v3, m, 3u);
            v35 = *(_DWORD *)(m + 184) & 0xFFFBFFFF;
            *(_DWORD *)(m + 184) = v35;
            if ( *((_DWORD *)v3 + 216) )
            {
              *(_DWORD *)(m + 184) = v35 | 0x800000;
              if ( *(_QWORD *)(m + 344) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34);
            }
            else
            {
              NtClose(*(HANDLE *)(m + 344));
            }
            v36 = *(_QWORD *)(m + 32);
            *(_QWORD *)(m + 344) = 0LL;
            RIMFreeDev(v3, (v36 + 88) & ((unsigned __int128)-(__int128)v36 >> 64));
            goto LABEL_14;
          }
          WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x38u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
        }
      }
    }
    for ( n = *((_QWORD *)v3 + 53); n; n = *(_QWORD *)(n + 40) )
    {
      if ( (*(_DWORD *)(n + 184) & 0x10) != 0 )
      {
        v37 = RimDeviceTypeToRimInputType(n, *(unsigned __int8 *)(n + 48));
        WPP_RECORDER_SF_qqSd(v39, v38, v40, v41, ObjectType, (char)v3, n, *(_QWORD *)(n + 216), v37);
        v44 = *(_DWORD *)(n + 184);
        v45 = v44;
        if ( (v44 & 0x20) != 0 && (v44 & 0x40) == 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v44, v42, v43);
          v45 = *(unsigned int *)(n + 184);
        }
        if ( (v45 & 0x2000) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v42, v43);
        v46 = *(struct _KTHREAD **)(n + 312);
        if ( !v46 || (v3 = (char *)Object, v46 == KeGetCurrentThread()) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v42, v43);
        RIMDoOnPnpNotification(v3, n);
        *(_DWORD *)(n + 184) &= ~0x10u;
        KeSetEvent(*(PRKEVENT *)(n + 352), 1, 0);
      }
    }
    RIMSignalAllPriorPnpWorkToCompleteWaiters((__int64)v3);
    *((_QWORD *)v4 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v3);
  }
  *(_DWORD *)AccessMode = v2;
  WPP_RECORDER_SF_d(
    gRimLog,
    3u,
    0x15u,
    0x3Bu,
    (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids,
    *(_QWORD *)AccessMode);
  return (unsigned int)v2;
}
