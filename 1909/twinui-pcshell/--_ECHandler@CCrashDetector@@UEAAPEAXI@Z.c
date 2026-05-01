/*
 * XREFs of ??_ECHandler@CCrashDetector@@UEAAPEAXI@Z @ 0x18015B090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CCrashDetector::CHandler *__fastcall CCrashDetector::CHandler::`vector deleting destructor'(
        CCrashDetector::CHandler *this,
        char a2)
{
  *(_QWORD *)this = &CCrashDetector::CHandler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)8);
  return this;
}
