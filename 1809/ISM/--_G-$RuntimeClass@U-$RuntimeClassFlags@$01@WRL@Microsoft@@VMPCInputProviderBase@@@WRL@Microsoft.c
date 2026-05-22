/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800F47D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x1801007B8 (--1MPCInputProviderBase@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

MPCInputProviderBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`scalar deleting destructor'(
        MPCInputProviderBase *a1,
        char a2)
{
  *((_DWORD *)a1 + 939) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xEB0);
  return a1;
}
