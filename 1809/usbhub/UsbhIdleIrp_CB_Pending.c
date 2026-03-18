/*
 * XREFs of UsbhIdleIrp_CB_Pending @ 0x1C005A73C
 * Callers:
 *     UsbhIdleIrp_Event @ 0x1C005A888 (UsbhIdleIrp_Event.c)
 * Callees:
 *     UsbhSetIdleIrpState @ 0x1C000153C (UsbhSetIdleIrpState.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C005AD50 (UsbhIdleIrp_ReleaseIrp.c)
 */

__int64 __fastcall UsbhIdleIrp_CB_Pending(ULONG_PTR a1, __int64 a2, IRP *a3, int a4, int a5, KIRQL NewIrql)
{
  __int64 v10; // r9
  __int64 v11; // rcx
  _DWORD *v12; // r14
  __int64 v13; // r9

  Log(a1, 0x10000, 1936938851, a2, (__int64)a3);
  v12 = PdoExt(v10);
  switch ( a4 )
  {
    case 1:
      if ( a3 )
      {
        UsbhSetIdleIrpState(v11, a2, 1, 2, NewIrql);
        v13 = 2147483665LL;
        return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v13);
      }
      goto LABEL_12;
    case 4:
      if ( a3 )
      {
        if ( a3->Cancel )
        {
          UsbhSetIdleIrpState(v11, a2, 4, 0, NewIrql);
          v13 = 3221225760LL;
          return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v13);
        }
        UsbhSetIdleIrpState(v11, a2, 4, 4, NewIrql);
        IoCsqInsertIrp((PIO_CSQ)(v12 + 366), a3, 0LL);
        return 259LL;
      }
LABEL_12:
      UsbhTrapFatal_Dbg(a1, a1);
    case 5:
      UsbhSetIdleIrpState(v11, a2, 5, 3, NewIrql);
      return 259LL;
  }
  UsbhSetIdleIrpState(v11, a2, a4, a5, NewIrql);
  v13 = 3221225473LL;
  return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v13);
}
