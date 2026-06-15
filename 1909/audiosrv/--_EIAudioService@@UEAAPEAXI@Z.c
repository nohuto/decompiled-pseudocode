/*
 * XREFs of ??_EIAudioService@@UEAAPEAXI@Z @ 0x1800BE6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

IAudioService *__fastcall IAudioService::`vector deleting destructor'(IAudioService *this, char a2)
{
  *(_QWORD *)this = &IAudioService::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
