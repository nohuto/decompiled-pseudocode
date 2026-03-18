/*
 * XREFs of RIMUnregisterForInput @ 0x1C0087040
 * Callers:
 *     RIMUnregisterCurrentProcessForInput @ 0x1C003284C (RIMUnregisterCurrentProcessForInput.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C007AF50 (RIMRegisterForInputWithCallbacks.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C0086E50 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     NtRIMUnregisterForInput @ 0x1C010C540 (NtRIMUnregisterForInput.c)
 * Callees:
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C0013110 (-Release@CompositionObject@@QEBA_JXZ.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C004F6D4 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0050744 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00514E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMFreeSpecificDev @ 0x1C00893B0 (RIMFreeSpecificDev.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C0089698 (rimResetPnpRemovePendingStateBits.c)
 *     rimFreeAllUserMem @ 0x1C008F374 (rimFreeAllUserMem.c)
 *     RIMCloseDev @ 0x1C0091218 (RIMCloseDev.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C0095490 (rimFreeAutoRepeatCompleteFrame.c)
 *     rimRemoveFromObTrackList @ 0x1C010BC18 (rimRemoveFromObTrackList.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUnregisterForInput(char *a1)
{
  int v2; // r12d
  char *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int *v9; // r14
  unsigned int v10; // eax
  struct _KTHREAD *v11; // rcx
  void *v12; // rcx
  _QWORD *v13; // rax
  unsigned int v14; // r14d
  __int64 *v15; // rsi
  _DWORD *v16; // r15
  __int64 **v17; // r14
  __int64 *v18; // rsi
  __int64 v19; // rax
  _OWORD *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  void *v23; // rcx
  __int64 v25; // [rsp+28h] [rbp-40h]
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x66u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v2 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v2 >= 0 )
  {
    v3 = (char *)Object;
    WPP_RECORDER_SF_q(gRimLog, 3u, 0x15u, 0x67u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, Object);
    RIMLockExclusive((__int64)(v3 + 104));
    RIMLockExclusive((__int64)(v3 + 568));
    v3[80] = 1;
    v4 = *((_QWORD *)v3 + 53);
    *((_QWORD *)v3 + 53) = 0LL;
    while ( v4 )
    {
      v5 = v4;
      rimFreeAutoRepeatCompleteFrame(v4);
      v9 = (unsigned int *)(v4 + 184);
      v10 = *(_DWORD *)(v4 + 184);
      if ( (v10 & 0x10) != 0 )
      {
        if ( (v10 & 0x20) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
          v10 = *v9;
        }
        *v9 = v10 & 0xFFFFFFEF;
        v11 = *(struct _KTHREAD **)(v4 + 312);
        if ( !v11 || (v3 = (char *)Object, v11 == KeGetCurrentThread()) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v6, v8);
        KeSetEvent(*(PRKEVENT *)(v4 + 352), 1, 0);
      }
      v12 = *(void **)(v4 + 248);
      if ( (*v9 & 0x20) != 0 )
      {
        if ( v12 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v6, v8);
      }
      else if ( v12 )
      {
        IoUnregisterPlugPlayNotification(v12);
        *(_QWORD *)(v4 + 248) = 0LL;
        CompositionObject::Release(*(CompositionObject **)(v4 + 32));
      }
      RIMCloseDev(v4);
      v13 = (_QWORD *)(v4 + 40);
      v4 = *(_QWORD *)(v4 + 40);
      *v13 = 0LL;
      if ( (*v9 & 0x2000) == 0 )
      {
        rimResetPnpRemovePendingStateBits(v5);
        RIMFreeSpecificDev(v3, v5);
      }
    }
    v14 = 0;
    v15 = (__int64 *)(v3 + 312);
    v16 = v3 + 296;
    do
    {
      v2 = RIMUnRegisterForInputDeviceTypeClassNotifications((__int64)v3, v14);
      if ( !*v16 && *v15 )
      {
        Win32FreePool(*v15);
        *v15 = 0LL;
      }
      ++v14;
      ++v16;
      ++v15;
    }
    while ( v14 <= 2 );
    v17 = (__int64 **)(v3 + 552);
    do
    {
      v18 = *v17;
      if ( *v17 == (__int64 *)v17 )
        break;
      v19 = *v18;
      if ( (__int64 **)v18[1] != v17 || *(__int64 **)(v19 + 8) != v18 )
        __fastfail(3u);
      *v17 = (__int64 *)v19;
      *(_QWORD *)(v19 + 8) = v17;
      Win32FreePool((__int64)(v18 - 1));
    }
    while ( v18 != (__int64 *)v17 );
    rimFreeAllUserMem(v3);
    if ( v3[584] && *((_QWORD *)v3 + 81) )
    {
      if ( *((_DWORD *)v3 + 164) )
      {
        v20 = (_OWORD *)*((_QWORD *)v3 + 85);
        if ( (unsigned __int64)v20 >= MmUserProbeAddress )
          v20 = (_OWORD *)MmUserProbeAddress;
        *v20 = 0xC0000128uLL;
      }
      else
      {
        *(_OWORD *)*((_QWORD *)v3 + 85) = 0xC0000128uLL;
      }
      ZwSetEvent(*((HANDLE *)v3 + 81), 0LL);
      ZwClose(*((HANDLE *)v3 + 81));
    }
    v21 = *((_QWORD *)v3 + 52);
    if ( v21 )
    {
      Win32FreePool(v21);
      *((_QWORD *)v3 + 52) = 0LL;
    }
    v22 = *((_QWORD *)v3 + 12);
    if ( v22 )
    {
      Win32FreePool(v22);
      *((_QWORD *)v3 + 12) = 0LL;
      *((_DWORD *)v3 + 22) = 0;
    }
    ZwCancelTimer(*((HANDLE *)v3 + 42), 0LL);
    ZwClose(*((HANDLE *)v3 + 42));
    *((_QWORD *)v3 + 42) = -1LL;
    v23 = (void *)*((_QWORD *)v3 + 43);
    if ( v23 != (void *)-1LL )
    {
      ZwCancelTimer(v23, 0LL);
      ZwClose(*((HANDLE *)v3 + 43));
      *((_QWORD *)v3 + 43) = -1LL;
    }
    ZwClose(*((HANDLE *)v3 + 48));
    *((_QWORD *)v3 + 48) = -1LL;
    v3[81] = 1;
    v3[10] = 1;
    rimRemoveFromObTrackList(v3);
    RIMSignalAllPriorPnpWorkToCompleteWaiters((__int64)v3);
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v3 + 568));
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v3 + 104));
    ObfDereferenceObject(v3);
  }
  LODWORD(v25) = v2;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x68u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v25);
  return (unsigned int)v2;
}
