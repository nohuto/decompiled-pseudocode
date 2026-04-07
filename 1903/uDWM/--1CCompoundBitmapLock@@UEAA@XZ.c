/*
 * XREFs of ??1CCompoundBitmapLock@@UEAA@XZ @ 0x180047E04
 * Callers:
 *     ??_GCCompoundBitmapLock@@UEAAPEAXI@Z @ 0x180047DC0 (--_GCCompoundBitmapLock@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompoundBitmapLock::~CCompoundBitmapLock(CCompoundBitmapLock *this)
{
  *(_QWORD *)this = &CCompoundBitmapLock::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CCompoundBitmapLock::`vftable'{for `IBitmapLock'};
  *((_QWORD *)this + 3) = &CCompoundBitmapLock::`vftable'{for `IWICBitmapLock'};
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 16LL))(*((_QWORD *)this + 4));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), 0LL);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 16LL))(*((_QWORD *)this + 5));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
