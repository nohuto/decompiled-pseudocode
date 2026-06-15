/*
 * XREFs of ?AddRef@CAudioSession@@UEAAKXZ @ 0x180049A30
 * Callers:
 *     ?AddRef@CPerEndpointVolumeAudioSession@@G7EAAKXZ @ 0x18006CA20 (-AddRef@CPerEndpointVolumeAudioSession@@G7EAAKXZ.c)
 *     ?AddRef@CAudioSession@@WBA@EAAKXZ @ 0x18006CA30 (-AddRef@CAudioSession@@WBA@EAAKXZ.c)
 *     ?AddRef@CAudioSession@@WBI@EAAKXZ @ 0x18006CA40 (-AddRef@CAudioSession@@WBI@EAAKXZ.c)
 *     ?AddRef@CAudioSession@@WCA@EAAKXZ @ 0x18006CA50 (-AddRef@CAudioSession@@WCA@EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@GDNI@EAAKXZ @ 0x18006CA60 (-AddRef@CPerEndpointVolumeAudioSession@@GDNI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::AddRef(CAudioSession *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
