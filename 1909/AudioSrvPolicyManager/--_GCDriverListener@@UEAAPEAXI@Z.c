/*
 * XREFs of ??_GCDriverListener@@UEAAPEAXI@Z @ 0x180029DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDriverListener@@UEAA@XZ @ 0x180029E0C (--1CDriverListener@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800349C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CDriverListener *__fastcall CDriverListener::`scalar deleting destructor'(CDriverListener *this, char a2)
{
  CDriverListener::~CDriverListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x208);
  return this;
}
