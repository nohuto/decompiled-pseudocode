/*
 * XREFs of ??1CWin32kLocks@@QEAA@XZ @ 0x1C0021BA0
 * Callers:
 *     DxgkPresent @ 0x1C01251E0 (DxgkPresent.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0218090 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0021BC4 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ @ 0x1C0021C34 (-vUnlock@DXGSTABLEVISRGNANDSPRITE@@QEAAXXZ.c)
 */

void __fastcall CWin32kLocks::~CWin32kLocks(CWin32kLocks *this)
{
  CWin32kLocks::Unlock(this);
  DXGSTABLEVISRGNANDSPRITE::vUnlock((CWin32kLocks *)((char *)this + 32));
}
