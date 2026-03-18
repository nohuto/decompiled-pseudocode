/*
 * XREFs of UsbhDisableDeviceForWake @ 0x1C0002430
 * Callers:
 *     UsbhPdoSetD0_Finish @ 0x1C00024DC (UsbhPdoSetD0_Finish.c)
 *     UsbhPdoSetD0 @ 0x1C0003620 (UsbhPdoSetD0.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C0012320 (UsbhSyncSendCommandToDevice.c)
 *     Log @ 0x1C0012D10 (Log.c)
 */

__int64 __fastcall UsbhDisableDeviceForWake(__int64 a1, __int64 a2)
{
  int v3; // esi
  __int64 v4; // rbp
  int v5; // eax
  int v6; // r10d
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF
  __int16 v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = 0;
  v3 = a1;
  FdoExt(a1);
  v4 = PdoExt(a2);
  v8 = 65792LL;
  v5 = UsbhSyncSendCommandToDevice(v3, a2, (unsigned int)&v8, 0, (__int64)&v9);
  Log(v3, 256, 1145993067, v5, 0LL);
  if ( v6 >= 0 )
    *(_DWORD *)(v4 + 1420) &= ~0x8000u;
  return (unsigned int)v6;
}
