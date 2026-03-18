/*
 * XREFs of UsbhSyncBusReset @ 0x1C0008418
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0007970 (UsbhFdoSetD0Cold.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhDispatch_BusEvent @ 0x1C001B760 (UsbhDispatch_BusEvent.c)
 */

__int64 __fastcall UsbhSyncBusReset(__int64 a1, __int64 a2)
{
  int v4; // r9d
  int v5; // eax
  unsigned int v6; // r10d

  FdoExt(a1);
  Log(a1, 2048, 1346458174, 0, 0LL);
  v5 = UsbhDispatch_BusEvent(a1, a2, (unsigned int)(v4 + 10));
  Log(a1, 2048, 1346458172, 0, v5);
  return v6;
}
