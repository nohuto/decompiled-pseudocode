/*
 * XREFs of KeyboardClassCreate @ 0x1C0001CA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0001880 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqdq @ 0x1C0002380 (WPP_RECORDER_SF_qqdq.c)
 *     KeyboardClassLogError @ 0x1C0004B40 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C0005B2C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00068DC (WPP_RECORDER_SF_qqq.c)
 *     KbdEnableDisablePort @ 0x1C000C400 (KbdEnableDisablePort.c)
 */

__int64 __fastcall KeyboardClassCreate(__int64 a1, IRP *a2)
{
  IRP *v2; // rbx
  char v4; // r12
  __int64 v5; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  struct _IO_REMOVE_LOCK *v7; // r13
  NTSTATUS v8; // esi
  KIRQL v9; // al
  __int64 v10; // rcx
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  unsigned int v17; // r13d
  char *v18; // rbp
  char v19; // di
  int v20; // edx
  __int64 v21; // rcx
  int v22; // r8d
  unsigned int v23; // edi
  __int64 RemlockSize; // [rsp+20h] [rbp-68h]
  struct _IO_REMOVE_LOCK *v25; // [rsp+98h] [rbp+10h]

  v2 = a2;
  v4 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 2LL);
  }
  v5 = *(_QWORD *)(a1 + 64);
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  if ( v2->RequestorMode == 1
    && (*(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 16) & 1) != 0
    && (CurrentStackLocation->Parameters.Create.Options & 1) == 0 )
  {
    v8 = -1073741790;
  }
  else
  {
    v7 = (struct _IO_REMOVE_LOCK *)(v5 + 32);
    v25 = (struct _IO_REMOVE_LOCK *)(v5 + 32);
    v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 32), v2, File, 1u, 0x20u);
    if ( v8 >= 0 )
    {
      if ( *(_BYTE *)(v5 + 64) && !*(_BYTE *)(v5 + 65) )
      {
        WPP_RECORDER_SF_qq((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 2u, 0x1Eu, RemlockSize);
        v8 = -1073741823;
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 32), v2, 0x20u);
      }
      else
      {
        CurrentStackLocation->Parameters.Create.Options &= ~1u;
        if ( *(_QWORD *)v5 == *(_QWORD *)(v5 + 8) && SeSinglePrivilegeCheck((LUID)7LL, v2->RequestorMode) )
        {
          v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 160));
          CurrentStackLocation->FileObject->FsContext2 = DriverEntry;
          ++*(_DWORD *)(v5 + 80);
          KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 160), v9);
        }
        ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels == v5 )
        {
          if ( ++HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) == 1 && LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
          {
            v17 = 0;
            do
            {
              v18 = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v17;
              if ( !v18[19] )
              {
                v19 = v18[16];
                v18[16] = 1;
                ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                if ( !v19 )
                {
                  LOBYTE(v21) = 1;
                  v8 = KbdEnableDisablePort(v21, v2, *((_QWORD *)v18 + 1), v18);
                }
                if ( v8 >= 0 )
                {
                  v4 = 1;
                }
                else
                {
                  WPP_RECORDER_SF_qqq(WPP_GLOBAL_Control->DeviceExtension, v20, v22, 31);
                  KeyboardClassLogError(a1, -1073414135, 10120, v8, 0, 0LL, CurrentStackLocation->MajorFunction);
                  v18[16] = 0;
                }
                ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              }
              ++v17;
            }
            while ( v17 < LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) );
            v7 = v25;
          }
          ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        }
        else
        {
          ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
          if ( *(_QWORD *)(v5 + 8) != a1 )
          {
            ++v2->CurrentLocation;
            ++v2->Tail.Overlay.CurrentStackLocation;
            v23 = IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 16), v2);
            IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 32), v2, 0x20u);
            return v23;
          }
          LOBYTE(v10) = 1;
          v8 = KbdEnableDisablePort(v10, v2, v5, &CurrentStackLocation->FileObject);
          if ( v8 >= 0 )
            v4 = 1;
          else
            WPP_RECORDER_SF_qqdq(
              WPP_GLOBAL_Control->DeviceExtension,
              v11,
              v12,
              v13,
              RemlockSize,
              a1,
              (char)v2,
              v8,
              *(_QWORD *)(v5 + 16));
        }
        IoReleaseRemoveLockEx(v7, v2, 0x20u);
        v14 = 0;
        if ( !v4 )
          v14 = v8;
        v8 = v14;
      }
    }
  }
  v2->IoStatus.Status = v8;
  v2->IoStatus.Information = 0LL;
  IofCompleteRequest(v2, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v15) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v15, 2LL);
  }
  return (unsigned int)v8;
}
