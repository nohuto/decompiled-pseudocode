/*
 * XREFs of ?IsSystemCortanaAppReplaced@CortanaUndockingHelpers@@YAJPEA_N@Z @ 0x18003D9C0
 * Callers:
 *     ?IsSystemCortanaAppReplaced@CortanaUndockingHelpers@@YA_NXZ @ 0x18003DB2C (-IsSystemCortanaAppReplaced@CortanaUndockingHelpers@@YA_NXZ.c)
 * Callees:
 *     ?IsUndockCortanaEnabled@CortanaUndockingHelpers@@YAEXZ @ 0x18003D6D8 (-IsUndockCortanaEnabled@CortanaUndockingHelpers@@YAEXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180109198 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?CortanaUndocking_ReplaceDecisionReadBeforeReevaluation@CortanaProactiveTelemetry@@SAXXZ @ 0x1801BC424 (-CortanaUndocking_ReplaceDecisionReadBeforeReevaluation@CortanaProactiveTelemetry@@SAXXZ.c)
 */

__int64 __fastcall CortanaUndockingHelpers::IsSystemCortanaAppReplaced(CortanaUndockingHelpers *this, bool *a2)
{
  unsigned int ValueW; // eax
  __int64 v5; // rdx
  unsigned int v6; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF
  int pvData; // [rsp+58h] [rbp+10h] BYREF
  int v10; // [rsp+60h] [rbp+18h] BYREF

  *(_BYTE *)this = 0;
  if ( !CortanaUndockingHelpers::IsUndockCortanaEnabled(this) )
    return 0LL;
  pvData = 0;
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
             L"ReplaceCortanaCheckRefreshed",
             0x10u,
             0LL,
             &pvData,
             &pcbData);
  if ( ValueW == 2 )
  {
    CortanaProactiveTelemetry::CortanaUndocking_ReplaceDecisionReadBeforeReevaluation();
    goto LABEL_5;
  }
  if ( ValueW )
  {
    v5 = 98LL;
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)v5,
             (unsigned int)"internal\\shellcommondesktopbase\\inc\\cortana\\cortanaundocking.h",
             (const char *)ValueW,
             v6);
  }
  if ( pvData )
  {
LABEL_5:
    v10 = 0;
    pcbData = 4;
    ValueW = RegGetValueW(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
               L"CortanaIsReplaced",
               0x10u,
               0LL,
               &v10,
               &pcbData);
    if ( ValueW == 2 )
      return 0LL;
    if ( !ValueW )
    {
      if ( v10 == 1 )
        *(_BYTE *)this = 1;
      return 0LL;
    }
    v5 = 124LL;
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)v5,
             (unsigned int)"internal\\shellcommondesktopbase\\inc\\cortana\\cortanaundocking.h",
             (const char *)ValueW,
             v6);
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x68,
    (unsigned int)"internal\\shellcommondesktopbase\\inc\\cortana\\cortanaundocking.h",
    (const char *)0x8000FFFFLL,
    v6);
  return 2147549183LL;
}
