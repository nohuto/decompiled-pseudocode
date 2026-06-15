/*
 * XREFs of ??_GPhoneTopology@@MEAAPEAXI@Z @ 0x180051030
 * Callers:
 *     ??_EPhoneTopology@@O7EAAPEAXI@Z @ 0x180069980 (--_EPhoneTopology@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1PhoneTopology@@MEAA@XZ @ 0x1800510A8 (--1PhoneTopology@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

PhoneTopology *__fastcall PhoneTopology::`scalar deleting destructor'(PhoneTopology *this, char a2)
{
  PhoneTopology::~PhoneTopology(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x518);
  return this;
}
