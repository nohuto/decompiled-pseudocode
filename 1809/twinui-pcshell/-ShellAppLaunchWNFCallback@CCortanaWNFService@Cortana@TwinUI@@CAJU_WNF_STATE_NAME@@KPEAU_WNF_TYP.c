/*
 * XREFs of ?ShellAppLaunchWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180010730
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TriggerToast@RealtimeEnticementManager@Cortana@TwinUI@@QEAAJPEBG@Z @ 0x18018D0A4 (-TriggerToast@RealtimeEnticementManager@Cortana@TwinUI@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::ShellAppLaunchWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        PVOID *a4,
        unsigned __int16 *a5)
{
  __int16 v5; // di
  bool v7; // bp
  LSTATUS ValueW; // eax
  signed int v9; // ebx
  int v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+40h] [rbp-18h] BYREF
  DWORD v14[5]; // [rsp+44h] [rbp-14h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = 0;
  v14[0] = 4;
  v13 = 0;
  v7 = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
             L"CortanaCapabilityFlags",
             0x10u,
             0LL,
             &v13,
             v14);
  v9 = ValueW;
  if ( !ValueW )
  {
    v5 = v13;
LABEL_3:
    v9 = 0;
    goto LABEL_4;
  }
  if ( ValueW == 1168 || ValueW == 2 )
    goto LABEL_3;
  if ( ValueW > 0 )
    v9 = (unsigned __int16)ValueW | 0x80070000;
  if ( v9 >= 0 )
    goto LABEL_5;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x76,
    (unsigned int)"internal\\onecoreuapshell\\inc\\cortanaregistrysettings.h",
    (const char *)(unsigned int)v9,
    v11);
LABEL_4:
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE,
      (unsigned int)"internal\\onecoreuapshell\\inc\\cortanacapabilities.h",
      (const char *)(unsigned int)v9,
      v11);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE5,
      (unsigned int)"internal\\onecoreuapshell\\inc\\cortanacapabilities.h",
      (const char *)(unsigned int)v9,
      v12);
    goto LABEL_6;
  }
LABEL_5:
  v9 = 0;
  v7 = (v5 & 0x900) == 2304;
LABEL_6:
  if ( v9 >= 0 && v7 && a4 && a5 )
    TwinUI::Cortana::RealtimeEnticementManager::TriggerToast(a4[8], a5);
  return 0LL;
}
