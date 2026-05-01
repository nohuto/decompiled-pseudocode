/*
 * XREFs of ??_EPrimaryAppProxyBase@@UEAAPEAXI@Z @ 0x180097010
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

PrimaryAppProxyBase *__fastcall PrimaryAppProxyBase::`vector deleting destructor'(PrimaryAppProxyBase *this, char a2)
{
  *(_QWORD *)this = &PrimaryAppProxyBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)8);
  return this;
}
