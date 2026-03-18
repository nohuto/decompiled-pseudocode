/*
 * XREFs of UsbhIdleIrp_CB_Complete @ 0x1C005A614
 * Callers:
 *     UsbhIdleIrp_Event @ 0x1C005A888 (UsbhIdleIrp_Event.c)
 * Callees:
 *     UsbhSetIdleIrpState @ 0x1C000153C (UsbhSetIdleIrpState.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C005AD50 (UsbhIdleIrp_ReleaseIrp.c)
 */

__int64 __fastcall UsbhIdleIrp_CB_Complete(ULONG_PTR a1, __int64 a2, __int64 a3, int a4, int a5, KIRQL NewIrql)
{
  __int64 v10; // rcx
  _DWORD *v11; // r14
  __int64 v12; // r9

  Log(a1, 0x10000, 1936938851, a2, a3);
  v11 = PdoExt(a2);
  switch ( a4 )
  {
    case 1:
      if ( a3 )
      {
        UsbhSetIdleIrpState(v10, a2, 1, 4, NewIrql);
        v12 = 2147483665LL;
        return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v12);
      }
      goto LABEL_10;
    case 5:
      if ( a3 )
      {
        UsbhSetIdleIrpState(v10, a2, 5, 0, NewIrql);
        v12 = (unsigned int)v11[360];
        return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v12);
      }
      goto LABEL_10;
    case 6:
      if ( a3 )
      {
        UsbhSetIdleIrpState(v10, a2, 6, 0, NewIrql);
        v12 = 3221225760LL;
        return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v12);
      }
LABEL_10:
      UsbhTrapFatal_Dbg(a1, a1);
  }
  UsbhSetIdleIrpState(v10, a2, a4, a5, NewIrql);
  v12 = 3221225473LL;
  return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v12);
}
