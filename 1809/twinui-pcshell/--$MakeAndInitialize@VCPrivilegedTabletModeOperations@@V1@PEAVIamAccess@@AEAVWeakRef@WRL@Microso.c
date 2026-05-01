/*
 * XREFs of ??$MakeAndInitialize@VCPrivilegedTabletModeOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVCPrivilegedTabletModeOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x1801A21D8
 * Callers:
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x1801A3AAC (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperatio.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800DF744 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 *     ??0CPrivilegedTabletModeOperations@@QEAA@XZ @ 0x1801A2AD8 (--0CPrivilegedTabletModeOperations@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A3FB8 (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@?$PrivilegedOperationsBase@UIPrivilegedHotkeyOperations@@@@QEAAJPEAVIamAccess@@VWeakRef@WRL@Microsoft@@@Z @ 0x1801A4E74 (-RuntimeClassInitialize@-$PrivilegedOperationsBase@UIPrivilegedHotkeyOperations@@@@QEAAJPEAVIamA.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPrivilegedTabletModeOperations,CPrivilegedTabletModeOperations,IamAccess *,Microsoft::WRL::WeakRef &>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  CPrivilegedTabletModeOperations *v6; // rax
  int v7; // ebx
  CPrivilegedTabletModeOperations *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  volatile int *v11; // rdx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  CPrivilegedTabletModeOperations *v14; // [rsp+58h] [rbp+20h] BYREF

  *a1 = 0LL;
  v6 = (CPrivilegedTabletModeOperations *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = CPrivilegedTabletModeOperations::CPrivilegedTabletModeOperations(v6);
    v9 = *a3;
    v10 = (__int64)v8;
    v14 = v8;
    v13 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v7 = PrivilegedOperationsBase<IPrivilegedHotkeyOperations>::RuntimeClassInitialize(v10, *a2, &v13);
    if ( v7 >= 0 )
    {
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Microsoft::WRL::FtmBase>::InternalAddRef(
          v10,
          v11);
      *a1 = v10;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
