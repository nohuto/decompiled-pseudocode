/*
 * XREFs of ??_ESystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18003C100
 * Callers:
 *     <none>
 * Callees:
 *     ??1SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x18003C13C (--1SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042DE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Windows::Gaming::Preview::GamesEnumeration::SystemDefaults *__fastcall Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::`vector deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::SystemDefaults *this,
        char a2)
{
  Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::~SystemDefaults(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
