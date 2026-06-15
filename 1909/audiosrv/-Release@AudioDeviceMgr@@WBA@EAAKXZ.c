/*
 * XREFs of ?Release@AudioDeviceMgr@@WBA@EAAKXZ @ 0x18006D7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall AudioDeviceMgr::Release(__int64 a1)
{
  return AudioDeviceMgr::Release((AudioDeviceMgr *)(a1 - 16));
}
