/*
 * XREFs of ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C01565F8
 * Callers:
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C00C8950 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C01564DC (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000C580 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C01566E8 (-StartVSync@BLTQUEUE@@AEAAXH@Z.c)
 */

void __fastcall BLTQUEUE::EnableVSync(struct _KTHREAD **this)
{
  int v2; // eax
  _BYTE v3[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v4; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v3, this + 31, 0);
  DXGPUSHLOCK::AcquireExclusive(v4);
  *((_DWORD *)this + 212) |= 8u;
  v2 = *((_DWORD *)this + 59);
  v5 = 2;
  if ( v2 > 0 )
    BLTQUEUE::StartVSync((BLTQUEUE *)this, 1);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v3);
}
