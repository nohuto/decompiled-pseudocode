/*
 * XREFs of ??_GFullScreenPositioner@@UEAAPEAXI@Z @ 0x18016BE2C
 * Callers:
 *     ??_EFullScreenPositioner@@WCA@EAAPEAXI@Z @ 0x1800B3970 (--_EFullScreenPositioner@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1FullScreenPositioner@@UEAA@XZ @ 0x18016B9C4 (--1FullScreenPositioner@@UEAA@XZ.c)
 */

FullScreenPositioner *__fastcall FullScreenPositioner::`scalar deleting destructor'(
        FullScreenPositioner *this,
        char a2)
{
  FullScreenPositioner::~FullScreenPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1B0);
  return this;
}
