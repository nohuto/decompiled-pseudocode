/*
 * XREFs of ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18004C2AC
 * Callers:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180003634 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180020D1C (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180025480 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x18004C170 (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::ClearInterpolationMode(CVisual *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 49);
  if ( (v1 & 2) != 0 )
  {
    *((_DWORD *)this + 49) = v1 & 0xFFFFFFFD;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 64LL);
  }
}
