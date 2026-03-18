/*
 * XREFs of RawInputManagerObjectDelete @ 0x1C00866A4
 * Callers:
 *     RIMObjectManagerCallout @ 0x1C0086578 (RIMObjectManagerCallout.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00514E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00521C8 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0052208 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     rimFreeAllUserMem @ 0x1C008F374 (rimFreeAllUserMem.c)
 *     rimRemoveFromObTrackList @ 0x1C010BC18 (rimRemoveFromObTrackList.c)
 *     RIMFreeSpecificDevWorker @ 0x1C0121FA0 (RIMFreeSpecificDevWorker.c)
 *     rimFreePointerRawDataListWorker @ 0x1C0123874 (rimFreePointerRawDataListWorker.c)
 *     rimObsFreeInputMessageQueue @ 0x1C012CFA0 (rimObsFreeInputMessageQueue.c)
 *     rimObsReleaseAllTrackedHandles @ 0x1C012D3A4 (rimObsReleaseAllTrackedHandles.c)
 *     rimObsStartStopDeviceRead @ 0x1C012D630 (rimObsStartStopDeviceRead.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RawInputManagerObjectDelete(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 ObjectType; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KTHREAD **v10; // rbx
  _QWORD *v11; // rbx
  _QWORD *v12; // r15
  _QWORD *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  void *v20; // rcx
  char v22; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  ObjectType = ObGetObjectType(*a1);
  v5 = ExRawInputManagerObjectType;
  if ( ObjectType != ExRawInputManagerObjectType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(ExRawInputManagerObjectType, v3, v4);
  if ( *(_BYTE *)(v1 + 8) == 1 )
  {
    v6 = *(_DWORD *)(v1 + 4);
    if ( v6 == 2 )
    {
      rimRemoveFromObTrackList(v1);
      if ( !*(_BYTE *)(v1 + 9) )
      {
        v10 = *(struct _KTHREAD ***)(v1 + 424);
        if ( !v10 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
        RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v22, v10 + 13);
        RIMFreeSpecificDevWorker(v10, v1 + 88);
        RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v22);
        ObfDereferenceObject(v10);
      }
    }
    else if ( v6 == 1 )
    {
      if ( *(_QWORD *)(v1 + 16) != v1 + 16 )
        MicrosoftTelemetryAssertTriggeredMsgKM("The object should not be in the list");
      v11 = (_QWORD *)(v1 + 536);
      v12 = *(_QWORD **)(v1 + 536);
      while ( v12 != v11 )
      {
        v13 = v12;
        v12 = (_QWORD *)*v12;
        v14 = v13[9];
        if ( v14 )
          Win32FreePool(v14);
        rimFreePointerRawDataListWorker(v13[7]);
        v15 = *v13;
        if ( *(_QWORD **)(*v13 + 8LL) != v13 || (v16 = (_QWORD *)v13[1], (_QWORD *)*v16 != v13) )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        Win32FreePool((__int64)v13);
      }
      if ( *(_QWORD *)(v1 + 424) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v3, v4);
      if ( (_QWORD *)*v11 != v11 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v3, v4);
      if ( *(_QWORD *)(v1 + 552) != v1 + 552 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v3, v4);
      if ( *(_QWORD *)(v1 + 416) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v3, v4);
      RIMLockExclusive(v1 + 568);
      rimFreeAllUserMem(v1);
      CInpPushLock::UnLockExclusive((CInpPushLock *)(v1 + 568));
      if ( !*(_QWORD *)(v1 + 872) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
      if ( *(_DWORD *)(v1 + 880) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
      Win32FreePool(*(_QWORD *)(v1 + 872));
      *(_QWORD *)(v1 + 872) = 0LL;
      *(_QWORD *)(v1 + 872) = 0LL;
    }
    else
    {
      if ( v6 != 3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v3, v4);
      rimRemoveFromObTrackList(v1);
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
