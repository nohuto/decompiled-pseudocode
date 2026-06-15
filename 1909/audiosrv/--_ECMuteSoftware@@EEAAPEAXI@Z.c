/*
 * XREFs of ??_ECMuteSoftware@@EEAAPEAXI@Z @ 0x1800C8C10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMuteSoftware@@EEAA@XZ @ 0x1800C8934 (--1CMuteSoftware@@EEAA@XZ.c)
 */

CMuteSoftware *__fastcall CMuteSoftware::`vector deleting destructor'(CMuteSoftware *this, char a2)
{
  CMuteSoftware::~CMuteSoftware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
