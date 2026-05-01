/*
 * XREFs of ?ShellAppLaunchWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180049530
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSystemCortanaAppReplaced@CortanaUndockingHelpers@@YA_NXZ @ 0x18004959C (-IsSystemCortanaAppReplaced@CortanaUndockingHelpers@@YA_NXZ.c)
 *     ?GetCortanaCapabilities@CortanaCapabilities@@YAJPEAW4CapabilityFlags@1@PEA_N@Z @ 0x1800495C8 (-GetCortanaCapabilities@CortanaCapabilities@@YAJPEAW4CapabilityFlags@1@PEA_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TriggerToast@RealtimeEnticementManager@Cortana@TwinUI@@QEAAJPEBG@Z @ 0x1801F30F4 (-TriggerToast@RealtimeEnticementManager@Cortana@TwinUI@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::ShellAppLaunchWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        PVOID *a4,
        unsigned __int16 *a5)
{
  enum CortanaCapabilities::CapabilityFlags *v6; // rdx
  bool *v7; // r8
  bool v8; // di
  int CortanaCapabilities; // eax
  int v10; // ebx
  int v12[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !CortanaUndockingHelpers::IsSystemCortanaAppReplaced(*(CortanaUndockingHelpers **)&a1) )
  {
    v8 = 0;
    CortanaCapabilities = CortanaCapabilities::GetCortanaCapabilities((CortanaCapabilities *)v12, v6, v7);
    v10 = CortanaCapabilities;
    if ( CortanaCapabilities < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x114,
        (unsigned int)"internal\\onecoreuapshell\\inc\\cortanacapabilities.h",
        (const char *)(unsigned int)CortanaCapabilities,
        v12[0]);
    }
    else
    {
      v10 = 0;
      v8 = (v12[0] & 0x900) == 2304;
    }
    if ( v10 >= 0 && v8 && a4 && a5 )
      TwinUI::Cortana::RealtimeEnticementManager::TriggerToast(a4[8], a5);
  }
  return 0LL;
}
