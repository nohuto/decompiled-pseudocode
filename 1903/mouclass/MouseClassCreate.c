/*
 * XREFs of MouseClassCreate @ 0x1C00012F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqdDdd @ 0x1C0001C70 (WPP_RECORDER_SF_qqdDdd.c)
 *     MouClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C00041D0 (MouClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     MouClassTraceLoggingPrivilegeNotFoundForCreate @ 0x1C0004248 (MouClassTraceLoggingPrivilegeNotFoundForCreate.c)
 *     MouseClassLogError @ 0x1C00045F4 (MouseClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005728 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0005E50 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqDdd @ 0x1C0005F78 (WPP_RECORDER_SF_qqDdd.c)
 *     WPP_RECORDER_SF_qqdq @ 0x1C0006690 (WPP_RECORDER_SF_qqdq.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00068C0 (WPP_RECORDER_SF_qqq.c)
 *     MouEnableDisablePort @ 0x1C000C050 (MouEnableDisablePort.c)
 */

__int64 __fastcall MouseClassCreate(__int64 a1, IRP *a2, __int64 a3, int a4)
{
  char v4; // r13
  IRP *v5; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v8; // rsi
  unsigned __int8 v9; // di
  KPROCESSOR_MODE RequestorMode; // cl
  struct _IO_REMOVE_LOCK *v11; // r12
  NTSTATUS v12; // ebp
  KPROCESSOR_MODE v13; // dl
  int v14; // r8d
  int v15; // r9d
  KIRQL v16; // al
  __int64 v17; // rcx
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rdx
  int v23; // edx
  unsigned int v24; // r12d
  char *v25; // r13
  char v26; // di
  int v27; // edx
  __int64 v28; // rcx
  int v29; // r8d
  unsigned int v30; // edi
  ULONG RemlockSize; // [rsp+20h] [rbp-78h]
  char v32; // [rsp+A0h] [rbp+8h]

  v4 = 0;
  v5 = a2;
  v32 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 2LL);
  }
  CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
  v8 = *(_QWORD *)(a1 + 64);
  v9 = (CurrentStackLocation->Flags & 1) != 0;
  RequestorMode = v5->RequestorMode;
  if ( RequestorMode == 1 || (CurrentStackLocation->Flags & 1) != 0 )
  {
    v23 = *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16);
    if ( (v23 & 1) != 0 )
    {
      v12 = -1073741790;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qqdDdd(WPP_GLOBAL_Control->DeviceExtension, v23, (unsigned int)&WPP_RECORDER_INITIALIZED, a4);
        RequestorMode = v5->RequestorMode;
      }
      if ( !RequestorMode && v9 )
        MouClassTraceLoggingDeniedCreateForReadWithSFAC(*(unsigned int *)(CurrentStackLocation->Parameters.WMI.ProviderId
                                                                        + 16));
      goto LABEL_19;
    }
  }
  v11 = (struct _IO_REMOVE_LOCK *)(v8 + 32);
  v12 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v5, File, 1u, 0x20u);
  if ( v12 >= 0 )
  {
    if ( *(_BYTE *)(v8 + 64) && !*(_BYTE *)(v8 + 65) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 2, 2, 31, RemlockSize, a1, (char)v5);
      v12 = -1073741823;
      goto LABEL_18;
    }
    if ( *(_QWORD *)v8 == *(_QWORD *)(v8 + 8) )
    {
      if ( v9 )
        v13 = 1;
      else
        v13 = v5->RequestorMode;
      if ( SeSinglePrivilegeCheck((LUID)7LL, v13) )
      {
        v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 144));
        CurrentStackLocation->FileObject->FsContext2 = DriverEntry;
        ++*(_DWORD *)(v8 + 80);
        KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 144), v16);
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqDdd(
            WPP_GLOBAL_Control->DeviceExtension,
            CurrentStackLocation->Parameters.WMI.ProviderId,
            v14,
            v15,
            RemlockSize,
            a1,
            (char)v5,
            *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16),
            v5->RequestorMode,
            v9);
        MouClassTraceLoggingPrivilegeNotFoundForCreate(
          *(unsigned int *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16),
          (unsigned __int8)v5->RequestorMode,
          v9);
      }
    }
    ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == v8 )
    {
      if ( ++HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) != 1 )
      {
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        goto LABEL_18;
      }
      if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
      {
        v24 = 0;
        do
        {
          v25 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v24;
          if ( v25[19] )
          {
            v4 = v32;
          }
          else
          {
            v26 = v25[16];
            v25[16] = 1;
            ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            if ( !v26 )
            {
              LOBYTE(v28) = 1;
              v12 = MouEnableDisablePort(v28, v5, *((_QWORD *)v25 + 1), v25);
            }
            if ( v12 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qqq(WPP_GLOBAL_Control->DeviceExtension, v27, v29, 33);
              MouseClassLogError(a1, -1073414135, 20120, v12, 0, 0LL, CurrentStackLocation->MajorFunction);
              v25[16] = 0;
              v4 = v32;
            }
            else
            {
              v4 = 1;
              v32 = 1;
            }
            ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
          }
          ++v24;
        }
        while ( v24 < LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) );
        v11 = (struct _IO_REMOVE_LOCK *)(v8 + 32);
      }
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( !v4 )
        goto LABEL_18;
    }
    else
    {
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( *(_QWORD *)(v8 + 8) != a1 )
      {
        ++v5->CurrentLocation;
        ++v5->Tail.Overlay.CurrentStackLocation;
        v30 = IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 16), v5);
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v5, 0x20u);
        return v30;
      }
      LOBYTE(v17) = 1;
      v12 = MouEnableDisablePort(v17, v5, v8, &CurrentStackLocation->FileObject);
      if ( v12 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqdq(
            WPP_GLOBAL_Control->DeviceExtension,
            v18,
            v19,
            v20,
            RemlockSize,
            a1,
            (char)v5,
            v12,
            *(_QWORD *)(v8 + 16));
        goto LABEL_18;
      }
    }
    v12 = 0;
LABEL_18:
    IoReleaseRemoveLockEx(v11, v5, 0x20u);
  }
LABEL_19:
  v5->IoStatus.Status = v12;
  v5->IoStatus.Information = 0LL;
  IofCompleteRequest(v5, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v21) = 5;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v21, 2LL);
    }
  }
  return (unsigned int)v12;
}
