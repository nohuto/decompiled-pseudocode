/*
 * XREFs of UsbhPdoSystemControl @ 0x1C0029E20
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDecPdoIoCount @ 0x1C001A400 (UsbhDecPdoIoCount.c)
 *     UsbhIncPdoIoCount @ 0x1C001C590 (UsbhIncPdoIoCount.c)
 */

__int64 __fastcall UsbhPdoSystemControl(struct _DEVICE_OBJECT *BugCheckParameter3, IRP *BugCheckParameter4)
{
  unsigned int Status; // ebx
  _DWORD *v5; // rbx
  NTSTATUS v6; // esi
  enum _SYSCTL_IRP_DISPOSITION IrpDisposition; // [rsp+48h] [rbp+10h] BYREF

  Status = BugCheckParameter4->IoStatus.Status;
  if ( (UsbhIncPdoIoCount((__int64)BugCheckParameter3, (__int64)BugCheckParameter4, 1398362953, 0) & 0xC0000000) == 0xC0000000 )
  {
    BugCheckParameter4->IoStatus.Status = Status;
    IofCompleteRequest(BugCheckParameter4, 0);
    return Status;
  }
  else
  {
    v5 = PdoExt((__int64)BugCheckParameter3);
    Log(*((_QWORD *)v5 + 148), 256, 1347898697, (__int64)BugCheckParameter4, 0LL);
    v6 = WmiSystemControl((PWMILIB_CONTEXT)(v5 + 334), BugCheckParameter3, BugCheckParameter4, &IrpDisposition);
    Log(*((_QWORD *)v5 + 148), 256, 1884769609, (__int64)BugCheckParameter4, v6);
    if ( IrpDisposition )
    {
      if ( IrpDisposition == IrpNotWmi )
        v6 = BugCheckParameter4->IoStatus.Status;
      BugCheckParameter4->IoStatus.Status = v6;
      IofCompleteRequest(BugCheckParameter4, 0);
    }
    UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    return (unsigned int)v6;
  }
}
