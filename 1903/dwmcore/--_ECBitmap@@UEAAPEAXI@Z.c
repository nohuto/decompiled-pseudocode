/*
 * XREFs of ??_ECBitmap@@UEAAPEAXI@Z @ 0x180222E70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBitmap@@UEAA@XZ @ 0x180039C9C (--1CBitmap@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CBitmap::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CBitmap::~CBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
