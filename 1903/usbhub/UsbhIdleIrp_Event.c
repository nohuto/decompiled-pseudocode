/*
 * XREFs of UsbhIdleIrp_Event @ 0x1C005CC68
 * Callers:
 *     UsbhCompletePdoIdleIrp @ 0x1C0001508 (UsbhCompletePdoIdleIrp.c)
 *     UsbhPdoInternalDeviceControl @ 0x1C0016EF0 (UsbhPdoInternalDeviceControl.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C0043D44 (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhCompleteCanceledPdoIdleIrp @ 0x1C005C750 (UsbhCompleteCanceledPdoIdleIrp.c)
 *     UsbhPdoIdleCC_Worker @ 0x1C005D400 (UsbhPdoIdleCC_Worker.c)
 * Callees:
 *     UsbhSetIdleIrpState @ 0x1C00015EC (UsbhSetIdleIrpState.c)
 *     UsbhGetIdleIrpState @ 0x1C0001658 (UsbhGetIdleIrpState.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhIdleExIrp_IdleReady @ 0x1C005C780 (UsbhIdleExIrp_IdleReady.c)
 *     UsbhIdleIrp_CB_Canceled @ 0x1C005C8F8 (UsbhIdleIrp_CB_Canceled.c)
 *     UsbhIdleIrp_CB_Complete @ 0x1C005C9F4 (UsbhIdleIrp_CB_Complete.c)
 *     UsbhIdleIrp_CB_Pending @ 0x1C005CB1C (UsbhIdleIrp_CB_Pending.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C005CDEC (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_WaitWorker @ 0x1C005D244 (UsbhIdleIrp_WaitWorker.c)
 */

__int64 __fastcall UsbhIdleIrp_Event(ULONG_PTR a1, __int64 a2, IRP *a3, unsigned int a4, int a5)
{
  _DWORD *v9; // rbx
  __int64 v10; // rcx
  int IdleIrpState; // eax
  int v12; // r10d
  unsigned int v13; // ebx
  KIRQL NewIrql; // [rsp+68h] [rbp+20h] BYREF

  Log(a1, 0x10000, 1936934230, (int)a4, (__int64)a3);
  v9 = PdoExt(a2);
  IdleIrpState = UsbhGetIdleIrpState(v10, a2, &NewIrql);
  v9[360] = a5;
  Log(a1, 0x10000, 1936934193, a2, IdleIrpState);
  switch ( v12 )
  {
    case 0:
      return (unsigned int)UsbhIdleIrp_NoIrp(a1, a2, a3, a4, 0, NewIrql);
    case 1:
      return (unsigned int)UsbhIdleIrp_WaitWorker(a1, a2, a3, a4, 1, NewIrql);
    case 2:
      return (unsigned int)UsbhIdleIrp_CB_Pending(a1, a2, a3, a4, 2, NewIrql);
    case 3:
      return (unsigned int)UsbhIdleIrp_CB_Canceled(a1, a2, (__int64)a3, a4, 3, NewIrql);
    case 4:
      return (unsigned int)UsbhIdleIrp_CB_Complete(a1, a2, (__int64)a3, a4, 4, NewIrql);
    case 5:
      return (unsigned int)UsbhIdleExIrp_IdleReady(a1, a2, (__int64)a3, a4, 5, NewIrql);
  }
  v13 = -1073741823;
  UsbhSetIdleIrpState((unsigned int)(v12 - 4), a2, a4, v12, NewIrql);
  return v13;
}
