/*
 * XREFs of KeyboardClassCreate @ 0x1C0001D40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00017A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqdDdd @ 0x1C0002590 (WPP_RECORDER_SF_qqdDdd.c)
 *     KbdClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C0004970 (KbdClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     KbdClassTraceLoggingPrivilegeNotFoundForCreate @ 0x1C00049E8 (KbdClassTraceLoggingPrivilegeNotFoundForCreate.c)
 *     KeyboardClassLogError @ 0x1C0004FD4 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C00060F8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqDdd @ 0x1C0006774 (WPP_RECORDER_SF_qqDdd.c)
 *     WPP_RECORDER_SF_qqdq @ 0x1C0006ECC (WPP_RECORDER_SF_qqdq.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00070FC (WPP_RECORDER_SF_qqq.c)
 *     KbdEnableDisablePort @ 0x1C000D490 (KbdEnableDisablePort.c)
 */

__int64 __fastcall KeyboardClassCreate(__int64 a1, IRP *a2, __int64 a3, int a4)
{
  IRP *v4; // rbx
  char v6; // r12
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v8; // rbp
  unsigned __int8 v9; // di
  KPROCESSOR_MODE RequestorMode; // cl
  struct _IO_REMOVE_LOCK *v11; // r13
  NTSTATUS v12; // esi
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
  unsigned int v24; // r13d
  char *v25; // rbp
  char v26; // di
  int v27; // edx
  __int64 v28; // rcx
  int v29; // r8d
  unsigned int v30; // edi
  __int64 RemlockSize; // [rsp+20h] [rbp-78h]
  struct _IO_REMOVE_LOCK *v32; // [rsp+A8h] [rbp+10h]

  v4 = a2;
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 2LL);
  }
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  v8 = *(_QWORD *)(a1 + 64);
  v9 = (CurrentStackLocation->Flags & 1) != 0;
  RequestorMode = v4->RequestorMode;
  if ( RequestorMode == 1 || (CurrentStackLocation->Flags & 1) != 0 )
  {
    v23 = *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16);
    if ( (v23 & 1) != 0 && (CurrentStackLocation->Parameters.Create.Options & 1) == 0 )
    {
      v12 = -1073741790;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qqdDdd(WPP_GLOBAL_Control->DeviceExtension, v23, (unsigned int)&WPP_RECORDER_INITIALIZED, a4);
        RequestorMode = v4->RequestorMode;
      }
      if ( !RequestorMode && v9 )
        KbdClassTraceLoggingDeniedCreateForReadWithSFAC(*(unsigned int *)(CurrentStackLocation->Parameters.WMI.ProviderId
                                                                        + 16));
      goto LABEL_19;
    }
  }
  v11 = (struct _IO_REMOVE_LOCK *)(v8 + 32);
  v32 = (struct _IO_REMOVE_LOCK *)(v8 + 32);
  v12 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v4, File, 1u, 0x20u);
  if ( v12 >= 0 )
  {
    if ( *(_BYTE *)(v8 + 64) && !*(_BYTE *)(v8 + 65) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 2u, 0x1Fu, RemlockSize);
      v12 = -1073741823;
      goto LABEL_18;
    }
    CurrentStackLocation->Parameters.Create.Options &= ~1u;
    if ( *(_QWORD *)v8 == *(_QWORD *)(v8 + 8) )
    {
      if ( v9 )
        v13 = 1;
      else
        v13 = v4->RequestorMode;
      if ( SeSinglePrivilegeCheck((LUID)7LL, v13) )
      {
        v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 160));
        CurrentStackLocation->FileObject->FsContext2 = DriverEntry;
        ++*(_DWORD *)(v8 + 80);
        KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 160), v16);
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
            (char)v4,
            *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16),
            v4->RequestorMode,
            v9);
        KbdClassTraceLoggingPrivilegeNotFoundForCreate(
          *(unsigned int *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16),
          (unsigned __int8)v4->RequestorMode,
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
          if ( !v25[19] )
          {
            v26 = v25[16];
            v25[16] = 1;
            ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            if ( !v26 )
            {
              LOBYTE(v28) = 1;
              v12 = KbdEnableDisablePort(v28, v4, *((_QWORD *)v25 + 1), v25);
            }
            if ( v12 >= 0 )
            {
              v6 = 1;
            }
            else
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_qqq(WPP_GLOBAL_Control->DeviceExtension, v27, v29, 33);
              KeyboardClassLogError(a1, -1073414135, 10120, v12, 0, 0LL, CurrentStackLocation->MajorFunction);
              v25[16] = 0;
            }
            ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
          }
          ++v24;
        }
        while ( v24 < LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) );
        v11 = v32;
      }
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( !v6 )
        goto LABEL_18;
    }
    else
    {
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
      if ( *(_QWORD *)(v8 + 8) != a1 )
      {
        ++v4->CurrentLocation;
        ++v4->Tail.Overlay.CurrentStackLocation;
        v30 = IofCallDriver(*(PDEVICE_OBJECT *)(v8 + 16), v4);
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 32), v4, 0x20u);
        return v30;
      }
      LOBYTE(v17) = 1;
      v12 = KbdEnableDisablePort(v17, v4, v8, &CurrentStackLocation->FileObject);
      if ( v12 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqdq(
            WPP_GLOBAL_Control->DeviceExtension,
            v18,
            v19,
            v20,
            RemlockSize,
            a1,
            (char)v4,
            v12,
            *(_QWORD *)(v8 + 16));
        goto LABEL_18;
      }
    }
    v12 = 0;
LABEL_18:
    IoReleaseRemoveLockEx(v11, v4, 0x20u);
  }
LABEL_19:
  v4->IoStatus.Status = v12;
  v4->IoStatus.Information = 0LL;
  IofCompleteRequest(v4, 0);
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
