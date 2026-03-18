/*
 * XREFs of ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x180222194
 * Callers:
 *     ??_GCBitmapLockUnaligned@@UEAAPEAXI@Z @ 0x1802221E0 (--_GCBitmapLockUnaligned@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ @ 0x180222508 (-UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ.c)
 */

void __fastcall CBitmapLockUnaligned::~CBitmapLockUnaligned(CBitmapLockUnaligned *this)
{
  *(_QWORD *)this = &CBitmapLockUnaligned::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapLockUnaligned::`vftable'{for `IBitmapLock'};
  *((_QWORD *)this + 3) = &CBitmapLockUnaligned::`vftable'{for `IWICBitmapLock'};
  CBitmapLockUnaligned::UnlockUnaligned(this);
  CBitmapLock::~CBitmapLock(this);
}
