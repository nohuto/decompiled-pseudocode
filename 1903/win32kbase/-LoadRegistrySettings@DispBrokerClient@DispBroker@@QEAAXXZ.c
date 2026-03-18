/*
 * XREFs of ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x1C0076AB0
 * Callers:
 *     ?DispBrokerUpdateKernelDisplayPolicies@@YAXXZ @ 0x1C0076A08 (-DispBrokerUpdateKernelDisplayPolicies@@YAXXZ.c)
 *     Win32UserInitialize @ 0x1C02673B4 (Win32UserInitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall DispBroker::DispBrokerClient::LoadRegistrySettings(DispBroker::DispBrokerClient *this)
{
  int CurrentModeImplSupported; // eax
  __int64 v3; // rcx
  int CurrentModeImpl; // edx

  CurrentModeImplSupported = IsDispBrokerGetCurrentModeImplSupported();
  CurrentModeImpl = 0;
  if ( CurrentModeImplSupported >= 0 )
    CurrentModeImpl = DispBrokerGetCurrentModeImpl(v3, 0LL);
  *(_DWORD *)this = CurrentModeImpl;
}
