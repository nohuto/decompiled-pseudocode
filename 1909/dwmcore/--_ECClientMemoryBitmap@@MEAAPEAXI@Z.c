/*
 * XREFs of ??_ECClientMemoryBitmap@@MEAAPEAXI@Z @ 0x180047CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CClientMemoryBitmap@@MEAA@XZ @ 0x180047D0C (--1CClientMemoryBitmap@@MEAA@XZ.c)
 */

CClientMemoryBitmap *__fastcall CClientMemoryBitmap::`vector deleting destructor'(CClientMemoryBitmap *this, char a2)
{
  CClientMemoryBitmap::~CClientMemoryBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
