/*
 * XREFs of KeyboardClassCleanup @ 0x1C0001180
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00060F8 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall KeyboardClassCleanup(__int64 a1, IRP *a2)
{
  IRP *v2; // rbx
  __int64 v4; // rbp
  PFILE_OBJECT FileObject; // rdi
  KIRQL v6; // r8
  __int64 ***v7; // rdx
  __int64 **v8; // r9
  __int64 *v9; // rdi
  __int64 v10; // rdx
  __int64 ****v12; // rax
  _QWORD *v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 **v16; // [rsp+38h] [rbp-20h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 2LL);
  }
  v4 = *(_QWORD *)(a1 + 64);
  FileObject = v2->Tail.Overlay.CurrentStackLocation->FileObject;
  if ( DriverEntry == FileObject->FsContext2 )
  {
    v16 = &v15;
    v15 = (__int64 *)&v15;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 160));
    v7 = *(__int64 ****)(v4 + 168);
    if ( v7 != (__int64 ***)(v4 + 168) )
    {
      do
      {
        v8 = *v7;
        if ( !FileObject || v7[2][6] == (__int64 *)FileObject )
        {
          if ( v8[1] != (__int64 *)v7 || (v12 = (__int64 ****)v7[1], *v12 != v7) )
LABEL_24:
            __fastfail(3u);
          *v12 = (__int64 ***)v8;
          v8[1] = (__int64 *)v12;
          if ( _InterlockedExchange64((volatile __int64 *)v7 - 8, 0LL) )
          {
            *((_DWORD *)v7 - 30) = -1073741536;
            *(v7 - 14) = 0LL;
            v13 = v16;
            if ( *v16 != (__int64 *)&v15 )
              goto LABEL_24;
            v7[1] = v16;
            *v7 = &v15;
            *v13 = v7;
            v16 = (__int64 **)v7;
          }
          else
          {
            v7[1] = (__int64 **)v7;
            *v7 = (__int64 **)v7;
          }
        }
        v7 = (__int64 ***)v8;
      }
      while ( v8 != (__int64 **)(v4 + 168) );
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 160), v6);
    while ( 1 )
    {
      v9 = v15;
      if ( v15 == (__int64 *)&v15 )
        break;
      if ( (__int64 **)v15[1] != &v15 )
        goto LABEL_24;
      v14 = (__int64 *)*v15;
      if ( *(__int64 **)(*v15 + 8) != v15 )
        goto LABEL_24;
      v15 = (__int64 *)*v15;
      v14[1] = (__int64)&v15;
      IofCompleteRequest((PIRP)(v9 - 21), 0);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), v9 - 21, 0x20u);
    }
  }
  v2->IoStatus.Status = 0;
  v2->IoStatus.Information = 0LL;
  IofCompleteRequest(v2, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v10, 2LL);
  }
  return 0LL;
}
