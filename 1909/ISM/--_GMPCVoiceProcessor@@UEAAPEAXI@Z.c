/*
 * XREFs of ??_GMPCVoiceProcessor@@UEAAPEAXI@Z @ 0x180091C70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x18013CE4C (--1MPCInputProviderBase@@UEAA@XZ.c)
 */

MPCVoiceProcessor *__fastcall MPCVoiceProcessor::`scalar deleting destructor'(MPCVoiceProcessor *this, char a2)
{
  *((_DWORD *)this + 1157) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1220);
  return this;
}
