/*
 * XREFs of ??_GPhoneTopology@@MEAAPEAXI@Z @ 0x180054A84
 * Callers:
 *     ??_EPhoneTopology@@O7EAAPEAXI@Z @ 0x18006C820 (--_EPhoneTopology@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1PhoneTopology@@MEAA@XZ @ 0x180054AC0 (--1PhoneTopology@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

PhoneTopology *__fastcall PhoneTopology::`scalar deleting destructor'(PhoneTopology *this, char a2)
{
  PhoneTopology::~PhoneTopology(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x518);
  return this;
}
