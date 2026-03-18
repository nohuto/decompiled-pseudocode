/*
 * XREFs of UsbhFlushPortChange @ 0x1C0040138
 * Callers:
 *     UsbhFdoColdStartPdo @ 0x1C000928C (UsbhFdoColdStartPdo.c)
 *     UsbhQueryPortState @ 0x1C0017BE0 (UsbhQueryPortState.c)
 *     UsbhFdoSetD0Warm @ 0x1C004BCBC (UsbhFdoSetD0Warm.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C00182D0 (UsbhSyncSendCommand.c)
 */

__int64 __fastcall UsbhFlushPortChange(__int64 a1, unsigned __int16 a2, _DWORD *a3)
{
  __int64 v3; // rdi
  int v6; // eax
  unsigned int v7; // r10d
  int v9; // [rsp+20h] [rbp-28h]
  __int16 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2;
  v11 = 0LL;
  v10 = 0;
  FdoExt(a1);
  LODWORD(v11) = 1048867;
  HIDWORD(v11) = (unsigned __int16)v3;
  v6 = UsbhSyncSendCommand(a1, (__int64)&v11, 0LL, &v10, v9, a3);
  Log(a1, 8, 1718382659, v6, v3);
  return v7;
}
