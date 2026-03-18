/*
 * XREFs of rimPassivateSecondaryRims @ 0x1C00FD684
 * Callers:
 *     RIMDiscoverDevicesOfInputType @ 0x1C00F9D88 (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RIMCloseDev @ 0x1C00F74C0 (RIMCloseDev.c)
 *     RIMFreeSpecificDev @ 0x1C00F7964 (RIMFreeSpecificDev.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C00FB4D4 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C00FD9C4 (rimResetPnpRemovePendingStateBits.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00FE678 (rimFreeAutoRepeatCompleteFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimPassivateSecondaryRims(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v7; // rbx
  struct _LIST_ENTRY **p_Blink; // rdi
  struct _LIST_ENTRY *v9; // rax
  _QWORD *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rsi
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int *v19; // rdi
  unsigned int v20; // eax
  struct _KTHREAD *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  bool v24; // zf
  _QWORD *v25; // rax
  unsigned int v26; // edi
  __int64 *v27; // rbx
  _DWORD *v28; // rbp
  _QWORD *v30; // [rsp+30h] [rbp-38h] BYREF
  struct _LIST_ENTRY *v31; // [rsp+38h] [rbp-30h]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x39u,
    (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids);
  if ( !*(_DWORD *)(a1 + 848) || (*(_DWORD *)(a1 + 76) & 0x20) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  v31 = (struct _LIST_ENTRY *)&v30;
  v30 = &v30;
  while ( Flink != &gObRimList )
  {
    v7 = Flink - 1;
    if ( &Flink[-1] != (struct _LIST_ENTRY *)a1
      && HIDWORD(v7[4].Blink) == 32
      && !BYTE1(v7[4].Blink)
      && !LOBYTE(v7[4].Blink) )
    {
      p_Blink = &v7[53].Blink;
      if ( *p_Blink != (struct _LIST_ENTRY *)p_Blink )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
      if ( ObReferenceObjectByPointer(&Flink[-1], 3u, ExRawInputManagerObjectType, 1) >= 0 )
      {
        v9 = v31;
        if ( v31->Flink != (struct _LIST_ENTRY *)&v30 )
          __fastfail(3u);
        v7[54].Flink = v31;
        v5 = &v30;
        *p_Blink = (struct _LIST_ENTRY *)&v30;
        v9->Flink = (struct _LIST_ENTRY *)p_Blink;
        v31 = (struct _LIST_ENTRY *)((char *)v7 + 856);
      }
    }
    Flink = Flink->Flink;
  }
  qword_1C01A1640 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v10 = v30;
  while ( v10 != &v30 )
  {
    v11 = *v10;
    v12 = (__int64)(v10 - 107);
    v13 = v10;
    v10 = (_QWORD *)v11;
    if ( *(_QWORD **)(v11 + 8) != v13 || (v14 = (_QWORD *)v13[1], (_QWORD *)*v14 != v13) )
      __fastfail(3u);
    *v14 = v11;
    *(_QWORD *)(v11 + 8) = v14;
    v13[1] = v13;
    *v13 = v13;
    RIMLockExclusive(v12 + 96);
    RIMLockExclusive(v12 + 552);
    v15 = *(_QWORD *)(v12 + 408);
    *(_QWORD *)(v12 + 408) = 0LL;
    *(_DWORD *)(v12 + 852) = 1;
    *(_BYTE *)(v12 + 74) = 1;
    while ( v15 )
    {
      v16 = v15;
      rimFreeAutoRepeatCompleteFrame(v15);
      v19 = (unsigned int *)(v15 + 184);
      v20 = *(_DWORD *)(v15 + 184);
      if ( (v20 & 0x10) != 0 )
      {
        if ( (v20 & 0x20) != 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17);
          v20 = *v19;
        }
        v21 = *(struct _KTHREAD **)(v15 + 312);
        *v19 = v20 & 0xFFFFFFEF;
        if ( !v21 || v21 == KeGetCurrentThread() )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v17);
        KeSetEvent(*(PRKEVENT *)(v15 + 352), 1, 0);
      }
      v22 = *(void **)(v15 + 248);
      if ( (*v19 & 0x20) != 0 )
      {
        if ( v22 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v17);
      }
      else if ( v22 )
      {
        IoUnregisterPlugPlayNotification(v22);
        v23 = *(void **)(v15 + 32);
        *(_QWORD *)(v15 + 248) = 0LL;
        ObfDereferenceObject(v23);
      }
      RIMCloseDev(v15);
      v24 = (*v19 & 0x1000) == 0;
      v25 = (_QWORD *)(v15 + 40);
      v15 = *(_QWORD *)(v15 + 40);
      *v25 = 0LL;
      if ( v24 )
      {
        rimResetPnpRemovePendingStateBits(v16);
        RIMFreeSpecificDev(v12, v16);
      }
    }
    v26 = 0;
    v27 = (__int64 *)(v12 + 304);
    v28 = (_DWORD *)(v12 + 288);
    do
    {
      RIMUnRegisterForInputDeviceTypeClassNotifications(v12, v26);
      if ( !*v28 && *v27 )
      {
        Win32FreePool(*v27);
        *v27 = 0LL;
      }
      ++v26;
      ++v28;
      ++v27;
    }
    while ( v26 <= 2 );
    *(_BYTE *)(v12 + 74) = 0;
    *(_QWORD *)(v12 + 560) = 0LL;
    ExReleasePushLockExclusiveEx(v12 + 552, 0LL);
    KeLeaveCriticalRegion();
    *(_QWORD *)(v12 + 104) = 0LL;
    ExReleasePushLockExclusiveEx(v12 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject((PVOID)v12);
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x14u,
           0x3Au,
           (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids);
}
