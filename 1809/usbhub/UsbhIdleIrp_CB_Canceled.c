/*
 * XREFs of UsbhIdleIrp_CB_Canceled @ 0x1C005A518
 * Callers:
 *     UsbhIdleIrp_Event @ 0x1C005A888 (UsbhIdleIrp_Event.c)
 * Callees:
 *     UsbhSetIdleIrpState @ 0x1C000153C (UsbhSetIdleIrpState.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C005AD50 (UsbhIdleIrp_ReleaseIrp.c)
 */

__int64 __fastcall UsbhIdleIrp_CB_Canceled(ULONG_PTR a1, __int64 a2, __int64 a3, int a4, int a5, KIRQL NewIrql)
{
  _DWORD *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r9

  Log(a1, 0x10000, 1936938851, a2, a3);
  v10 = PdoExt(a2);
  v11 = (unsigned int)(a4 - 1);
  if ( a4 == 1 )
  {
    if ( a3 )
    {
      UsbhSetIdleIrpState(v11, a2, 1, a5, NewIrql);
      v12 = 2147483665LL;
      return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v12);
    }
    goto LABEL_7;
  }
  if ( a4 == 4 )
  {
    if ( a3 )
    {
      UsbhSetIdleIrpState(v11, a2, 4, 0, NewIrql);
      v12 = (unsigned int)v10[360];
      return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v12);
    }
LABEL_7:
    UsbhTrapFatal_Dbg(a1, a1);
  }
  UsbhSetIdleIrpState(v11, a2, a4, a5, NewIrql);
  v12 = 3221225473LL;
  return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v12);
}
