/*
 * XREFs of ?AddRef@CAudioStream@@UEAAKXZ @ 0x180043320
 * Callers:
 *     ?AddRef@CAudioStream@@W7EAAKXZ @ 0x180068B30 (-AddRef@CAudioStream@@W7EAAKXZ.c)
 *     ?AddRef@PhoneCallAudio@@WBA@EAAKXZ @ 0x180068B40 (-AddRef@PhoneCallAudio@@WBA@EAAKXZ.c)
 *     ?AddRef@PhoneCallAudio@@WBI@EAAKXZ @ 0x180068B50 (-AddRef@PhoneCallAudio@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::AddRef(CAudioStream *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}
