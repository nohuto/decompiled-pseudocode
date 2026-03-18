/*
 * XREFs of ??_ECCustomBlur@@MEAAPEAXI@Z @ 0x1800D7840
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CCustomBlur@@MEAA@XZ @ 0x1800D787C (--1CCustomBlur@@MEAA@XZ.c)
 */

CCustomBlur *__fastcall CCustomBlur::`vector deleting destructor'(CCustomBlur *this, char a2)
{
  CCustomBlur::~CCustomBlur(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
