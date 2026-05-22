/*
 * XREFs of ??_GClickRecognizer@@UEAAPEAXI@Z @ 0x18010B970
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ClickRecognizer *__fastcall ClickRecognizer::`scalar deleting destructor'(ClickRecognizer *this, char a2)
{
  *(_QWORD *)this = &GestureRecognizer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}
