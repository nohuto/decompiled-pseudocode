/*
 * XREFs of UsbhFdoReturnHubName @ 0x1C0043CA4
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0016EF0 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhDecPdoIoCount @ 0x1C001ABC0 (UsbhDecPdoIoCount.c)
 *     UsbhGetHubPdoName @ 0x1C00407B0 (UsbhGetHubPdoName.c)
 */

__int64 __fastcall UsbhFdoReturnHubName(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 v5; // rbx
  int HubPdoName; // eax

  v5 = a1;
  FdoExt(a1);
  PdoExt(a2);
  Log(v5, 8, 1919446590, a3, 0LL);
  HubPdoName = UsbhGetHubPdoName(
                 v5,
                 a2,
                 *(_WORD **)(a3 + 24),
                 *(_DWORD *)(*(_QWORD *)(a3 + 184) + 8LL),
                 (unsigned int *)(a3 + 56));
  *(_DWORD *)(a3 + 48) = HubPdoName;
  LODWORD(v5) = HubPdoName;
  IofCompleteRequest((PIRP)a3, 0);
  UsbhDecPdoIoCount(a2, a3);
  return (unsigned int)v5;
}
