/*
 * XREFs of UsbhFdoSubmitPdoIdleNotification @ 0x1C00426D4
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0016790 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C001A400 (UsbhDecPdoIoCount.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 *     UsbhIdleIrp_Event @ 0x1C005A888 (UsbhIdleIrp_Event.c)
 */

__int64 __fastcall UsbhFdoSubmitPdoIdleNotification(__int64 a1, ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  unsigned int v6; // edi
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rcx
  int v9; // [rsp+48h] [rbp-10h]

  if ( dword_1C006E640 )
  {
    v6 = -1073741637;
    BugCheckParameter4->IoStatus.Status = -1073741637;
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  else
  {
    Parameters = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.CreatePipe.Parameters;
    if ( Parameters && *(_QWORD *)&Parameters->NamedPipeType )
    {
      return (unsigned int)UsbhIdleIrp_Event(a1, BugCheckParameter3, BugCheckParameter4, 1LL, 0);
    }
    else
    {
      v6 = -1073741224;
      BugCheckParameter4->IoStatus.Status = -1073741224;
      IofCompleteRequest(BugCheckParameter4, 0);
      UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      LOBYTE(v9) = 0;
      UsbhException(a1, 0, 122, 0, 0, -1073741224, 0, usbfile_dioctl_c, 1148, v9);
    }
  }
  return v6;
}
