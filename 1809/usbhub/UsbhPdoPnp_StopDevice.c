/*
 * XREFs of UsbhPdoPnp_StopDevice @ 0x1C00597E0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0008C18 (UsbhUnlinkPdoDeviceHandle.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     SET_PDO_SWPNPSTATE @ 0x1C00583E0 (SET_PDO_SWPNPSTATE.c)
 *     UsbhCloseDeviceConfiguration @ 0x1C0058514 (UsbhCloseDeviceConfiguration.c)
 */

__int64 __fastcall UsbhPdoPnp_StopDevice(ULONG_PTR a1, IRP *a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v4 = PdoExt(a1);
  v5 = *((_QWORD *)v4 + 148);
  if ( !v5 )
    UsbhTrapFatal_Dbg(0LL, a1);
  Log(v5, 256, 1399874671, (__int64)a2, 0LL);
  SET_PDO_SWPNPSTATE(a1, 103, 4);
  v6 = UsbhCloseDeviceConfiguration(*((_QWORD *)v4 + 148), a1, &v8);
  Log(*((_QWORD *)v4 + 148), 256, 1936745522, (__int64)a2, v6);
  UsbhUnlinkPdoDeviceHandle(*((_QWORD *)v4 + 148), a1, 2017740854, 1);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
