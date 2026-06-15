/*
 * XREFs of ?AddRef@AudioDeviceMgr@@WBA@EAAKXZ @ 0x18006C770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::AddRef(__int64 a1)
{
  return AudioDeviceMgr::AddRef((AudioDeviceMgr *)(a1 - 16));
}
