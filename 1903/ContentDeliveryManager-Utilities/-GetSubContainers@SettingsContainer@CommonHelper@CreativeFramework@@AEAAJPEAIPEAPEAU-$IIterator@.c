/*
 * XREFs of ?GetSubContainers@SettingsContainer@CommonHelper@CreativeFramework@@AEAAJPEAIPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVApplicationDataContainer@Storage@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800AD6AC
 * Callers:
 *     ?ResolveContainers@SettingsContainer@CommonHelper@CreativeFramework@@AEAAXXZ @ 0x1800AD348 (-ResolveContainers@SettingsContainer@CommonHelper@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::CommonHelper::SettingsContainer::GetSubContainers(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v18; // [rsp+50h] [rbp+20h] BYREF
  __int64 v19; // [rsp+60h] [rbp+30h] BYREF
  __int64 v20; // [rsp+68h] [rbp+38h] BYREF

  v16[1] = -2LL;
  *a3 = 0LL;
  v20 = 0LL;
  v5 = *(__int64 **)(a1 + 8);
  v6 = *v5;
  v20 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v6 + 72))(v5, &v20);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\applicationsettingshelper.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_14;
  }
  v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v20)(
         v20,
         &GUID_a785be1d_159e_53ad_9553_598b03dca048,
         v16);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x152D,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v9);
    JUMPOUT(0x1800AD813LL);
  }
  v19 = 0LL;
  v10 = *(_QWORD *)v16[0];
  v19 = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v10 + 48))(v16[0], &v19);
  v8 = v11;
  if ( v11 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 56LL))(v20, &v18);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v14 = v19;
      v13 = 0LL;
      v19 = 0LL;
      *a3 = v14;
      *a2 = v18;
      v8 = 0;
      goto LABEL_10;
    }
    v12 = 109LL;
  }
  else
  {
    v12 = 107LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\applicationsettingshelper.cpp",
    (const char *)(unsigned int)v11);
  v13 = v19;
LABEL_10:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v16[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16[0] + 16LL))(v16[0]);
LABEL_14:
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return v8;
}
