/*
 * XREFs of KeyboardClassCleanup @ 0x1C0001160
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005B2C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall KeyboardClassCleanup(__int64 a1, IRP *a2)
{
  IRP *v2; // rbx
  __int64 v4; // rsi
  PFILE_OBJECT FileObject; // rbp
  KIRQL v6; // dl
  __int64 ***v7; // r8
  __int64 *v8; // rdi
  __int64 v9; // rdx
  __int64 **v11; // r9
  __int64 ****v12; // rax
  _QWORD *v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 **v16; // [rsp+38h] [rbp-10h]

  v2 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
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
        v11 = *v7;
        if ( !FileObject || v7[2][6] == (__int64 *)FileObject )
        {
          if ( v11[1] != (__int64 *)v7 || (v12 = (__int64 ****)v7[1], *v12 != v7) )
LABEL_23:
            __fastfail(3u);
          *v12 = (__int64 ***)v11;
          v11[1] = (__int64 *)v12;
          if ( _InterlockedExchange64((volatile __int64 *)v7 - 8, 0LL) )
          {
            *((_DWORD *)v7 - 30) = -1073741536;
            *(v7 - 14) = 0LL;
            v13 = v16;
            if ( *v16 != (__int64 *)&v15 )
              goto LABEL_23;
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
        v7 = (__int64 ***)v11;
      }
      while ( v11 != (__int64 **)(v4 + 168) );
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 160), v6);
    while ( 1 )
    {
      v8 = v15;
      if ( v15 == (__int64 *)&v15 )
        break;
      if ( (__int64 **)v15[1] != &v15 )
        goto LABEL_23;
      v14 = (__int64 *)*v15;
      if ( *(__int64 **)(*v15 + 8) != v15 )
        goto LABEL_23;
      v15 = (__int64 *)*v15;
      v14[1] = (__int64)&v15;
      IofCompleteRequest((PIRP)(v8 - 21), 0);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), v8 - 21, 0x20u);
    }
  }
  v2->IoStatus.Status = 0;
  v2->IoStatus.Information = 0LL;
  IofCompleteRequest(v2, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v9, 2LL);
  }
  return 0LL;
}
