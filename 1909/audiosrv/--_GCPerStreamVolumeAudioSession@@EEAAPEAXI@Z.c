/*
 * XREFs of ??_GCPerStreamVolumeAudioSession@@EEAAPEAXI@Z @ 0x18002E168
 * Callers:
 *     ??_ECPerStreamVolumeAudioSession@@GCA@EAAPEAXI@Z @ 0x18006CA10 (--_ECPerStreamVolumeAudioSession@@GCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x18002E1A4 (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CPerStreamVolumeAudioSession *__fastcall CPerStreamVolumeAudioSession::`scalar deleting destructor'(
        CPerStreamVolumeAudioSession *this,
        char a2)
{
  CPerStreamVolumeAudioSession::~CPerStreamVolumeAudioSession(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x448);
  return this;
}
