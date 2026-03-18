/*
 * XREFs of DxgkEngWatchVisRgnChange @ 0x1C0274A50
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DxgkEngWatchVisRgnChange(HDC a1, int a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] )
  {
    if ( a2 )
      *(_DWORD *)(v3[0] + 36LL) |= 0x20000u;
    else
      *(_DWORD *)(v3[0] + 36LL) &= ~0x20000u;
    if ( v3[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  }
}
