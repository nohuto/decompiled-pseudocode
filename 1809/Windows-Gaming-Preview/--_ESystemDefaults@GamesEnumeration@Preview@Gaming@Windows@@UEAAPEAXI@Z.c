/*
 * XREFs of ??_ESystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18003BDC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x18003BDFC (--1SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042A84 (--3@YAXPEAX_K@Z.c)
 */

Windows::Gaming::Preview::GamesEnumeration::SystemDefaults *__fastcall Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::`vector deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::SystemDefaults *this,
        char a2)
{
  Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::~SystemDefaults(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x30uLL);
  return this;
}
