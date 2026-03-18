/*
 * XREFs of GreGetBrushOrg @ 0x1C0133BE8
 * Callers:
 *     _DrawIconEx @ 0x1C0012DE0 (_DrawIconEx.c)
 *     MNEraseBackground @ 0x1C02086EC (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C020881C (xxxMNDrawFullNC.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetBrushOrg(HDC a1, _QWORD *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJ::MDCOBJ((MDCOBJ *)v6, a1);
  v3 = v6[0];
  if ( v6[0] )
  {
    *a2 = *(_QWORD *)(v6[0] + 132LL);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( v3 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  return v4;
}
