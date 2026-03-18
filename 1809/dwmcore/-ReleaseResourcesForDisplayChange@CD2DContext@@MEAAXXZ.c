/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ @ 0x1800E91A0
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800E90C0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 * Callees:
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x180022828 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::ReleaseResourcesForDisplayChange(CD2DTarget **this)
{
  SAFE_DELETE<CD2DTarget>(this + 58);
  (*(void (__fastcall **)(CD2DTarget *, _QWORD, _QWORD))(*(_QWORD *)this[30] + 56LL))(this[30], 0LL, 0LL);
  (*(void (__fastcall **)(CD2DTarget *))(*(_QWORD *)this[29] + 384LL))(this[29]);
  (*(void (__fastcall **)(CD2DTarget *, _QWORD, _QWORD))(*(_QWORD *)this[29] + 392LL))(this[29], 0LL, 0LL);
}
