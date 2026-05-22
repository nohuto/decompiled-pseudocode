/*
 * XREFs of ?InitializeDdiDevicesOnWorkerThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialObjectDDIClientFactory@Holographic@34@@Z @ 0x1800B263C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_24502c691939f16d0a2037af5bc6e768__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call @ 0x1800B7A00 (std--_Func_impl_no_alloc__lambda_24502c691939f16d0a2037af5bc6e768__void_std--shared_ea_1800B7A00.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18004F154 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::InitializeDdiDevicesOnWorkerThread(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *a2)
{
  struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory **v4; // rsi
  struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  int v12; // edi
  _QWORD *v13; // rdi
  __int64 *v14; // r15
  const char *v15; // r9
  HMODULE LibraryW; // r14
  HMODULE v17; // r12
  DWORD LastError; // edi
  __int64 v19; // rdx
  FARPROC ProcAddress; // rdi
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  _QWORD *v24; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory **)((char *)this + 592);
  if ( !a2 )
  {
    v9 = *v4;
    if ( *v4 )
    {
      *v4 = 0LL;
      (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    *v4 = 0LL;
    v10 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    if ( !v10 )
    {
      v12 = -2147024882;
      goto LABEL_28;
    }
    v13 = v10 + 3;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v10 + 3));
    v11[8] = 1LL;
    *v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialObjectDDIClientFactory,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
    v11[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialObjectDDIClientFactory,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialObjectDDIClientFactory,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
    v11[2] = &Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper::`vftable'{for `IWeakReferenceSource'};
    *v13 = &Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v11 = &Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper::`vftable'{for `IInspectable'};
    v11[1] = &Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialObjectDDIClientFactory,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
    v11[2] = &Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper::`vftable'{for `IWeakReferenceSource'};
    *v13 = &Windows::Internal::Holographic::SpatialObjectDDIClientFactoryHelper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v11[9] = 0LL;
    v14 = v11 + 10;
    v11[10] = 0LL;
    LibraryW = LoadLibraryW(L"PerceptionDriverClient.dll");
    v17 = (HMODULE)v11[9];
    if ( v17 )
    {
      LastError = GetLastError();
      FreeLibrary(v17);
      SetLastError(LastError);
    }
    v11[9] = LibraryW;
    if ( LibraryW )
    {
      ProcAddress = GetProcAddress(LibraryW, "CreateSpatialObjectDDIClientFactory");
      if ( ProcAddress )
      {
        v21 = *v14;
        *v14 = 0LL;
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        v22 = ((__int64 (__fastcall *)(__int64, _QWORD *))ProcAddress)(3LL, v11 + 10);
        v12 = v22;
        if ( v22 >= 0 )
          v12 = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x226,
            (__int64)"internal\\onecoreuapanalog\\inc\\spatialobjectddiclient.h",
            (const char *)(unsigned int)v22);
LABEL_25:
        v23 = *v11;
        v24 = v11;
        if ( v12 >= 0 )
        {
          v12 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory **))v23)(
                  v11,
                  &GUID_d2174086_a18d_452a_b2cf_8a90d62d43b1,
                  v4);
          v23 = *v11;
          v24 = v11;
        }
        (*(void (__fastcall **)(_QWORD *))(v23 + 16))(v24);
        if ( v12 >= 0 )
          goto LABEL_5;
LABEL_28:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x50F,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
          (const char *)(unsigned int)v12);
        return (unsigned int)v12;
      }
      v19 = 548LL;
    }
    else
    {
      v19 = 545LL;
    }
    v12 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)v19,
            (__int64)"internal\\onecoreuapanalog\\inc\\spatialobjectddiclient.h",
            v15);
    goto LABEL_25;
  }
  if ( *v4 != a2 )
  {
    (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *v4;
    *v4 = a2;
    if ( v5 )
      (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *))(*(_QWORD *)v5 + 16LL))(v5);
  }
LABEL_5:
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *, GUID *, unsigned __int64, char *))(*(_QWORD *)*v4 + 40LL))(
         *v4,
         &GUID_DEVINTERFACE_SPATIAL_OBJECT,
         ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
         (char *)this + 600);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x515,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
