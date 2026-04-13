/*
 * XREFs of ??$CallAndWaitForCompletion@UIStorageItem@Storage@Windows@@W4StorageDeleteOption@23@PEAPEAUIAsyncAction@Foundation@3@$$ZW4423@@wil@@YAXPEAUIStorageItem@Storage@Windows@@P8123@EAAJW4StorageDeleteOption@23@PEAPEAUIAsyncAction@Foundation@3@@Z$$QEAW4423@@Z @ 0x180079210
 * Callers:
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x180078BB0 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004A89C (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ___CallAndWaitForCompletion_UIStorageItem_Storage_Windows__W4StorageDeleteOption_23_PEAPEAUIAsyncAction_Foundation_3___ZW4423__wil__YAXPEAUIStorageItem_Storage_Windows__P8123_EAAJW4StorageDeleteOption_23_PEAPEAUIAsyncAction_Foundation_3__Z__QEAW4423__Z(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, _QWORD, _QWORD),
        unsigned int *a3)
{
  int v3; // eax
  DWORD v4; // edx
  int v5; // r8d
  __int64 result; // rax
  void (__fastcall ***v7)(__int64, GUID *, __int64 *); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void (__fastcall ***v9)(__int64, GUID *, __int64 *); // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  v3 = a2(a1, *a3, &v9);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x65B,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x1800792A0LL);
  }
  result = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v9, v4, v5);
  if ( (int)result < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x63B,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)result);
    __debugbreak();
  }
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    return ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v7)[2])(v7);
  }
  return result;
}
