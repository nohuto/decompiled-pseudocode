/*
 * XREFs of ??_GCBitmapLock@@UEAAPEAXI@Z @ 0x180048570
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CBitmapLock@@UEAA@XZ @ 0x1800485AC (--1CBitmapLock@@UEAA@XZ.c)
 */

CBitmapLock *__fastcall CBitmapLock::`scalar deleting destructor'(CBitmapLock *this, char a2)
{
  CBitmapLock::~CBitmapLock(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
