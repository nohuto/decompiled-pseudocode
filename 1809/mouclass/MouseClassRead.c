/*
 * XREFs of MouseClassRead @ 0x1C0003590
 * Callers:
 *     <none>
 * Callees:
 *     MouseClassHandleRead @ 0x1C00029A0 (MouseClassHandleRead.c)
 *     WPP_RECORDER_SF_ @ 0x1C0004924 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall MouseClassRead(__int64 a1, IRP *a2)
{
  IRP *v2; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v5; // rsi
  unsigned __int64 Length; // rax
  NTSTATUS v7; // ebx
  __int64 v9; // rdx

  v2 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 3LL);
  }
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  v5 = *(_QWORD *)(a1 + 64);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( (_DWORD)Length )
  {
    if ( CurrentStackLocation->Parameters.Read.Length == 24 * (Length / 0x18) )
    {
      if ( *(_BYTE *)(v5 + 346) )
      {
        v7 = -1073741667;
      }
      else if ( DriverEntry == CurrentStackLocation->FileObject->FsContext2 )
      {
        v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 32), v2, File, 1u, 0x20u);
        if ( v7 >= 0 )
          v7 = 259;
      }
      else
      {
        v7 = -1073741727;
      }
    }
    else
    {
      v7 = -1073741789;
    }
  }
  else
  {
    v7 = 0;
  }
  v2->IoStatus.Status = v7;
  v2->IoStatus.Information = 0LL;
  if ( v7 == 259 )
    return MouseClassHandleRead(v5, (__int64)v2);
  IofCompleteRequest(v2, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v9, 3LL);
  }
  return (unsigned int)v7;
}
