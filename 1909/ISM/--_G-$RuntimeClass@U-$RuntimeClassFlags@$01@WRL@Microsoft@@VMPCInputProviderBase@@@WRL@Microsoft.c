/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180091BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x18013CE4C (--1MPCInputProviderBase@@UEAA@XZ.c)
 */

MPCInputProviderBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`scalar deleting destructor'(
        MPCInputProviderBase *a1,
        char a2)
{
  *((_DWORD *)a1 + 1157) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x1218);
  return a1;
}
