/*
 * XREFs of ??_ECClientMemoryBitmap@@MEAAPEAXI@Z @ 0x1800397F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CClientMemoryBitmap@@MEAA@XZ @ 0x18003982C (--1CClientMemoryBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CClientMemoryBitmap *__fastcall CClientMemoryBitmap::`vector deleting destructor'(CClientMemoryBitmap *this, char a2)
{
  CClientMemoryBitmap::~CClientMemoryBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x100uLL);
  return this;
}
