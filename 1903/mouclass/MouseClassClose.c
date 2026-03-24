/*
 * XREFs of MouseClassClose @ 0x1C0001180
 * Callers:
 *     <none>
 * Callees:
 *     MouseClassLogError @ 0x1C00045F4 (MouseClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005728 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00068C0 (WPP_RECORDER_SF_qqq.c)
 *     MouEnableDisablePort @ 0x1C000C050 (MouEnableDisablePort.c)
 */

NTSTATUS __fastcall MouseClassClose(__int64 a1, IRP *a2)
{
  NTSTATUS v2; // edi
  IRP *v3; // rsi
  char v4; // r13
  __int64 v6; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  KIRQL v8; // dl
  int v9; // edx
  int v10; // r8d
  __int64 v11; // rdx
  __int64 i; // r15
  char *v14; // r14
  char v15; // bl
  int v16; // edx
  int v17; // r8d
  void *v18; // rcx

  v2 = 0;
  v3 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 2LL);
  }
  v6 = *(_QWORD *)(a1 + 64);
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  if ( *(_QWORD *)v6 == *(_QWORD *)(v6 + 8) )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 144));
    if ( DriverEntry == CurrentStackLocation->FileObject->FsContext2 )
    {
      --*(_DWORD *)(v6 + 80);
      CurrentStackLocation->FileObject->FsContext2 = 0LL;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 144), v8);
  }
  ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == v6 )
  {
    if ( --HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    {
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      goto LABEL_12;
    }
    for ( i = 0LL; (unsigned int)i < LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext); i = (unsigned int)(i + 1) )
    {
      v14 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * i;
      if ( !v14[19] )
      {
        v15 = v14[16];
        v14[16] = 0;
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        if ( v15 )
        {
          v18 = (void *)_InterlockedExchange64((volatile __int64 *)(*((_QWORD *)v14 + 1) + 312LL), 0LL);
          if ( v18 )
            IoUnregisterPlugPlayNotification(v18);
          v2 = MouEnableDisablePort(0LL, v3, *((_QWORD *)v14 + 1), v14);
        }
        if ( v2 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqq(WPP_GLOBAL_Control->DeviceExtension, v16, v17, 37);
          MouseClassLogError(a1, -1073414134, 20120, v2, 0, 0LL, CurrentStackLocation->MajorFunction);
        }
        else
        {
          v4 = 1;
        }
        ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      }
    }
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    if ( !v4 )
      goto LABEL_12;
  }
  else
  {
    ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    if ( *(_QWORD *)(v6 + 8) != a1 )
    {
      ++v3->CurrentLocation;
      ++v3->Tail.Overlay.CurrentStackLocation;
      return IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 16), v3);
    }
    v2 = MouEnableDisablePort(0LL, v3, v6, &CurrentStackLocation->FileObject);
    if ( v2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqq(WPP_GLOBAL_Control->DeviceExtension, v9, v10, 38);
      MouseClassLogError(a1, -1073414134, 20120, v2, 0, 0LL, CurrentStackLocation->MajorFunction);
      goto LABEL_12;
    }
  }
  v2 = 0;
LABEL_12:
  v3->IoStatus.Status = v2;
  v3->IoStatus.Information = 0LL;
  IofCompleteRequest(v3, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v11) = 5;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v11, 2LL);
    }
  }
  return v2;
}
