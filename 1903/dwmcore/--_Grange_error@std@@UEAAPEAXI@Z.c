/*
 * XREFs of ??_Grange_error@std@@UEAAPEAXI@Z @ 0x180175320
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

std::range_error *__fastcall std::range_error::`scalar deleting destructor'(std::range_error *this, char a2)
{
  *(_QWORD *)this = &stdext::exception::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
