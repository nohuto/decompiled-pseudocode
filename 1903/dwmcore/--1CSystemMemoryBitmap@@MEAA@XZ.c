/*
 * XREFs of ??1CSystemMemoryBitmap@@MEAA@XZ @ 0x1800398B0
 * Callers:
 *     ??1CClientMemoryBitmap@@MEAA@XZ @ 0x18003982C (--1CClientMemoryBitmap@@MEAA@XZ.c)
 *     ??_ECSystemMemoryBitmap@@MEAAPEAXI@Z @ 0x1802227E0 (--_ECSystemMemoryBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
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
    operator delete(v2);
  CBitmap::~CBitmap(this);
}
