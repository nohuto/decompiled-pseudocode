/*
 * XREFs of ?Hide@CVisual@@QEAAXXZ @ 0x18003ACE4
 * Callers:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800219E0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18009E430 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x18009F940 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::Hide(CVisual *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 22);
  if ( !v1 )
  {
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 256LL);
    v1 = *((_DWORD *)this + 22);
  }
  *((_DWORD *)this + 22) = v1 + 1;
}
