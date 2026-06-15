/*
 * XREFs of ??_EStreamResourceConsumer@@UEAAPEAXI@Z @ 0x18013E0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

StreamResourceConsumer *__fastcall StreamResourceConsumer::`vector deleting destructor'(
        StreamResourceConsumer *this,
        char a2)
{
  *(_QWORD *)this = &KeywordDetectorResourceConsumer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x3C8);
  return this;
}
