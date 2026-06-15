/*
 * XREFs of ?PopulateAudioHistoryForStream@CStreamGroup@@UEAAJ_K_J11@Z @ 0x140031E80
 * Callers:
 *     ?PopulateAudioHistoryForStream@CStreamGroup@@WBI@EAAJ_K_J11@Z @ 0x14001DB90 (-PopulateAudioHistoryForStream@CStreamGroup@@WBI@EAAJ_K_J11@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamGroup::PopulateAudioHistoryForStream(
        CStreamGroup *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5)
{
  return CSubmixImpl::PopulateAudioHistoryForStream((CStreamGroup *)((char *)this + 24), a2, a3, a4, a5);
}
