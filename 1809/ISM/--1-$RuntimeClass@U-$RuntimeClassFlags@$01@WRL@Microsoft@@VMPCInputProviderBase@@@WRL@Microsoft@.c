/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAA@XZ @ 0x1800F4790
 * Callers:
 *     _MPCProcessor::Create_::_1_::dtor$3 @ 0x1801350D3 (_MPCProcessor--Create_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>(
        MPCInputProviderBase *a1)
{
  *((_DWORD *)a1 + 939) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(a1);
}
