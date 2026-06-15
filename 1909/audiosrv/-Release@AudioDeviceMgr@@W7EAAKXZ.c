/*
 * XREFs of ?Release@AudioDeviceMgr@@W7EAAKXZ @ 0x18006D7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall AudioDeviceMgr::Release(__int64 a1)
{
  return AudioDeviceMgr::Release((AudioDeviceMgr *)(a1 - 8));
}
