/*
 * XREFs of ?OnHeadUpdateEvent@SpatialRimDeviceCollectionHeadEventHandler@@AEAAJXZ @ 0x18009E738
 * Callers:
 *     _lambda_8f38397fb510ec0288b294132d0aacc6_::_lambda_invoker_cdecl_ @ 0x18009AFA0 (_lambda_8f38397fb510ec0288b294132d0aacc6_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A874 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?OnHeadUpdateEvent@SpatialRimDeviceCollection@@QEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@@Z @ 0x18009E6E0 (-OnHeadUpdateEvent@SpatialRimDeviceCollection@@QEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@P.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialRimDeviceCollectionHeadEventHandler::OnHeadUpdateEvent(
        SpatialRimDeviceCollectionHeadEventHandler *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  struct Windows::Perception::IPerceptionTimestamp **v3; // rax
  struct Windows::Perception::IPerceptionTimestamp *v4; // rsi
  SpatialRimDeviceCollection *v5; // rcx
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+28h] [rbp-19h] BYREF
  __int64 v8; // [rsp+30h] [rbp-11h] BYREF
  __int64 v9[2]; // [rsp+38h] [rbp-9h] BYREF
  _OWORD v10[4]; // [rsp+48h] [rbp+7h] BYREF

  v9[1] = -2LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 80);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 2);
  v7 = v2;
  v3 = (struct Windows::Perception::IPerceptionTimestamp **)((char *)this + 184);
  v4 = 0LL;
  if ( &v8 != (__int64 *)((char *)this + 184) )
  {
    v4 = *v3;
    *v3 = 0LL;
  }
  v8 = 0LL;
  v9[0] = (__int64)v4;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v8);
  v10[0] = *(_OWORD *)((char *)this + 120);
  v10[1] = *(_OWORD *)((char *)this + 136);
  v10[2] = *(_OWORD *)((char *)this + 152);
  v10[3] = *(_OWORD *)((char *)this + 168);
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v7);
  if ( v4 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
    v5 = (SpatialRimDeviceCollection *)*((_QWORD *)this + 3);
    if ( v5 )
      SpatialRimDeviceCollection::OnHeadUpdateEvent(v5, (const struct MPCMatrix4x4 *)v10, v4);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v7);
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v9);
  return 0LL;
}
