/*
 * XREFs of RawDispatch @ 0x1406583B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     IofCompleteRequest @ 0x1400668C0 (IofCompleteRequest.c)
 *     FsRtlIsNtstatusExpected @ 0x14012EF30 (FsRtlIsNtstatusExpected.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     RawReadWriteDeviceControl @ 0x1406582EC (RawReadWriteDeviceControl.c)
 *     RawFileSystemControl @ 0x140663328 (RawFileSystemControl.c)
 *     RawClose @ 0x140682584 (RawClose.c)
 *     RawCleanup @ 0x14068293C (RawCleanup.c)
 *     RawCreate @ 0x140682A8C (RawCreate.c)
 *     RawQueryInformation @ 0x1406AA8D0 (RawQueryInformation.c)
 *     RawQueryVolumeInformation @ 0x1406AA948 (RawQueryVolumeInformation.c)
 *     RawSetInformation @ 0x1408CE058 (RawSetInformation.c)
 */

__int64 __fastcall RawDispatch(__int64 a1, IRP *a2)
{
  char *CurrentStackLocation; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r14
  unsigned int v6; // edx
  NTSTATUS VolumeInformation; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  char v14; // al
  unsigned int v15; // esi

  CurrentStackLocation = (char *)a2->Tail.Overlay.CurrentStackLocation;
  if ( *(_WORD *)(a1 + 2) != 336
    || (v14 = *CurrentStackLocation, *CurrentStackLocation == 13) && CurrentStackLocation[1] == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v5 = a1 + 336;
    v6 = (unsigned __int8)*CurrentStackLocation;
    if ( v6 > 9 )
    {
      v9 = v6 - 10;
      if ( !v9 )
      {
        VolumeInformation = RawQueryVolumeInformation(a1 + 336, a2, CurrentStackLocation);
        goto LABEL_9;
      }
      v10 = v9 - 3;
      if ( !v10 )
      {
        VolumeInformation = RawFileSystemControl(a1 + 336, a2, CurrentStackLocation);
        goto LABEL_9;
      }
      v11 = v10 - 1;
      if ( !v11 )
        goto LABEL_8;
      v12 = v11 - 4;
      if ( !v12 )
      {
        VolumeInformation = RawCleanup((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2);
        goto LABEL_9;
      }
      if ( v12 == 9 )
      {
        if ( CurrentStackLocation[1] == 1 )
        {
          v8 = -2147483631;
          a2->IoStatus.Status = -2147483631;
          IofCompleteRequest(a2, 1);
          goto LABEL_30;
        }
        ExAcquireFastMutex((PFAST_MUTEX)(a1 + 560));
        if ( (*(_DWORD *)(v5 + 104) & 2) != 0 )
        {
          v8 = -1073741202;
          a2->IoStatus.Status = -1073741202;
          IofCompleteRequest(a2, 1);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 224));
          goto LABEL_30;
        }
        ++*(_DWORD *)(v5 + 112);
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v5 + 224));
        goto LABEL_8;
      }
    }
    else
    {
      if ( v6 == 9 )
      {
LABEL_8:
        VolumeInformation = RawReadWriteDeviceControl((PFSRTL_ADVANCED_FCB_HEADER)v5, a2, CurrentStackLocation);
LABEL_9:
        v8 = VolumeInformation;
LABEL_30:
        KeLeaveCriticalRegion();
        return v8;
      }
      if ( !*CurrentStackLocation )
      {
        VolumeInformation = RawCreate((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2);
        goto LABEL_9;
      }
      if ( v6 == 2 )
      {
        VolumeInformation = RawClose((PFSRTL_ADVANCED_FCB_HEADER)(a1 + 336), a2);
        goto LABEL_9;
      }
      if ( v6 > 2 )
      {
        if ( v6 <= 4 )
          goto LABEL_8;
        if ( v6 == 5 )
        {
          VolumeInformation = RawQueryInformation(a1 + 336, a2, CurrentStackLocation);
          goto LABEL_9;
        }
        if ( v6 == 6 )
        {
          VolumeInformation = RawSetInformation(a1 + 336, a2, CurrentStackLocation);
          goto LABEL_9;
        }
      }
    }
    KeBugCheckEx(0x22u, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (v14 & 0xED) != 0 || v14 == 16 )
    v15 = -1073741808;
  else
    v15 = 0;
  a2->IoStatus.Status = v15;
  IofCompleteRequest(a2, 1);
  return v15;
}
