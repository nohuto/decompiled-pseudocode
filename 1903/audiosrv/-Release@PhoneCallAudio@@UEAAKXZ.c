/*
 * XREFs of ?Release@PhoneCallAudio@@UEAAKXZ @ 0x180061C90
 * Callers:
 *     ?Release@PhoneCallAudio@@W7EAAKXZ @ 0x18006C270 (-Release@PhoneCallAudio@@W7EAAKXZ.c)
 *     ?Release@PhoneCallAudio@@WBA@EAAKXZ @ 0x18006C280 (-Release@PhoneCallAudio@@WBA@EAAKXZ.c)
 *     ?Release@PhoneCallAudio@@WBI@EAAKXZ @ 0x18006C290 (-Release@PhoneCallAudio@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall PhoneCallAudio::Release(PhoneCallAudio *this)
{
  return CUnknown::Release((PhoneCallAudio *)((char *)this + 24));
}
