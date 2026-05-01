/*
 * XREFs of ?GetCortanaCapabilities@CortanaCapabilities@@YAJPEAW4CapabilityFlags@1@PEA_N@Z @ 0x18003D92C
 * Callers:
 *     ?ShellAppLaunchWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18003DB60 (-ShellAppLaunchWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYP.c)
 *     ?HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z @ 0x18008088C (-HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z.c)
 *     ?RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801C7EAC (-RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ??$GetCortanaRegistrySetting@W4CapabilityFlags@CortanaCapabilities@@@CortanaRegistrySettings@@YAJPEBGP6A?AW4CapabilityFlags@CortanaCapabilities@@K@ZW412@PEAW412@PEA_N@Z @ 0x18003DAAC (--$GetCortanaRegistrySetting@W4CapabilityFlags@CortanaCapabilities@@@CortanaRegistrySettings@@YA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18015DD2C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

__int64 __fastcall CortanaCapabilities::GetCortanaCapabilities(
        CortanaCapabilities *this,
        enum CortanaCapabilities::CapabilityFlags *a2,
        bool *a3)
{
  unsigned int ValueW; // eax
  int v4; // ebx
  __int64 v6; // rdx
  unsigned int v7; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v9; // [rsp+58h] [rbp+10h] BYREF
  int v10; // [rsp+5Ch] [rbp+14h]
  DWORD v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = HIDWORD(a2);
  v9 = 0;
  v11 = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
             L"CortanaIsReplaced",
             0x10u,
             0LL,
             &v9,
             &v11);
  if ( ValueW != 2 )
  {
    if ( ValueW )
    {
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        (void *)0x50,
        (unsigned int)"internal\\onecoreuapshell\\inc\\cortanacapabilities.h",
        (const char *)ValueW,
        v7);
    }
    else if ( v9 == 1 )
    {
      v4 = CortanaRegistrySettings::GetCortanaRegistrySetting<enum CortanaCapabilities::CapabilityFlags>(L"StoreCortanaCapabilityFlags");
      if ( v4 >= 0 )
        return 0LL;
      v6 = 223LL;
      goto LABEL_10;
    }
  }
  v4 = CortanaRegistrySettings::GetCortanaRegistrySetting<enum CortanaCapabilities::CapabilityFlags>(L"CortanaCapabilityFlags");
  if ( v4 >= 0 )
    return 0LL;
  v6 = 232LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (unsigned int)"internal\\onecoreuapshell\\inc\\cortanacapabilities.h",
    (const char *)(unsigned int)v4,
    v7);
  return (unsigned int)v4;
}
