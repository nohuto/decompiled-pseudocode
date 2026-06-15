/*
 * XREFs of ??_ECServerAudioSessionControl@@UEAAPEAXI@Z @ 0x18002E73C
 * Callers:
 *     ??_ECServerAudioSessionControl@@W7EAAPEAXI@Z @ 0x18006BB40 (--_ECServerAudioSessionControl@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CServerAudioSessionControl *__fastcall CServerAudioSessionControl::`vector deleting destructor'(
        CServerAudioSessionControl *this,
        char a2)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
