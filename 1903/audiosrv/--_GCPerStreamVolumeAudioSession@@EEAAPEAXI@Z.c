/*
 * XREFs of ??_GCPerStreamVolumeAudioSession@@EEAAPEAXI@Z @ 0x18002B2D8
 * Callers:
 *     ??_ECPerStreamVolumeAudioSession@@GCA@EAAPEAXI@Z @ 0x18006B9B0 (--_ECPerStreamVolumeAudioSession@@GCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CPerStreamVolumeAudioSession@@EEAA@XZ @ 0x18002B314 (--1CPerStreamVolumeAudioSession@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
