/*
 * XREFs of ??_Gnarrowing_error@gsl@@UEAAPEAXI@Z @ 0x180173BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 */

gsl::narrowing_error *__fastcall gsl::narrowing_error::`scalar deleting destructor'(
        gsl::narrowing_error *this,
        char a2)
{
  *(_QWORD *)this = &stdext::exception::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
