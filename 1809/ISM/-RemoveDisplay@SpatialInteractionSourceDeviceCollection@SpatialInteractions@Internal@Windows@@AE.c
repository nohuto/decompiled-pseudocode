/*
 * XREFs of ?RemoveDisplay@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAUIHolographicDisplay@Holographic@Graphics@4@@Z @ 0x1800B1820
 * Callers:
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800B0708 (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Xrange@?$vector@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x1800B5660 (-_Xrange@-$vector@V-$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RemoveDisplay(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        struct Windows::Graphics::Holographic::IHolographicDisplay *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rdx
  char *v9; // rsi
  char *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD v16[2]; // [rsp+20h] [rbp-40h] BYREF
  char v17; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v18[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v19[2]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v16[1] = -2LL;
  v16[0] = 0LL;
  v3 = (**(__int64 (__fastcall ***)(struct Windows::Graphics::Holographic::IHolographicDisplay *, GUID *, _QWORD *))a2)(
         a2,
         &GUID_2396ae05_f3f5_49e9_954b_d178b5677fd7,
         v16);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 1043LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_24;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v16[0] + 48LL))(v16[0], v18);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 1044LL;
    goto LABEL_5;
  }
  v6 = 0LL;
  v7 = *((_QWORD *)this + 43);
  v8 = *((_QWORD *)this + 42);
  if ( (v7 - v8) >> 3 )
  {
    do
    {
      if ( (v7 - v8) >> 3 <= v6 )
        std::vector<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>::_Xrange();
      if ( (*(int (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(v8 + 8 * v6) + 48LL))(*(_QWORD *)(v8 + 8 * v6), v19) >= 0
        && v18[0] == v19[0]
        && v18[1] == v19[1] )
      {
        v9 = (char *)*((_QWORD *)this + 43);
        v10 = (char *)(*((_QWORD *)this + 42) + 8 * v6 + 8);
        if ( v10 != v9 )
        {
          do
          {
            v11 = 0LL;
            if ( &v17 != v10 )
            {
              v11 = *(_QWORD *)v10;
              *(_QWORD *)v10 = 0LL;
            }
            v12 = *((_QWORD *)v10 - 1);
            *((_QWORD *)v10 - 1) = v11;
            if ( v12 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
            v10 += 8;
          }
          while ( v10 != v9 );
          v9 = (char *)*((_QWORD *)this + 43);
        }
        v13 = *((_QWORD *)v9 - 1);
        if ( v13 )
        {
          *((_QWORD *)v9 - 1) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          v9 = (char *)*((_QWORD *)this + 43);
        }
        *((_QWORD *)this + 43) = v9 - 8;
      }
      else
      {
        ++v6;
      }
      v7 = *((_QWORD *)this + 43);
      v8 = *((_QWORD *)this + 42);
    }
    while ( v6 < (v7 - v8) >> 3 );
  }
  v4 = 0;
LABEL_24:
  v14 = v16[0];
  if ( v16[0] )
  {
    v16[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v4;
}
