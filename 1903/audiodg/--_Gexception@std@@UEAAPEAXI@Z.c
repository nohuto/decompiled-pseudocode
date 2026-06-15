/*
 * XREFs of ??_Gexception@std@@UEAAPEAXI@Z @ 0x1400265B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _o___std_exception_destroy_0 @ 0x1400168FE (_o___std_exception_destroy_0.c)
 */

std::exception *__fastcall std::exception::`scalar deleting destructor'(std::exception *this, char a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
