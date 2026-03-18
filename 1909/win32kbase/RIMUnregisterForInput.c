/*
 * XREFs of RIMUnregisterForInput @ 0x1C00566D0
 * Callers:
 *     RIMUnregisterCurrentProcessForInput @ 0x1C0036E74 (RIMUnregisterCurrentProcessForInput.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C0054C14 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C005A290 (RIMRegisterForInputWithCallbacks.c)
 *     NtRIMUnregisterForInput @ 0x1C01347F0 (NtRIMUnregisterForInput.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 *     RIMCloseDev @ 0x1C005353C (RIMCloseDev.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C0056FFC (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0057A60 (RawInputManagerObjectResolveHandle.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0058258 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     rimFreeAllUserMem @ 0x1C0059648 (rimFreeAllUserMem.c)
 *     RIMFreeSpecificDev @ 0x1C005B798 (RIMFreeSpecificDev.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C005C370 (rimResetPnpRemovePendingStateBits.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00B7CB0 (rimFreeAutoRepeatCompleteFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUnregisterForInput(__int64 a1)
{
  int v2; // edx
  int v3; // r13d
  char *v4; // rbx
  __int64 v5; // rsi
  unsigned int v6; // r15d
  __int64 *v7; // rsi
  _DWORD *v8; // r12
  __int64 **v9; // rsi
  __int64 *v10; // rcx
  int v11; // r15d
  _OWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  void *v15; // rcx
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int *v21; // r15
  unsigned int v22; // eax
  void *v23; // rcx
  _QWORD *v24; // rax
  struct _KTHREAD *v25; // rcx
  __int64 v26; // rax
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 100, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  v3 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v3 >= 0 )
  {
    v4 = (char *)Object;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 4;
      WPP_RECORDER_SF_q(
        (_DWORD)gRimLog,
        v2,
        1,
        101,
        (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids,
        (char)Object);
    }
    RIMLockExclusive((__int64)(v4 + 104));
    RIMLockExclusive((__int64)(v4 + 568));
    v4[80] = 1;
    v5 = *((_QWORD *)v4 + 53);
    *((_QWORD *)v4 + 53) = 0LL;
    while ( v5 )
    {
      v17 = v5;
      rimFreeAutoRepeatCompleteFrame(v5);
      v21 = (unsigned int *)(v5 + 184);
      v22 = *(_DWORD *)(v5 + 184);
      if ( (v22 & 0x10) != 0 )
      {
        if ( (v22 & 0x20) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
          v22 = *v21;
        }
        *v21 = v22 & 0xFFFFFFEF;
        v25 = *(struct _KTHREAD **)(v5 + 312);
        if ( !v25 || (v4 = (char *)Object, v25 == KeGetCurrentThread()) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v18, v20);
        KeSetEvent(*(PRKEVENT *)(v5 + 352), 1, 0);
      }
      if ( (*v21 & 0x20) != 0 )
      {
        if ( *(_QWORD *)(v5 + 248) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
      }
      else
      {
        v23 = *(void **)(v5 + 248);
        if ( v23 )
        {
          IoUnregisterPlugPlayNotification(v23);
          *(_QWORD *)(v5 + 248) = 0LL;
          ObfDereferenceObject(*(PVOID *)(v5 + 32));
        }
      }
      RIMCloseDev(v5);
      v24 = (_QWORD *)(v5 + 40);
      v5 = *(_QWORD *)(v5 + 40);
      *v24 = 0LL;
      if ( (*v21 & 0x2000) == 0 )
      {
        rimResetPnpRemovePendingStateBits(v17);
        RIMFreeSpecificDev(v4, v17);
      }
    }
    v6 = 0;
    v7 = (__int64 *)(v4 + 312);
    v8 = v4 + 296;
    do
    {
      v3 = RIMUnRegisterForInputDeviceTypeClassNotifications(v4, v6);
      if ( !*v8 && *v7 )
      {
        Win32FreePool(*v7);
        *v7 = 0LL;
      }
      ++v6;
      ++v8;
      ++v7;
    }
    while ( v6 <= 2 );
    v9 = (__int64 **)(v4 + 552);
    do
    {
      v10 = *v9;
      if ( *v9 == (__int64 *)v9 )
      {
        v11 = 0;
      }
      else
      {
        v11 = 1;
        v26 = *v10;
        if ( (__int64 **)v10[1] != v9 || *(__int64 **)(v26 + 8) != v10 )
          __fastfail(3u);
        *v9 = (__int64 *)v26;
        *(_QWORD *)(v26 + 8) = v9;
        Win32FreePool((__int64)(v10 - 1));
      }
    }
    while ( v11 );
    rimFreeAllUserMem(v4);
    if ( v4[584] && *((_QWORD *)v4 + 81) )
    {
      if ( *((_DWORD *)v4 + 164) )
      {
        v12 = (_OWORD *)*((_QWORD *)v4 + 85);
        if ( (unsigned __int64)v12 >= MmUserProbeAddress )
          v12 = (_OWORD *)MmUserProbeAddress;
        *v12 = 0xC0000128uLL;
      }
      else
      {
        *(_OWORD *)*((_QWORD *)v4 + 85) = 0xC0000128uLL;
      }
      ZwSetEvent(*((HANDLE *)v4 + 81), 0LL);
      ZwClose(*((HANDLE *)v4 + 81));
    }
    v13 = *((_QWORD *)v4 + 52);
    if ( v13 )
    {
      Win32FreePool(v13);
      *((_QWORD *)v4 + 52) = 0LL;
    }
    v14 = *((_QWORD *)v4 + 12);
    if ( v14 )
    {
      Win32FreePool(v14);
      *((_QWORD *)v4 + 12) = 0LL;
      *((_DWORD *)v4 + 22) = 0;
    }
    ZwCancelTimer(*((HANDLE *)v4 + 42), 0LL);
    ZwClose(*((HANDLE *)v4 + 42));
    *((_QWORD *)v4 + 42) = -1LL;
    v15 = (void *)*((_QWORD *)v4 + 43);
    if ( v15 != (void *)-1LL )
    {
      ZwCancelTimer(v15, 0LL);
      ZwClose(*((HANDLE *)v4 + 43));
      *((_QWORD *)v4 + 43) = -1LL;
    }
    ZwClose(*((HANDLE *)v4 + 48));
    *((_QWORD *)v4 + 48) = -1LL;
    v4[81] = 1;
    RIMSignalAllPriorPnpWorkToCompleteWaiters(v4);
    *((_QWORD *)v4 + 72) = 0LL;
    ExReleasePushLockExclusiveEx(v4 + 568, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)v4 + 14) = 0LL;
    ExReleasePushLockExclusiveEx(v4 + 104, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v2, 1, 102, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v3);
  }
  return (unsigned int)v3;
}
