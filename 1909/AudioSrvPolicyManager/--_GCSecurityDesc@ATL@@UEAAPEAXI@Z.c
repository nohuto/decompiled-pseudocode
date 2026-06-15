/*
 * XREFs of ??_GCSecurityDesc@ATL@@UEAAPEAXI@Z @ 0x180031450
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180031980 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ATL::CSecurityDesc *__fastcall ATL::CSecurityDesc::`scalar deleting destructor'(ATL::CSecurityDesc *this, char a2)
{
  *(_QWORD *)this = &ATL::CSecurityDesc::`vftable';
  ATL::CSecurityDesc::Clear(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
