/*
 * XREFs of ??_ECAccessObjectAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x180031180
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSid@ATL@@UEAA@XZ @ 0x18002FF70 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall ATL::CDacl::CAccessObjectAce::`vector deleting destructor'(void **this, char a2)
{
  void *v4; // rcx

  *this = &ATL::CDacl::CAccessObjectAce::`vftable';
  operator delete(this[19], (const struct std::nothrow_t *)0x10);
  operator delete(this[20], (const struct std::nothrow_t *)0x10);
  v4 = this[17];
  *this = &ATL::CAcl::CAce::`vftable';
  free(v4);
  ATL::CSid::~CSid((ATL::CSid *)(this + 1));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
