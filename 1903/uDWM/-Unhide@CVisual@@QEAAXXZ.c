/*
 * XREFs of ?Unhide@CVisual@@QEAAXXZ @ 0x18003BD80
 * Callers:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001F830 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18009E790 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::Unhide(CVisual *this)
{
  if ( (*((_DWORD *)this + 22))-- == 1 )
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 256LL);
}
