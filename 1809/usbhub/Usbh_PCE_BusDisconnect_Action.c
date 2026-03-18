/*
 * XREFs of Usbh_PCE_BusDisconnect_Action @ 0x1C00457A4
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014BA0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C0001BDC (UsbhLatchPdo.c)
 *     UsbhiSignalResumeEvent @ 0x1C0001DB8 (UsbhiSignalResumeEvent.c)
 *     UsbhLockPcqWithTag @ 0x1C000B800 (UsbhLockPcqWithTag.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhUnlatchPdo @ 0x1C001B520 (UsbhUnlatchPdo.c)
 *     UsbhUnlockPcqWithTag @ 0x1C004572C (UsbhUnlockPcqWithTag.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C0049264 (Usbh_Disconnect_PdoEvent.c)
 */

void __fastcall Usbh_PCE_BusDisconnect_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // r9
  int v8; // r10d
  int v9; // r11d
  KIRQL v10; // r8
  __int64 v11; // rax
  int v12; // r10d
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // r10d
  __int64 v16; // rax
  __int64 v17; // rbx
  _DWORD *v18; // rax
  KIRQL v19; // [rsp+48h] [rbp+10h] BYREF

  FdoExt(a1);
  v6 = UsbhLockPcqWithTag(a1, a2, 11, &v19, 0);
  Log(a1, 512, 825323568, v6, *(unsigned __int16 *)(a2 + 4));
  if ( v8 == 1 || v8 == 2 || v8 == 6 )
  {
    Log(a1, v9, 825323569, v7, *(unsigned __int16 *)(a2 + 4));
    v14 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v15;
    *(_DWORD *)(v14 + a2 + 1384) = v15;
  }
  else
  {
    if ( v8 != 7 && v8 != 11 )
    {
      Log(a1, v9, 825323608, v7, *(unsigned __int16 *)(a2 + 4));
      v10 = v19;
      v11 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v12;
      *(_DWORD *)(v11 + a2 + 1384) = v12;
      UsbhUnlockPcqWithTag(a1, a2, v10);
      return;
    }
    Log(a1, v9, 825323570, v7, *(unsigned __int16 *)(a2 + 4));
    UsbhiSignalResumeEvent(a1, a2);
    v13 = *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 400) = 0;
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(32 * v13 + a2 + 1384) = 1;
  }
  UsbhUnlockPcqWithTag(a1, a2, v19);
  v16 = UsbhLatchPdo(a1, *(_WORD *)(a2 + 4), 0LL, 0x7250444Fu);
  v17 = v16;
  if ( v16 )
  {
    if ( (PdoExt(v16)[355] & 0x4000000) != 0 )
    {
      v18 = PdoExt(v17);
      KeSetEvent((PRKEVENT)(v18 + 730), 0, 0);
    }
    UsbhUnlatchPdo(a1, v17, 0LL, 0x7250444Fu);
    Usbh_Disconnect_PdoEvent(a1, v17, 24LL, a3);
  }
}
