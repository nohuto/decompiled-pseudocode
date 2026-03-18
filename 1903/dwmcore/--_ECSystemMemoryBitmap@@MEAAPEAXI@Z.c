/*
 * XREFs of ??_ECSystemMemoryBitmap@@MEAAPEAXI@Z @ 0x1802227E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSystemMemoryBitmap@@MEAA@XZ @ 0x1800398B0 (--1CSystemMemoryBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CSystemMemoryBitmap *__fastcall CSystemMemoryBitmap::`vector deleting destructor'(CSystemMemoryBitmap *this, char a2)
{
  CSystemMemoryBitmap::~CSystemMemoryBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
