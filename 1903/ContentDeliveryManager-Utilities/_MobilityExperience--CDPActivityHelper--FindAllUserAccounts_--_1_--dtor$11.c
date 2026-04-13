/*
 * XREFs of _MobilityExperience::CDPActivityHelper::FindAllUserAccounts_::_1_::dtor$11 @ 0x1800CE73A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180004860 (--1-$ComPtr@UILauncherOptions2@System@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall MobilityExperience::CDPActivityHelper::FindAllUserAccounts_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~0x20u;
    Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>((__int64 *)(a2 + 120));
  }
}
