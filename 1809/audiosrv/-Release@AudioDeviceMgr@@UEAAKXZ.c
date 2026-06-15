/*
 * XREFs of ?Release@AudioDeviceMgr@@UEAAKXZ @ 0x18005E130
 * Callers:
 *     ?Release@AudioDeviceMgr@@W7EAAKXZ @ 0x180069900 (-Release@AudioDeviceMgr@@W7EAAKXZ.c)
 *     ?Release@AudioDeviceMgr@@WBA@EAAKXZ @ 0x180069910 (-Release@AudioDeviceMgr@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall AudioDeviceMgr::Release(AudioDeviceMgr *this)
{
  return CUnknown::Release((AudioDeviceMgr *)((char *)this + 16));
}
