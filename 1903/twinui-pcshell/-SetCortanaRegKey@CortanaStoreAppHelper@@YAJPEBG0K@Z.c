/*
 * XREFs of ?SetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBG0K@Z @ 0x1801C82B0
 * Callers:
 *     ?ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801C61A8 (-ApplyNonDeviceCapabilitiesToStoreAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 *     ?RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801C7EAC (-RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetRegKey@CortanaStoreAppHelper@@YAJPEBG00K@Z @ 0x1801C8340 (-SetRegKey@CortanaStoreAppHelper@@YAJPEBG00K@Z.c)
 */

__int64 __fastcall CortanaStoreAppHelper::SetCortanaRegKey(
        CortanaStoreAppHelper *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CortanaStoreAppHelper::SetRegKey(this, (const unsigned __int16 *)this, a2, a4, v7);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x261,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
