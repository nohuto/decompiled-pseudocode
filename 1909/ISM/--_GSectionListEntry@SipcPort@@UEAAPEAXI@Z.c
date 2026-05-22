/*
 * XREFs of ??_GSectionListEntry@SipcPort@@UEAAPEAXI@Z @ 0x1800D43C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SipcPort::SectionListEntry *__fastcall SipcPort::SectionListEntry::`scalar deleting destructor'(
        SipcPort::SectionListEntry *this,
        char a2)
{
  *(_QWORD *)this = &SipcPort::SectionListEntry::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
