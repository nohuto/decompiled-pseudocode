/*
 * XREFs of ??1CCPAudioHistoryReader@@UEAA@XZ @ 0x1400519E4
 * Callers:
 *     ??_ECCPAudioHistoryReader@@UEAAPEAXI@Z @ 0x140051A60 (--_ECCPAudioHistoryReader@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCPAudioHistoryReader::~CCPAudioHistoryReader(CCPAudioHistoryReader *this)
{
  *(_QWORD *)this = &CCPAudioHistoryReader::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
}
