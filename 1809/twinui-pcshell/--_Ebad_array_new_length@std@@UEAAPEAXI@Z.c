/*
 * XREFs of ??_Ebad_array_new_length@std@@UEAAPEAXI@Z @ 0x180084ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     _o___std_exception_destroy_0 @ 0x180084FAA (_o___std_exception_destroy_0.c)
 */

std::bad_array_new_length *__fastcall std::bad_array_new_length::`vector deleting destructor'(
        std::bad_array_new_length *this,
        char a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0((char *)this + 8);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
