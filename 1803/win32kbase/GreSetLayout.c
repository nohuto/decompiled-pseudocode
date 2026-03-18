/*
 * XREFs of GreSetLayout @ 0x1C0064810
 * Callers:
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 *     GreCreateCompatibleDC @ 0x1C002F610 (GreCreateCompatibleDC.c)
 * Callees:
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C0025670 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002AAF0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002D39C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetLayout(HDC a1, int a2, int a3)
{
  unsigned int v5; // ebx
  DC *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v5 = DC::dwSetLayout(v7[0], a2, a3);
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v5;
}
