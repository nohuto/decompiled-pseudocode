/*
 * XREFs of ??_ECAccessObjectAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x1800CED90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x1800CE97C (--1CAce@CAcl@ATL@@UEAA@XZ.c)
 */

void **__fastcall ATL::CDacl::CAccessObjectAce::`vector deleting destructor'(void **this, char a2)
{
  *this = &ATL::CDacl::CAccessObjectAce::`vftable';
  operator delete(this[19], (const struct std::nothrow_t *)0x10);
  operator delete(this[20], (const struct std::nothrow_t *)0x10);
  *this = &ATL::CDacl::CAccessAce::`vftable';
  ATL::CAcl::CAce::~CAce(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
