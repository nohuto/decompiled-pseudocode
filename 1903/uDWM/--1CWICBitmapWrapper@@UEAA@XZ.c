/*
 * XREFs of ??1CWICBitmapWrapper@@UEAA@XZ @ 0x180047BB4
 * Callers:
 *     ??_GCWICBitmapWrapper@@UEAAPEAXI@Z @ 0x180047B70 (--_GCWICBitmapWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWICBitmapWrapper::~CWICBitmapWrapper(CWICBitmapWrapper *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CWICBitmapWrapper::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CWICBitmapWrapper::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CWICBitmapWrapper::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CWICBitmapWrapper::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CWICBitmapWrapper::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 14) = &CWICBitmapWrapper::`vftable'{for `CMTALock'};
  v2 = *((_QWORD *)this + 30);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CBitmap::~CBitmap(this);
}
