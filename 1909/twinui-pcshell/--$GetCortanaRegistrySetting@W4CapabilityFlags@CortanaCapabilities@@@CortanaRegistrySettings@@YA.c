/*
 * XREFs of ??$GetCortanaRegistrySetting@W4CapabilityFlags@CortanaCapabilities@@@CortanaRegistrySettings@@YAJPEBGP6A?AW4CapabilityFlags@CortanaCapabilities@@K@ZW412@PEAW412@PEA_N@Z @ 0x180049748
 * Callers:
 *     ?GetCortanaCapabilities@CortanaCapabilities@@YAJPEAW4CapabilityFlags@1@PEA_N@Z @ 0x1800495C8 (-GetCortanaCapabilities@CortanaCapabilities@@YAJPEAW4CapabilityFlags@1@PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaRegistrySettings::GetCortanaRegistrySetting<enum CortanaCapabilities::CapabilityFlags>(
        LPCWSTR lpValue,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  LSTATUS ValueW; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+5Ch] [rbp+14h]
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = HIDWORD(a2);
  *a4 = 0;
  v12 = 0;
  v10 = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
             lpValue,
             0x10u,
             0LL,
             &v12,
             &v10);
  v6 = ValueW;
  if ( !ValueW )
  {
    *a4 = v12;
    return 0LL;
  }
  if ( ValueW == 1168 || ValueW == 2 )
    return 0LL;
  if ( ValueW > 0 )
    v6 = (unsigned __int16)ValueW | 0x80070000;
  if ( (v6 & 0x80000000) != 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D,
      (unsigned int)"internal\\onecoreuapshell\\inc\\cortanaregistrysettings.h",
      (const char *)v6,
      v8);
  return v6;
}
