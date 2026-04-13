/*
 * XREFs of ??$CallAndWaitForCompletion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@W4CreationCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@W4523@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolder@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@W4CreationCollisionOption@56@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@$$QEAW4856@@Z @ 0x18009915C
 * Callers:
 *     ?GetEdgeFaviconCache@@YA?AV?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180098E18 (-GetEdgeFaviconCache@@YA-AV-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wi.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9IStorageItem@Storage@Windows@@$BEI@AA @ 0x18004CA84 (--_9IStorageItem@Storage@Windows@@$BEI@AA.c)
 *     ??$wait_for_completion@PEAVStorageFolder@Storage@Windows@@V?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18007B5A0 (--$wait_for_completion@PEAVStorageFolder@Storage@Windows@@V-$ComPtr@UIStorageFolder@Storage@Wind.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall ___CallAndWaitForCompletion_UIStorageFolder_Storage_Windows__PEAUHSTRING____W4CreationCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4_W4523__wil__YA_AV__ComPtr_UIStorageFolder_Storage_Windows___WRL_Microsoft__PEAUIStorageFolder_Storage_Windows__P8456_EAAJPEAUHSTRING____W4CreationCollisionOption_56_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_6__Z__QEAPEAU7___QEAW4856__Z(
        _QWORD *a1,
        __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 =  Windows::Storage::IStorageItem::`vcall'{72,{flat}}(a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x64B,
      (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x1800991F6LL);
  }
  wil::wait_for_completion<Windows::Storage::StorageFolder *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFolder>>(
    a1,
    0LL);
  return a1;
}
