/*
 * XREFs of ??$MakeAndInitialize@UDeviceState@MagnifierProcessor@@U12@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@012@@Z @ 0x1800CF72C
 * Callers:
 *     ?GetDeviceState@MagnifierProcessor@@AEAA?AV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@PEBULegacyInputInfo@@@Z @ 0x1800CF164 (-GetDeviceState@MagnifierProcessor@@AEAA-AV-$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Micros.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@PEAX@2@XZ @ 0x180049B1C (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$all.c)
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x18007247C (--0QpcTimeConverter@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MagnifierProcessor::DeviceState,MagnifierProcessor::DeviceState,>(
        __int64 *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebp
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v2 = *a1;
  v3 = 0;
  if ( v2 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *a1 = 0LL;
  v4 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v4[3] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v5 = &MagnifierProcessor::DeviceState::`vftable';
    *((_WORD *)v5 + 8) = 0;
    *((_BYTE *)v5 + 18) = 0;
    *((_QWORD *)v5 + 3) = 0LL;
    v5[8] = 0;
    *(_QWORD *)(v5 + 9) = 0LL;
    *((_QWORD *)v5 + 6) = 0LL;
    *((_QWORD *)v5 + 7) = 0LL;
    *((_QWORD *)v5 + 6) = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>>,0>>::_Buyheadnode();
    *((_QWORD *)v5 + 8) = 500LL;
    *((_QWORD *)v5 + 9) = 100LL;
    v5[20] = 200;
    v5[21] = 270;
    *((_QWORD *)v5 + 11) = 0x3FE8D4FDF3B645A2LL;
    QpcTimeConverter::QpcTimeConverter((QpcTimeConverter *)(v5 + 24));
    *((_QWORD *)v5 + 14) = 0LL;
    *((_QWORD *)v5 + 15) = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
    *a1 = (__int64)v5;
    if ( v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
