/*
 * XREFs of ??_ECProcess@@MEAAPEAXI@Z @ 0x1800148A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CProcess@@MEAA@XZ @ 0x1800157CC (--1CProcess@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CProcess *__fastcall CProcess::`vector deleting destructor'(CProcess *this, char a2)
{
  CProcess::~CProcess(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x330);
  return this;
}
