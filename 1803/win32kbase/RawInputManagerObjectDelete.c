/*
 * XREFs of RawInputManagerObjectDelete @ 0x1C00F2218
 * Callers:
 *     RIMObjectManagerCallout @ 0x1C00F1BE0 (RIMObjectManagerCallout.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     rimRemoveFromObTrackList @ 0x1C00DEEF8 (rimRemoveFromObTrackList.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00DEF5C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00DEF94 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     rimFreeAllUserMem @ 0x1C00E86E0 (rimFreeAllUserMem.c)
 *     RIMFreeSpecificDevWorker @ 0x1C00F7A6C (RIMFreeSpecificDevWorker.c)
 *     RIMFreeAllHoldingFrames @ 0x1C00F9240 (RIMFreeAllHoldingFrames.c)
 *     rimObsFreeInputMessageQueue @ 0x1C010535C (rimObsFreeInputMessageQueue.c)
 *     rimObsReleaseAllTrackedHandles @ 0x1C01056FC (rimObsReleaseAllTrackedHandles.c)
 *     rimObsStartStopDeviceRead @ 0x1C010593C (rimObsStartStopDeviceRead.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RawInputManagerObjectDelete(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  struct _KTHREAD **v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // rcx
  char v13; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  if ( ObGetObjectType(*a1) != ExRawInputManagerObjectType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(ExRawInputManagerObjectType, v2);
  if ( *(_QWORD *)(v1 + 16) != v1 + 16 )
  {
    rimRemoveFromObTrackList(v1);
    v5 = *(_DWORD *)(v1 + 4);
    if ( v5 == 2 )
    {
      if ( !*(_BYTE *)(v1 + 8) )
      {
        v6 = *(struct _KTHREAD ***)(v1 + 416);
        if ( !v6 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3);
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v13, v6 + 12);
        RIMFreeSpecificDevWorker(v6, v1 + 80);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v13);
        ObfDereferenceObject(v6);
      }
    }
    else if ( v5 == 1 )
    {
      RIMFreeAllHoldingFrames(v1);
      if ( *(_QWORD *)(v1 + 408) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
      if ( *(_QWORD *)(v1 + 520) != v1 + 520 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
      if ( *(_QWORD *)(v1 + 536) != v1 + 536 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
      if ( *(_QWORD *)(v1 + 400) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
      RIMLockExclusive(v1 + 552);
      rimFreeAllUserMem((struct _RTL_AVL_TABLE *)v1);
      *(_QWORD *)(v1 + 560) = 0LL;
      ExReleasePushLockExclusiveEx(v1 + 552, 0LL);
      KeLeaveCriticalRegion();
      if ( !*(_QWORD *)(v1 + 880) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
      if ( *(_DWORD *)(v1 + 888) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
      Win32FreePool(*(_QWORD *)(v1 + 880));
      *(_QWORD *)(v1 + 880) = 0LL;
      *(_QWORD *)(v1 + 880) = 0LL;
    }
    else
    {
      if ( v5 != 3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3);
      v11 = *(void **)(v1 + 72);
      if ( v11 != (void *)-1LL )
      {
        ZwClose(v11);
        *(_QWORD *)(v1 + 72) = -1LL;
      }
      rimObsReleaseAllTrackedHandles(v1);
      rimObsFreeInputMessageQueue(v1);
      rimObsStartStopDeviceRead(v1, 0LL);
    }
  }
  return 0LL;
}
