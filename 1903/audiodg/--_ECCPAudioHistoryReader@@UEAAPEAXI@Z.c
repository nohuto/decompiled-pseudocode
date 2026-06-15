/*
 * XREFs of ??_ECCPAudioHistoryReader@@UEAAPEAXI@Z @ 0x140051A60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CCPAudioHistoryReader@@UEAA@XZ @ 0x1400519E4 (--1CCPAudioHistoryReader@@UEAA@XZ.c)
 */

CCPAudioHistoryReader *__fastcall CCPAudioHistoryReader::`vector deleting destructor'(
        CCPAudioHistoryReader *this,
        char a2)
{
  CCPAudioHistoryReader::~CCPAudioHistoryReader(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
