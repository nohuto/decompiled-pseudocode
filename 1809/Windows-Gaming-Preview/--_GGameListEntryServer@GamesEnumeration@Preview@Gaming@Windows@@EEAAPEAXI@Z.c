/*
 * XREFs of ??_GGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@EEAAPEAXI@Z @ 0x18000ED30
 * Callers:
 *     <none>
 * Callees:
 *     ??1GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@EEAA@XZ @ 0x180026CEC (--1GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@EEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042A84 (--3@YAXPEAX_K@Z.c)
 */

Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::`scalar deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        char a2)
{
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::~GameListEntryServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x138uLL);
  return this;
}
