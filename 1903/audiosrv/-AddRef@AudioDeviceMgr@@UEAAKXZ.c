/*
 * XREFs of ?AddRef@AudioDeviceMgr@@UEAAKXZ @ 0x180049A50
 * Callers:
 *     ?AddRef@AudioDeviceMgr@@W7EAAKXZ @ 0x18006C760 (-AddRef@AudioDeviceMgr@@W7EAAKXZ.c)
 *     ?AddRef@AudioDeviceMgr@@WBA@EAAKXZ @ 0x18006C770 (-AddRef@AudioDeviceMgr@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::AddRef(AudioDeviceMgr *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
