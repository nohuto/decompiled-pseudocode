/*
 * XREFs of GreCleanDC @ 0x1C0064110
 * Callers:
 *     UserThreadCallout @ 0x1C0033E20 (UserThreadCallout.c)
 * Callees:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0029780 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002AAF0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002D39C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

_BOOL8 __fastcall GreCleanDC(HDC a1)
{
  BOOL v1; // ebx
  DC *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  v1 = v3[0] && (unsigned int)XDCOBJ::bCleanDC(v3, 0);
  if ( v3[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  return v1;
}
