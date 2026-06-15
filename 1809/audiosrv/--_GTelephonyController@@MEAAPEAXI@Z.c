/*
 * XREFs of ??_GTelephonyController@@MEAAPEAXI@Z @ 0x180145684
 * Callers:
 *     ??_ETelephonyController@@O7EAAPEAXI@Z @ 0x1800699A0 (--_ETelephonyController@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TelephonyController@@MEAA@XZ @ 0x18014560C (--1TelephonyController@@MEAA@XZ.c)
 */

TelephonyController *__fastcall TelephonyController::`scalar deleting destructor'(TelephonyController *this, char a2)
{
  TelephonyController::~TelephonyController(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE0);
  return this;
}
