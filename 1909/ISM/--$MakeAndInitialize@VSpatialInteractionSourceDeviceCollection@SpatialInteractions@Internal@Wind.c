/*
 * XREFs of ??$MakeAndInitialize@VSpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UISpatialInteractionSourceCollection@234@$$V@Details@WRL@Microsoft@@YAJPEAPEAUISpatialInteractionSourceCollection@SpatialInteractions@Internal@Windows@@@Z @ 0x1800295B8
 * Callers:
 *     ?Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z @ 0x18001F11C (-Initialize@SpatialRimDeviceCollection@@IEAAJPEAPEAX@Z.c)
 * Callees:
 *     ??0SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x180017ED0 (--0SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$00@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x180029680 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180051734 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollection,>(
        _QWORD *a1)
{
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v2; // rax
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v3; // rdi
  PTP_WORK ThreadpoolWork; // rax
  const char *v5; // r9
  int LastError; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a1 = 0LL;
  v2 = (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)operator new(
                                                                                             0x2D8uLL,
                                                                                             (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::SpatialInteractionSourceDeviceCollection(v2);
    ThreadpoolWork = CreateThreadpoolWork(
                       Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::StaticExecuteWorkItems,
                       v3,
                       0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<1>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::reset(
      (char *)v3 + 584,
      ThreadpoolWork);
    if ( *((_QWORD *)v3 + 73) )
      LastError = 0;
    else
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x66,
                    (unsigned int)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsou"
                                  "rcedevicecollection.cpp",
                    v5);
    if ( LastError >= 0 )
      LastError = (**(__int64 (__fastcall ***)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *, GUID *, _QWORD *))v3)(
                    v3,
                    &GUID_00759b61_908b_429d_b44f_bab28638e1a4,
                    a1);
    (*(void (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)LastError;
}
