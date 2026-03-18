/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ @ 0x18002C060
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x18002BF70 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 * Callees:
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x18002CA34 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::ReleaseResourcesForDisplayChange(CD2DContext *this)
{
  SAFE_DELETE<CD2DTarget>((char *)this + 464);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 30) + 56LL))(*((_QWORD *)this + 30), 0LL, 0LL);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 29) + 384LL))(*((_QWORD *)this + 29));
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 29) + 392LL))(*((_QWORD *)this + 29), 0LL, 0LL);
}
