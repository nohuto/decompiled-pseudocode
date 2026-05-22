/*
 * XREFs of ?RemoveDisplay@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAUIHolographicDisplay@Holographic@Graphics@4@@Z @ 0x1800E4458
 * Callers:
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800E31AC (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$vector@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1800E6D8C (-erase@-$vector@V-$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@W.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RemoveDisplay(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        struct Windows::Graphics::Holographic::IHolographicDisplay *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v13[2]; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v14[8]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v15[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v13[1] = -2LL;
  v13[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v13);
  v4 = (**(__int64 (__fastcall ***)(struct Windows::Graphics::Holographic::IHolographicDisplay *, GUID *, __int64 *))a2)(
         a2,
         &GUID_2396ae05_f3f5_49e9_954b_d178b5677fd7,
         v13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 952LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_16;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13[0] + 48LL))(v13[0], v15);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 953LL;
    goto LABEL_5;
  }
  v7 = 0LL;
  v8 = (__int64 *)((char *)this + 336);
  v9 = v8[1];
  v10 = *v8;
  if ( (v9 - *v8) >> 3 )
  {
    do
    {
      if ( (v9 - v10) >> 3 <= v7 )
      {
        std::_Xout_of_range("invalid vector<T> subscript");
        JUMPOUT(0x1800E45B9LL);
      }
      if ( (*(int (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(v10 + 8 * v7) + 48LL))(
             *(_QWORD *)(v10 + 8 * v7),
             v16) < 0 )
        goto LABEL_13;
      v11 = v15[0] - v16[0];
      if ( v15[0] == v16[0] )
        v11 = v15[1] - v16[1];
      if ( v11 )
LABEL_13:
        ++v7;
      else
        std::vector<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>::erase(
          v8,
          v14,
          *v8 + 8 * v7);
      v9 = v8[1];
      v10 = *v8;
    }
    while ( v7 < (v9 - *v8) >> 3 );
  }
  v5 = 0;
LABEL_16:
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v13);
  return v5;
}
