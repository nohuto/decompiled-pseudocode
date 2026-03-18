/*
 * XREFs of RIMUnregisterForInput @ 0x1C00E5A50
 * Callers:
 *     RIMUnregisterCurrentProcessForInput @ 0x1C003B1F4 (RIMUnregisterCurrentProcessForInput.c)
 *     NtRIMUnregisterForInput @ 0x1C00DFB40 (NtRIMUnregisterForInput.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C00E4800 (RIMRegisterForInputWithCallbacks.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C0121C4C (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     rimFreeAllUserMem @ 0x1C00E86E0 (rimFreeAllUserMem.c)
 *     RIMCloseDev @ 0x1C00F74C0 (RIMCloseDev.c)
 *     RIMFreeSpecificDev @ 0x1C00F7964 (RIMFreeSpecificDev.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C00FB1D0 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C00FB4D4 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C00FD9C4 (rimResetPnpRemovePendingStateBits.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00FE678 (rimFreeAutoRepeatCompleteFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUnregisterForInput(char *a1)
{
  int v2; // r12d
  char *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int *v8; // r14
  unsigned int v9; // eax
  struct _KTHREAD *v10; // rcx
  void *v11; // rcx
  _QWORD *v12; // rax
  unsigned int v13; // r14d
  __int64 *v14; // rsi
  _DWORD *v15; // r15
  __int64 **v16; // r14
  __int64 *v17; // rsi
  __int64 v18; // rax
  _OWORD *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  void *v22; // rcx
  __int64 v24; // [rsp+28h] [rbp-40h]
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x67u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  v2 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v2 >= 0 )
  {
    v3 = (char *)Object;
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      0x68u,
      (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
      Object);
    RIMLockExclusive((__int64)(v3 + 96));
    RIMLockExclusive((__int64)(v3 + 552));
    v3[72] = 1;
    v4 = *((_QWORD *)v3 + 51);
    *((_QWORD *)v3 + 51) = 0LL;
    while ( v4 )
    {
      v5 = v4;
      rimFreeAutoRepeatCompleteFrame(v4);
      v8 = (unsigned int *)(v4 + 184);
      v9 = *(_DWORD *)(v4 + 184);
      if ( (v9 & 0x10) != 0 )
      {
        if ( (v9 & 0x20) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
          v9 = *v8;
        }
        *v8 = v9 & 0xFFFFFFEF;
        v10 = *(struct _KTHREAD **)(v4 + 312);
        if ( !v10 || (v3 = (char *)Object, v10 == KeGetCurrentThread()) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v6);
        KeSetEvent(*(PRKEVENT *)(v4 + 352), 1, 0);
      }
      v11 = *(void **)(v4 + 248);
      if ( (*v8 & 0x20) != 0 )
      {
        if ( v11 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v6);
      }
      else if ( v11 )
      {
        IoUnregisterPlugPlayNotification(v11);
        *(_QWORD *)(v4 + 248) = 0LL;
        ObfDereferenceObject(*(PVOID *)(v4 + 32));
      }
      RIMCloseDev(v4);
      v12 = (_QWORD *)(v4 + 40);
      v4 = *(_QWORD *)(v4 + 40);
      *v12 = 0LL;
      if ( (*v8 & 0x1000) == 0 )
      {
        rimResetPnpRemovePendingStateBits(v5);
        RIMFreeSpecificDev(v3, v5);
      }
    }
    v13 = 0;
    v14 = (__int64 *)(v3 + 304);
    v15 = v3 + 288;
    do
    {
      v2 = RIMUnRegisterForInputDeviceTypeClassNotifications(v3, v13);
      if ( !*v15 && *v14 )
      {
        Win32FreePool(*v14);
        *v14 = 0LL;
      }
      ++v13;
      ++v15;
      ++v14;
    }
    while ( v13 <= 2 );
    v16 = (__int64 **)(v3 + 536);
    do
    {
      v17 = *v16;
      if ( *v16 == (__int64 *)v16 )
        break;
      v18 = *v17;
      if ( (__int64 **)v17[1] != v16 || *(__int64 **)(v18 + 8) != v17 )
        __fastfail(3u);
      *v16 = (__int64 *)v18;
      *(_QWORD *)(v18 + 8) = v16;
      Win32FreePool((__int64)(v17 - 1));
    }
    while ( v17 != (__int64 *)v16 );
    rimFreeAllUserMem(v3);
    if ( v3[568] && *((_QWORD *)v3 + 79) )
    {
      if ( *((_DWORD *)v3 + 160) )
      {
        v19 = (_OWORD *)*((_QWORD *)v3 + 83);
        if ( (unsigned __int64)v19 >= MmUserProbeAddress )
          v19 = (_OWORD *)MmUserProbeAddress;
        *v19 = 0xC0000128uLL;
      }
      else
      {
        *(_OWORD *)*((_QWORD *)v3 + 83) = 0xC0000128uLL;
      }
      ZwSetEvent(*((HANDLE *)v3 + 79), 0LL);
      ZwClose(*((HANDLE *)v3 + 79));
    }
    v20 = *((_QWORD *)v3 + 50);
    if ( v20 )
    {
      Win32FreePool(v20);
      *((_QWORD *)v3 + 50) = 0LL;
    }
    v21 = *((_QWORD *)v3 + 11);
    if ( v21 )
    {
      Win32FreePool(v21);
      *((_QWORD *)v3 + 11) = 0LL;
      *((_DWORD *)v3 + 20) = 0;
    }
    ZwCancelTimer(*((HANDLE *)v3 + 41), 0LL);
    ZwClose(*((HANDLE *)v3 + 41));
    *((_QWORD *)v3 + 41) = -1LL;
    v22 = (void *)*((_QWORD *)v3 + 42);
    if ( v22 != (void *)-1LL )
    {
      ZwCancelTimer(v22, 0LL);
      ZwClose(*((HANDLE *)v3 + 42));
      *((_QWORD *)v3 + 42) = -1LL;
    }
    ZwClose(*((HANDLE *)v3 + 47));
    *((_QWORD *)v3 + 47) = -1LL;
    v3[73] = 1;
    RIMSignalAllPriorPnpWorkToCompleteWaiters(v3);
    *((_QWORD *)v3 + 70) = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 552, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)v3 + 13) = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v3);
  }
  LODWORD(v24) = v2;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x69u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    v24);
  return (unsigned int)v2;
}
