/*
 * XREFs of ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x1802149C4
 * Callers:
 *     ??_GCBitmapLockUnaligned@@UEAAPEAXI@Z @ 0x180214A10 (--_GCBitmapLockUnaligned@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ @ 0x180214D6C (-UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ.c)
 */

void __fastcall CBitmapLockUnaligned::~CBitmapLockUnaligned(CBitmapLockUnaligned *this)
{
  *(_QWORD *)this = &CBitmapLockUnaligned::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapLockUnaligned::`vftable'{for `IBitmapLock'};
  *((_QWORD *)this + 3) = &CBitmapLockUnaligned::`vftable'{for `IWICBitmapLock'};
  CBitmapLockUnaligned::UnlockUnaligned(this);
  CBitmapLock::~CBitmapLock(this);
}
