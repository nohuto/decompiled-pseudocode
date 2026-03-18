/*
 * XREFs of UsbhIdleIrp_NoIrp @ 0x1C005AA0C
 * Callers:
 *     UsbhIdleIrp_Event @ 0x1C005A888 (UsbhIdleIrp_Event.c)
 * Callees:
 *     UsbhSetIdleIrpState @ 0x1C000153C (UsbhSetIdleIrpState.c)
 *     UsbhLatchPdo @ 0x1C0001BDC (UsbhLatchPdo.c)
 *     UsbhSetPdoIdleReady @ 0x1C000227C (UsbhSetPdoIdleReady.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C000E914 (UsbhEtwLogDeviceIrpEvent.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C001C7E4 (UsbhQueueWorkItemWithRetry.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C005AD50 (UsbhIdleIrp_ReleaseIrp.c)
 */

__int64 __fastcall UsbhIdleIrp_NoIrp(ULONG_PTR a1, __int64 a2, IRP *a3, int a4, int a5, KIRQL NewIrql)
{
  __int64 v7; // rbx
  _DWORD *v10; // r14
  _DWORD *v11; // r15
  __int64 v12; // rcx
  int v13; // r9d
  __int64 v14; // r9
  int v15; // r8d
  __int64 v17; // rcx
  __int64 v18; // rcx

  v7 = a4;
  v10 = PdoExt(a2);
  v11 = FdoExt(a1);
  Log(a1, 0x10000, 1936936521, a2, (__int64)a3);
  Log(a1, 0x10000, 1936936498, 0LL, v7);
  if ( (_DWORD)v7 == 1 )
  {
    UsbhEtwLogDeviceIrpEvent((__int64)v10, (__int64)a3, &USBHUB_ETW_EVENT_DEVICE_IDLE_NOTIFICATION_DISPATCH);
    if ( (v10[355] & 2) != 0 || v11[820] == 6 )
    {
      UsbhSetIdleIrpState(v17, a2, 1, 1, NewIrql);
      v15 = 1768180017;
      goto LABEL_23;
    }
    if ( UsbhLatchPdo(a1, *((_WORD *)v10 + 714), (__int64)v10, 0x656C6449u) == a2 )
    {
      UsbhSetIdleIrpState(v18, a2, 1, 1, NewIrql);
      v10[360] = 0;
      a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      Log(*((_QWORD *)v10 + 148), 16, 1768180018, 0LL, (__int64)a3);
      IoCsqInsertIrp((PIO_CSQ)(v10 + 366), a3, 0LL);
      UsbhQueueWorkItemWithRetry(a1, (__int64)(v10 + 386), (int)UsbhPdoIdleCC_Worker, 0, a2, 0, 0x69505353u);
      return 259;
    }
    if ( a3 )
    {
      UsbhSetIdleIrpState(v18, a2, 1, 0, NewIrql);
      Log(a1, 0x10000, 1768180019, a2, (__int64)a3);
      v14 = 3221225486LL;
      return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v14);
    }
LABEL_19:
    UsbhTrapFatal_Dbg(a1, a1);
  }
  if ( (_DWORD)v7 != 3 )
  {
    switch ( (_DWORD)v7 )
    {
      case 5:
        if ( a3 )
        {
          UsbhSetIdleIrpState(v12, a2, 5, v13, NewIrql);
          v14 = (unsigned int)v10[360];
          return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v14);
        }
        break;
      case 6:
        if ( a3 )
        {
          UsbhSetIdleIrpState(v12, a2, 6, v13, NewIrql);
          v14 = 3221225760LL;
          return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v14);
        }
        break;
      case 7:
        if ( a3 )
        {
          UsbhSetIdleIrpState(v12, a2, 7, 5, NewIrql);
          UsbhSetPdoIdleReady(a1, a2, (__int64)a3);
          v15 = 1768180020;
LABEL_23:
          a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          Log(*((_QWORD *)v10 + 148), 16, v15, 0LL, (__int64)a3);
          IoCsqInsertIrp((PIO_CSQ)(v10 + 366), a3, 0LL);
          return 259;
        }
        break;
      default:
        UsbhSetIdleIrpState(v12, a2, v7, a5, NewIrql);
        v14 = 3221225473LL;
        return (unsigned int)UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v14);
    }
    goto LABEL_19;
  }
  UsbhSetIdleIrpState(v12, a2, 3, v13, NewIrql);
  return 0;
}
