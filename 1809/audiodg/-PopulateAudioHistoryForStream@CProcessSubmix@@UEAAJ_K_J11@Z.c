/*
 * XREFs of ?PopulateAudioHistoryForStream@CProcessSubmix@@UEAAJ_K_J11@Z @ 0x140042320
 * Callers:
 *     ?PopulateAudioHistoryForStream@CProcessSubmix@@WBA@EAAJ_K_J11@Z @ 0x14001E3F0 (-PopulateAudioHistoryForStream@CProcessSubmix@@WBA@EAAJ_K_J11@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmix::PopulateAudioHistoryForStream(
        CProcessSubmix *this,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5)
{
  return CSubmixImpl::PopulateAudioHistoryForStream((CProcessSubmix *)((char *)this + 16), a2, a3, a4, a5);
}
