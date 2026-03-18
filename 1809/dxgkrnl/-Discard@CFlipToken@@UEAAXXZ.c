/*
 * XREFs of ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0007DA0
 * Callers:
 *     ??1CFlipToken@@MEAA@XZ @ 0x1C0007D04 (--1CFlipToken@@MEAA@XZ.c)
 * Callees:
 *     ?ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ @ 0x1C0007D38 (-ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C0007DE8 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0008A9C (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipToken::Discard(CFlipToken *this)
{
  char v2; // al

  *((_DWORD *)this + 6) = 6;
  CFlipToken::TraceStateChanged(this);
  CFlipToken::ConfirmIndependentFlipEntry(this);
  v2 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 136LL))(this);
  CFlipToken::SignalGpuFenceAndPresentLimitSemaphore(this, v2);
}
