/*
 * XREFs of ??1CClientMemoryBitmap@@UEAA@XZ @ 0x180092970
 * Callers:
 *     ??_ECClientMemoryBitmap@@UEAAPEAXI@Z @ 0x180092930 (--_ECClientMemoryBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CClientMemoryBitmap::~CClientMemoryBitmap(CClientMemoryBitmap *this)
{
  __int64 v2; // rcx

  *((_QWORD *)this + 29) = 0LL;
  *(_QWORD *)this = &CClientMemoryBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CClientMemoryBitmap::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 28) = &CSystemMemoryBitmap::`vftable';
  v2 = *((_QWORD *)this + 31);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CSystemMemoryBitmap::~CSystemMemoryBitmap(this);
}
