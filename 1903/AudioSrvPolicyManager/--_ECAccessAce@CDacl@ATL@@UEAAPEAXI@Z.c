/*
 * XREFs of ??_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x180030FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSid@ATL@@UEAA@XZ @ 0x180030070 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180034AC4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void **__fastcall ATL::CDacl::CAccessAce::`vector deleting destructor'(void **this, char a2)
{
  *this = &ATL::CAcl::CAce::`vftable';
  free(this[17]);
  ATL::CSid::~CSid((ATL::CSid *)(this + 1));
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x98);
  return this;
}
