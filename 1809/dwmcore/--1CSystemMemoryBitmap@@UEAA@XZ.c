/*
 * XREFs of ??1CSystemMemoryBitmap@@UEAA@XZ @ 0x1800929F4
 * Callers:
 *     ??1CClientMemoryBitmap@@UEAA@XZ @ 0x180092970 (--1CClientMemoryBitmap@@UEAA@XZ.c)
 *     ??_ECSystemMemoryBitmap@@UEAAPEAXI@Z @ 0x1802138A0 (--_ECSystemMemoryBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CSystemMemoryBitmap::~CSystemMemoryBitmap(CSystemMemoryBitmap *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CSystemMemoryBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CClientMemoryBitmap::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CSystemMemoryBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 28) = &CSystemMemoryBitmap::`vftable';
  v2 = (void *)*((_QWORD *)this + 29);
  if ( v2 )
    WPF::ProcessHeapImpl::Free(v2);
  CBitmap::~CBitmap(this);
}
