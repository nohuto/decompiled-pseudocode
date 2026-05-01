/*
 * XREFs of ?HasCortanaCapabilities@CortanaCapabilities@@YAJW4CapabilityFlags@1@PEA_N1@Z @ 0x180010594
 * Callers:
 *     ?GetSearchboxTaskbarMode@@YA?AW4SearchboxTaskbarMode@@XZ @ 0x180010628 (-GetSearchboxTaskbarMode@@YA-AW4SearchboxTaskbarMode@@XZ.c)
 *     ?ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z @ 0x18029CBEC (-ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaCapabilities::HasCortanaCapabilities(int a1, bool *a2, __int64 a3)
{
  int v3; // edi
  LSTATUS ValueW; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DWORD v12; // [rsp+68h] [rbp+10h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF
  int v14; // [rsp+74h] [rbp+1Ch]

  v14 = HIDWORD(a3);
  v3 = 0;
  *a2 = 0;
  v13 = 0;
  v12 = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
             L"CortanaCapabilityFlags",
             0x10u,
             0LL,
             &v13,
             &v12);
  v7 = ValueW;
  if ( !ValueW )
  {
    v3 = v13;
LABEL_3:
    v7 = 0;
    goto LABEL_4;
  }
  if ( ValueW == 1168 || ValueW == 2 )
    goto LABEL_3;
  if ( ValueW > 0 )
    v7 = (unsigned __int16)ValueW | 0x80070000;
  if ( (v7 & 0x80000000) == 0 )
    goto LABEL_5;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x76,
    (unsigned int)"internal\\onecoreuapshell\\inc\\cortanaregistrysettings.h",
    (const char *)v7,
    v9);
LABEL_4:
  if ( (v7 & 0x80000000) == 0 )
  {
LABEL_5:
    *a2 = (a1 & v3) == a1;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBE,
    (unsigned int)"internal\\onecoreuapshell\\inc\\cortanacapabilities.h",
    (const char *)v7,
    v9);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE5,
    (unsigned int)"internal\\onecoreuapshell\\inc\\cortanacapabilities.h",
    (const char *)v7,
    v10);
  return v7;
}
