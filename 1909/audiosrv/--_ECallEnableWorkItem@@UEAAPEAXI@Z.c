/*
 * XREFs of ??_ECallEnableWorkItem@@UEAAPEAXI@Z @ 0x180147150
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CallEnableWorkItem *__fastcall CallEnableWorkItem::`vector deleting destructor'(CallEnableWorkItem *this, char a2)
{
  *(_QWORD *)this = &PhoneTopologyWorkItem::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x438);
  return this;
}
