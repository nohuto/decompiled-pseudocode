/*
 * XREFs of RawMountVolume @ 0x1405A3988
 * Callers:
 *     RawFileSystemControl @ 0x1405A35C0 (RawFileSystemControl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     IoDeleteDevice @ 0x1400DAB60 (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RawScanDeletedList @ 0x1405A3620 (RawScanDeletedList.c)
 *     RawInitializeVcb @ 0x1405A36B4 (RawInitializeVcb.c)
 *     FsRtlNotifyVolumeEventEx @ 0x1405A3BD0 (FsRtlNotifyVolumeEventEx.c)
 *     IoCreateStreamFileObjectLite @ 0x1405A4560 (IoCreateStreamFileObjectLite.c)
 *     IoCreateDevice @ 0x140653B90 (IoCreateDevice.c)
 *     RawCleanupVcb @ 0x140690B68 (RawCleanupVcb.c)
 */

NTSTATUS __fastcall RawMountVolume(__int64 *a1)
{
  __int64 v2; // r14
  NTSTATUS result; // eax
  PDEVICE_OBJECT v4; // rbx
  ULONG v5; // eax
  int v6; // esi
  struct _FILE_OBJECT *StreamFileObjectLite; // r14
  KDEVICE_QUEUE *p_DeviceQueue; // rbx
  __int64 v9; // rax
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-78h] BYREF
  struct _FILE_OBJECT *v11; // [rsp+48h] [rbp-70h]
  _BYTE Event[62]; // [rsp+50h] [rbp-68h] BYREF

  RawScanDeletedList();
  v2 = a1[2];
  if ( *(_WORD *)(v2 + 304) > 0x1000u )
    return -1073741489;
  result = IoCreateDevice(*(PDRIVER_OBJECT *)(a1[5] + 8), 0x150u, 0LL, 8u, 0, 0, &DeviceObject);
  if ( result >= 0 )
  {
    v4 = DeviceObject;
    v5 = *(_DWORD *)(v2 + 152);
    if ( v5 > DeviceObject->AlignmentRequirement )
      DeviceObject->AlignmentRequirement = v5;
    v4->SectorSize = *(_WORD *)(v2 + 304);
    v4->Flags |= 0x10u;
    v6 = RawInitializeVcb(&v4[1].Type, a1[2], a1[1]);
    if ( v6 < 0 )
    {
      RawCleanupVcb((PFSRTL_ADVANCED_FCB_HEADER)&v4[1]);
      IoDeleteDevice(v4);
    }
    else
    {
      *(_QWORD *)(v4[1].DeviceQueue.Lock + 8) = v4;
      *(_DWORD *)(v4[1].DeviceQueue.Lock + 24) = -1;
      *(_WORD *)(v4[1].DeviceQueue.Lock + 6) = 0;
      v4->Flags &= ~0x80u;
      v4->StackSize = *(_BYTE *)(v2 + 76) + 1;
      v11 = 0LL;
      memset(Event, 0, sizeof(Event));
      StreamFileObjectLite = IoCreateStreamFileObjectLite(0LL, v4);
      v11 = StreamFileObjectLite;
      HIDWORD(v4[1].Queue.Wcb.DeviceRoutine) += 2;
      LODWORD(v4[1].Queue.Wcb.DeviceContext) += 2;
      *(_DWORD *)Event = 4063233;
      *(_QWORD *)&Event[24] = 0LL;
      *(_DWORD *)&Event[32] = -1;
      *(_QWORD *)&Event[36] = 1LL;
      *(_DWORD *)&Event[44] = 6;
      *(_DWORD *)&Event[48] = 16;
      *(_DWORD *)&Event[52] = *(_DWORD *)L"RAW";
      *(_WORD *)&Event[56] = aRaw[2];
      FsRtlNotifyVolumeEventEx(StreamFileObjectLite, 6u, (PTARGET_DEVICE_CUSTOM_NOTIFICATION)Event);
      ObfDereferenceObject(StreamFileObjectLite);
      HIDWORD(v4[1].Queue.Wcb.DeviceRoutine) -= 2;
      LODWORD(v4[1].Queue.Wcb.DeviceContext) -= 2;
      ExAcquireFastMutex(&RawGlobalLock);
      p_DeviceQueue = &v4[1].DeviceQueue;
      v9 = RawMountedQueue;
      if ( *(__int64 **)(RawMountedQueue + 8) != &RawMountedQueue )
        __fastfail(3u);
      *(_QWORD *)&p_DeviceQueue->Type = RawMountedQueue;
      p_DeviceQueue->DeviceListHead.Flink = (struct _LIST_ENTRY *)&RawMountedQueue;
      *(_QWORD *)(v9 + 8) = p_DeviceQueue;
      RawMountedQueue = (__int64)p_DeviceQueue;
      KeReleaseGuardedMutex(&RawGlobalLock);
    }
    return v6;
  }
  return result;
}
