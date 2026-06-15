/*
 * XREFs of ??_GDynamicAudioEndpointManager@@UEAAPEAXI@Z @ 0x1800D8AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DynamicAudioEndpointManager@@UEAA@XZ @ 0x1800D89C4 (--1DynamicAudioEndpointManager@@UEAA@XZ.c)
 */

DynamicAudioEndpointManager *__fastcall DynamicAudioEndpointManager::`scalar deleting destructor'(
        DynamicAudioEndpointManager *this,
        char a2)
{
  DynamicAudioEndpointManager::~DynamicAudioEndpointManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x3E0);
  return this;
}
