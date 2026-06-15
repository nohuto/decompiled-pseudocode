/*
 * XREFs of ??_GPhoneCallAudio@@MEAAPEAXI@Z @ 0x1801279A4
 * Callers:
 *     ??_EPhoneCallAudio@@OBI@EAAPEAXI@Z @ 0x18006C230 (--_EPhoneCallAudio@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PhoneCallAudio@@MEAA@XZ @ 0x1801278A8 (--1PhoneCallAudio@@MEAA@XZ.c)
 */

PhoneCallAudio *__fastcall PhoneCallAudio::`scalar deleting destructor'(PhoneCallAudio *this, char a2)
{
  PhoneCallAudio::~PhoneCallAudio(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA0);
  return this;
}
