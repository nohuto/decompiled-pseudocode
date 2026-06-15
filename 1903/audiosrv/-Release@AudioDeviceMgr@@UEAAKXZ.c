/*
 * XREFs of ?Release@AudioDeviceMgr@@UEAAKXZ @ 0x180061CB0
 * Callers:
 *     ?Release@AudioDeviceMgr@@W7EAAKXZ @ 0x18006C7A0 (-Release@AudioDeviceMgr@@W7EAAKXZ.c)
 *     ?Release@AudioDeviceMgr@@WBA@EAAKXZ @ 0x18006C7B0 (-Release@AudioDeviceMgr@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall AudioDeviceMgr::Release(AudioDeviceMgr *this)
{
  return CUnknown::Release((AudioDeviceMgr *)((char *)this + 16));
}
