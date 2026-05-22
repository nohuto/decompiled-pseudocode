/*
 * XREFs of ?OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z @ 0x180099790
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInfo@@@Z @ 0x18009313C (-PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInf.c)
 *     ?AugmentedInputDevice_DeviceRemoved_@RawInputProvidersTracing@@QEAAXI@Z @ 0x180099420 (-AugmentedInputDevice_DeviceRemoved_@RawInputProvidersTracing@@QEAAXI@Z.c)
 *     ?GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@@@Z @ 0x1800994B0 (-GetAugmentedInputCacheEntry@AugmentedInputDeviceCollection@@AEAAJKPEAUAugmentedInputCacheState@.c)
 *     ?IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z @ 0x1800995E4 (-IsEnabled@RawInputProvidersTracing@@SA_NE_K@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@@Z @ 0x180099E48 (-erase@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$alloca_ea_180099E48.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180099EB8 (-find@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$$.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x180099F00 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 */

__int64 __fastcall AugmentedInputDeviceCollection::OnDeviceRemoval(
        AugmentedInputDeviceCollection *this,
        unsigned int a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // r10
  __int64 v6; // rcx
  RawInputProvidersTracing *v7; // rcx
  unsigned int v9[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+48h] [rbp-B8h]
  unsigned int v11; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v13[24]; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+78h] [rbp-88h]

  memset_0(v13, 0, 0x7F0uLL);
  v14 = 2032;
  *(_QWORD *)v9 = 0LL;
  v10 = 0;
  if ( (int)AugmentedInputDeviceCollection::GetAugmentedInputCacheEntry(this, a2, (struct AugmentedInputCacheState *)v9) >= 0
    && (int)MPCInputInfoHelper::PopulateAugmentedInput(5LL, a2, v9[0], SHIWORD(v9[1]), v10, SHIWORD(v10), (__int64)v13) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v13);
  }
  v11 = a2;
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::find(
    (char *)this + 2760,
    &v12,
    &v11);
  if ( v12 != *v5 )
    std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::erase(
      v5,
      &v12);
  if ( RawInputProvidersTracing::IsEnabled(v4) )
  {
    wil::details::static_lazy<RawInputProvidersTracing>::get(
      v6,
      lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    RawInputProvidersTracing::AugmentedInputDevice_DeviceRemoved_(v7, v9[0]);
  }
  return 0LL;
}
