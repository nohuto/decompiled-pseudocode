/*
 * XREFs of ??$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAVViewHostItemEventArgs@@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$QEAPEAUIPropertySet@Collections@Foundation@8@@Z @ 0x1801FCB50
 * Callers:
 *     ??$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$T@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@@012@AEBW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@$$QEA$$T@Z @ 0x1801FCC08 (--$MakeAndInitialize@VViewHostItemEventArgs@@V1@AEBW4ViewHostItemEventType@Holograp_ea_1801FCC08.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802056EC (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180205914 (-_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000E500 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1801F8D90 (-InternalRelease@-$ComPtr@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Micr.c)
 *     ??0ViewHostItemEventArgs@@QEAA@XZ @ 0x1801FE37C (--0ViewHostItemEventArgs@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@QEAAXPEAVViewHostItemEventArgs@@@Z @ 0x1801FEFC4 (-Attach@-$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@QEAAXPEAVViewHostItemEventArgs@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewHostItemEventArgs,ViewHostItemEventArgs,enum Windows::Internal::Shell::Holographic::ViewHostItemEventType const &,Windows::Foundation::Collections::IPropertySet *>(
        _QWORD *a1,
        _DWORD *a2,
        __int64 *a3)
{
  unsigned int v3; // edi
  ViewHostItemEventArgs *v7; // rax
  ViewHostItemEventArgs *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 *v11; // rcx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  ViewHostItemEventArgs *v16; // [rsp+58h] [rbp+20h]

  v3 = 0;
  *a1 = 0LL;
  v7 = (ViewHostItemEventArgs *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v7;
  if ( v7 )
  {
    v8 = ViewHostItemEventArgs::ViewHostItemEventArgs(v7);
    v15 = 0LL;
    Microsoft::WRL::ComPtr<ViewHostItemEventArgs>::Attach(&v15, v8);
    v9 = *a3;
    v10 = v15;
    v11 = (__int64 *)(v15 + 56);
    *(_DWORD *)(v15 + 48) = *a2;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v11, v9);
    v12 = *(_QWORD *)(v10 + 80);
    while ( v12 >= 0 )
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 80), v12 + 1, v12);
      if ( v13 == v12 )
        goto LABEL_8;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v12 + 16));
LABEL_8:
    *a1 = v15;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener>::InternalRelease(&v15);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
