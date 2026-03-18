/*
 * XREFs of RawInputManagerObjectDelete @ 0x1C006D06C
 * Callers:
 *     RIMObjectManagerCallout @ 0x1C006CF40 (RIMObjectManagerCallout.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C006CE74 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C006CEB4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     rimFreeAllUserMem @ 0x1C006CEEC (rimFreeAllUserMem.c)
 *     rimRemoveFromObTrackList @ 0x1C006D1F4 (rimRemoveFromObTrackList.c)
 *     RIMFreeSpecificDevWorker @ 0x1C006EC88 (RIMFreeSpecificDevWorker.c)
 *     rimFreePointerRawDataListWorker @ 0x1C014FD88 (rimFreePointerRawDataListWorker.c)
 *     rimObsFreeInputMessageQueue @ 0x1C0159F38 (rimObsFreeInputMessageQueue.c)
 *     rimObsReleaseAllTrackedHandles @ 0x1C015A34C (rimObsReleaseAllTrackedHandles.c)
 *     rimObsStartStopDeviceRead @ 0x1C015A600 (rimObsStartStopDeviceRead.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RawInputManagerObjectDelete(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // eax
  _QWORD *v9; // rbx
  _QWORD *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _KTHREAD **v15; // rbx
  _QWORD *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  void *v20; // rcx
  char v21; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  if ( ObGetObjectType(*a1) != ExRawInputManagerObjectType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(ExRawInputManagerObjectType, v2, v3);
  if ( *(_QWORD *)(v1 + 16) != v1 + 16 )
  {
    rimRemoveFromObTrackList(v1);
    v7 = *(_DWORD *)(v1 + 4);
    if ( v7 == 2 )
    {
      if ( !*(_BYTE *)(v1 + 8) )
      {
        v15 = *(struct _KTHREAD ***)(v1 + 424);
        if ( !v15 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v21, v15 + 13);
        RIMFreeSpecificDevWorker(v15, v1 + 88);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v21);
        ObfDereferenceObject(v15);
      }
    }
    else if ( v7 == 1 )
    {
      v9 = (_QWORD *)(v1 + 536);
      v10 = *(_QWORD **)(v1 + 536);
      while ( v10 != v9 )
      {
        v16 = v10;
        v10 = (_QWORD *)*v10;
        v17 = v16[9];
        if ( v17 )
          Win32FreePool(v17);
        rimFreePointerRawDataListWorker(v16[7]);
        v18 = *v16;
        if ( *(_QWORD **)(*v16 + 8LL) != v16 || (v19 = (_QWORD *)v16[1], (_QWORD *)*v19 != v16) )
          __fastfail(3u);
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        Win32FreePool((__int64)v16);
      }
      if ( *(_QWORD *)(v1 + 424) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
      if ( (_QWORD *)*v9 != v9 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
      if ( *(_QWORD *)(v1 + 552) != v1 + 552 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
      if ( *(_QWORD *)(v1 + 416) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
      RIMLockExclusive(v1 + 568);
      rimFreeAllUserMem(v1, v11);
      *(_QWORD *)(v1 + 576) = 0LL;
      ExReleasePushLockExclusiveEx(v1 + 568, 0LL);
      KeLeaveCriticalRegion();
      if ( !*(_QWORD *)(v1 + 872) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
      if ( *(_DWORD *)(v1 + 880) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
      Win32FreePool(*(_QWORD *)(v1 + 872));
      *(_QWORD *)(v1 + 872) = 0LL;
    }
    else
    {
      if ( v7 != 3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
      v20 = *(void **)(v1 + 80);
      if ( v20 != (void *)-1LL )
      {
        ZwClose(v20);
        *(_QWORD *)(v1 + 80) = -1LL;
      }
      rimObsReleaseAllTrackedHandles(v1);
      rimObsFreeInputMessageQueue(v1);
      rimObsStartStopDeviceRead(v1, 0LL);
    }
  }
  return 0LL;
}
