/*
 * XREFs of ??_GCSid@ATL@@UEAAPEAXI@Z @ 0x18002FD70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSid@ATL@@UEAA@XZ @ 0x18002FF70 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ATL::CSid *__fastcall ATL::CSid::`scalar deleting destructor'(ATL::CSid *this, char a2)
{
  ATL::CSid::~CSid(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x78);
  return this;
}
