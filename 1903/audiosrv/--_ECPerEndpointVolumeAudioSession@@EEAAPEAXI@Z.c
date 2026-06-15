/*
 * XREFs of ??_ECPerEndpointVolumeAudioSession@@EEAAPEAXI@Z @ 0x1800CCFD8
 * Callers:
 *     ??_ECPerEndpointVolumeAudioSession@@GCA@EAAPEAXI@Z @ 0x18006B9A0 (--_ECPerEndpointVolumeAudioSession@@GCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CPerEndpointVolumeAudioSession@@EEAA@XZ @ 0x1800CCD04 (--1CPerEndpointVolumeAudioSession@@EEAA@XZ.c)
 */

CPerEndpointVolumeAudioSession *__fastcall CPerEndpointVolumeAudioSession::`vector deleting destructor'(
        CPerEndpointVolumeAudioSession *this,
        char a2)
{
  CPerEndpointVolumeAudioSession::~CPerEndpointVolumeAudioSession(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x410);
  return this;
}
