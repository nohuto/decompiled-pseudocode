/*
 * XREFs of ??_ECRegObject@ATL@@UEAAPEAXI@Z @ 0x14004E0C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CRegObject@ATL@@UEAA@XZ @ 0x14004DAB8 (--1CRegObject@ATL@@UEAA@XZ.c)
 */

ATL::CRegObject *__fastcall ATL::CRegObject::`vector deleting destructor'(ATL::CRegObject *this, char a2)
{
  ATL::CRegObject::~CRegObject(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
