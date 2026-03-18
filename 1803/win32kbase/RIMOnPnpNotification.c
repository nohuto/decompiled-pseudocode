/*
 * XREFs of RIMOnPnpNotification @ 0x1C00E34B0
 * Callers:
 *     NtRIMOnPnpNotification @ 0x1C00DF750 (NtRIMOnPnpNotification.c)
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x1C01235B0 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0124210 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C000F238 (RimDeviceTypeToRimInputType.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qqSd @ 0x1C00E6394 (WPP_RECORDER_SF_qqSd.c)
 *     RIMTransferKeyboardInjectionDeviceDataFifoToDataBuffer @ 0x1C00F5274 (RIMTransferKeyboardInjectionDeviceDataFifoToDataBuffer.c)
 *     RIMFreeDev @ 0x1C00F78F4 (RIMFreeDev.c)
 *     RIMDoOnPnpNotification @ 0x1C00FAC6C (RIMDoOnPnpNotification.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C00FB1D0 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     rimDoRimDevChange @ 0x1C00FC564 (rimDoRimDevChange.c)
 *     rimDoScheduledSecondaryRimPnpWorkPending @ 0x1C00FC720 (rimDoScheduledSecondaryRimPnpWorkPending.c)
 *     RIMStartDeviceSpecificRead @ 0x1C00FDADC (RIMStartDeviceSpecificRead.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C00FEACC (rimProcessAnyQueuedCompleteFrames.c)
 *     rimSignalReadComplete @ 0x1C00FF81C (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C00FFA5C (rimStackAttachAndProcessInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMOnPnpNotification(char *a1)
{
  unsigned int v2; // r15d
  PVOID v3; // rbx
  char *v4; // r14
  __int64 v5; // rbp
  __int64 i; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  int v11; // eax
  unsigned int v12; // eax
  int v13; // eax
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  char v18; // al
  int v19; // r8d
  __int64 j; // rdi
  __int64 k; // rdi
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // eax
  unsigned __int64 v26; // rax
  __int64 m; // rdi
  char v28; // al
  int v29; // edx
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  struct _KTHREAD *v35; // rcx
  int ObjectType; // [rsp+20h] [rbp-58h]
  KPROCESSOR_MODE AccessMode[8]; // [rsp+28h] [rbp-50h]
  int v39; // [rsp+88h] [rbp+10h]
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x36u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  v39 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  v2 = v39;
  if ( v39 < 0 )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, a1, Object, 0LL, 0LL, 0LL, 0LL, 0);
    goto LABEL_87;
  }
  v3 = Object;
  v4 = (char *)Object + 96;
  RIMLockExclusive((__int64)Object + 96);
  if ( *((_BYTE *)v3 + 73) || *((_BYTE *)v3 + 75) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x3Au,
      (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
    KeBugCheckEx(0x164u, 0x111uLL, (ULONG_PTR)v3, 0LL, 0LL);
  }
  v5 = (__int64)v3 + 552;
  RIMLockExclusive((__int64)v3 + 552);
  if ( *((_DWORD *)v3 + 219) )
  {
    rimDoScheduledSecondaryRimPnpWorkPending(v3);
    _InterlockedDecrement((volatile signed __int32 *)v3 + 219);
    v3 = Object;
  }
  for ( i = *((_QWORD *)v3 + 51); i; i = *(_QWORD *)(i + 40) )
  {
    v7 = *(_DWORD *)(i + 184);
    if ( (v7 & 0x1000) == 0 && *(_BYTE *)(i + 204) && (v7 & 0x40) == 0 )
      RIMStartDeviceSpecificRead(v3, i);
  }
  *(_QWORD *)(v5 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  v10 = *((_QWORD *)v3 + 51);
  if ( !v10 )
    goto LABEL_56;
  do
  {
    if ( *((_QWORD *)v3 + 78) || *((_DWORD *)v3 + 212) )
    {
      v11 = *(_DWORD *)(v10 + 184);
      if ( (v11 & 0x1000) != 0 && (v11 & 0x20000) != 0 )
      {
        if ( *(_QWORD *)(v10 + 344) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
        if ( (!*((_DWORD *)v3 + 212) || (*(_DWORD *)(v10 + 184) & 0x8000) != 0)
          && ObOpenObjectByPointer(
               *(PVOID *)(v10 + 32),
               0,
               0LL,
               3u,
               ExRawInputManagerObjectType,
               0,
               (PHANDLE)(v10 + 344)) < 0 )
        {
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x13u,
            0x37u,
            (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
        }
        else
        {
          rimDoRimDevChange(v3, v10, 2LL);
          v12 = *(_DWORD *)(v10 + 184) & 0xFFFDFFFF;
          *(_DWORD *)(v10 + 184) = v12;
          if ( *((_DWORD *)v3 + 212) )
          {
            v12 |= 0x400000u;
            *(_DWORD *)(v10 + 184) = v12;
          }
          v13 = v12 | 0x1000000;
          *(_DWORD *)(v10 + 184) = v13;
          if ( (v13 & 0x200) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
        }
      }
    }
    v10 = *(_QWORD *)(v10 + 40);
  }
  while ( v10 );
  v14 = *((_QWORD *)v3 + 51);
  v2 = v39;
  if ( !v14 )
    goto LABEL_56;
  do
  {
    if ( *((_QWORD *)v3 + 78) || *((_DWORD *)v3 + 212) )
    {
      v15 = *(_DWORD *)(v14 + 184);
      if ( (v15 & 0x1000) != 0 && (v15 & 0x1000000) != 0 )
      {
        *(_DWORD *)(v14 + 184) = v15 & 0xFEFFFFFF;
        RIMLockExclusive(v5);
        if ( (*(_DWORD *)(v14 + 184) & 0x200) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16);
        if ( (*(_DWORD *)(v14 + 200) & 0x80u) == 0 )
        {
          if ( *((_BYTE *)v3 + 568) )
          {
            v18 = *(_BYTE *)(v14 + 48);
            if ( v18 == 1 )
            {
              if ( (*(_DWORD *)(v14 + 184) & 0x1000) != 0 )
                RIMTransferKeyboardInjectionDeviceDataFifoToDataBuffer(v17, v14);
            }
            else if ( v18 )
            {
              goto LABEL_47;
            }
            *((_BYTE *)v3 + 568) = 0;
            v19 = 500;
            if ( *(_BYTE *)(v14 + 48) != 1 )
              v19 = 476;
            rimStackAttachAndProcessInput((_DWORD)v3, v14, v14 + v19, v14 + 256, 0);
            rimSignalReadComplete(v3, v14);
          }
        }
        else
        {
          rimProcessAnyQueuedCompleteFrames(v3, v14);
        }
LABEL_47:
        *(_QWORD *)(v5 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v5, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    v14 = *(_QWORD *)(v14 + 40);
  }
  while ( v14 );
  for ( j = *((_QWORD *)v3 + 51); j; j = *(_QWORD *)(j + 40) )
  {
    if ( (*((_QWORD *)v3 + 78) || *((_DWORD *)v3 + 212)) && (*(_DWORD *)(j + 184) & 0x80000) != 0 )
    {
      rimDoRimDevChange(v3, j, 5LL);
      *(_DWORD *)(j + 184) &= ~0x80000u;
    }
  }
LABEL_56:
  for ( k = *((_QWORD *)v3 + 51); k; k = *(_QWORD *)(k + 40) )
  {
    if ( *((_QWORD *)v3 + 78) || *((_DWORD *)v3 + 212) )
    {
      v22 = *(_DWORD *)(k + 184);
      if ( (v22 & 0x1000) != 0 && (v22 & 0x40000) != 0 )
      {
        if ( *(_QWORD *)(k + 344) || *((_DWORD *)v3 + 212) )
        {
          rimDoRimDevChange(v3, k, 3LL);
          v25 = *(_DWORD *)(k + 184) & 0xFFFBFFFF;
          *(_DWORD *)(k + 184) = v25;
          if ( !*((_DWORD *)v3 + 212) || (v25 & 0x8000) != 0 )
          {
            NtClose(*(HANDLE *)(k + 344));
          }
          else
          {
            *(_DWORD *)(k + 184) = v25 | 0x800000;
            if ( *(_QWORD *)(k + 344) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23);
          }
          v26 = *(_QWORD *)(k + 32);
          *(_QWORD *)(k + 344) = 0LL;
          RIMFreeDev(v3, (v26 + 80) & ((unsigned __int128)-(__int128)v26 >> 64));
          goto LABEL_56;
        }
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x13u,
          0x38u,
          (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
      }
    }
  }
  for ( m = *((_QWORD *)v3 + 51); m; m = *(_QWORD *)(m + 40) )
  {
    if ( (*(_DWORD *)(m + 184) & 0x10) != 0 )
    {
      v28 = RimDeviceTypeToRimInputType(m, *(unsigned __int8 *)(m + 48));
      WPP_RECORDER_SF_qqSd(
        WPP_GLOBAL_Control->DeviceExtension,
        v29,
        v30,
        v31,
        ObjectType,
        (char)v3,
        m,
        *(_QWORD *)(m + 216),
        v28);
      v34 = *(_DWORD *)(m + 184);
      if ( (v34 & 0x20) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32);
        v34 = *(_DWORD *)(m + 184);
      }
      if ( (v34 & 0x1000) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32);
      v35 = *(struct _KTHREAD **)(m + 312);
      if ( !v35 || (v3 = Object, v35 == KeGetCurrentThread()) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v32);
      RIMDoOnPnpNotification(v3, m);
      *(_DWORD *)(m + 184) &= ~0x10u;
      KeSetEvent(*(PRKEVENT *)(m + 352), 1, 0);
    }
  }
  RIMSignalAllPriorPnpWorkToCompleteWaiters(v3);
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
  ObfDereferenceObject(v3);
LABEL_87:
  *(_DWORD *)AccessMode = v2;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x3Bu,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    *(_QWORD *)AccessMode);
  return v2;
}
