/*
 * XREFs of ??_GDragRecognizer@@UEAAPEAXI@Z @ 0x18010C250
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

DragRecognizer *__fastcall DragRecognizer::`scalar deleting destructor'(DragRecognizer *this, char a2)
{
  *(_QWORD *)this = &GestureRecognizer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
