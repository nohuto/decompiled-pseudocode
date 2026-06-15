/*
 * XREFs of ??_GCExclusiveModeListener@@UEAAPEAXI@Z @ 0x1801130A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CExclusiveModeListener@@UEAA@XZ @ 0x180118FC8 (--1CExclusiveModeListener@@UEAA@XZ.c)
 */

CExclusiveModeListener *__fastcall CExclusiveModeListener::`scalar deleting destructor'(
        CExclusiveModeListener *this,
        char a2)
{
  CExclusiveModeListener::~CExclusiveModeListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x180);
  return this;
}
