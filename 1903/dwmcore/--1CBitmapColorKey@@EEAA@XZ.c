/*
 * XREFs of ??1CBitmapColorKey@@EEAA@XZ @ 0x1802612BC
 * Callers:
 *     ??_GCBitmapColorKey@@EEAAPEAXI@Z @ 0x180261320 (--_GCBitmapColorKey@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBitmapColorKey::~CBitmapColorKey(CBitmapColorKey *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CBitmapColorKey::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CBitmapColorKey::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CBitmapColorKey::`vftable'{for `IWICBitmapSource'};
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
