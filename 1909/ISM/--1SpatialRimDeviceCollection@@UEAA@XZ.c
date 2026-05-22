/*
 * XREFs of ??1SpatialRimDeviceCollection@@UEAA@XZ @ 0x18009BF98
 * Callers:
 *     ??_ESpatialRimDeviceCollection@@UEAAPEAXI@Z @ 0x18009C240 (--_ESpatialRimDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18001F46C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ @ 0x1800943CC (-InternalRelease@-$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall SpatialRimDeviceCollection::~SpatialRimDeviceCollection(SpatialRimDeviceCollection *this, void *a2)
{
  wil::details *v3; // rcx
  void *v4; // rcx
  _QWORD **v5; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rsi
  std::_Ref_count_base *v9; // rcx
  __int64 v10; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 365);
  if ( v3 )
    wil::details::CloseHandle(v3, a2);
  v4 = (void *)*((_QWORD *)this + 360);
  if ( v4 )
  {
    std::_Deallocate<16,0>(
      v4,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 362) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 360) = 0LL;
    *((_QWORD *)this + 361) = 0LL;
    *((_QWORD *)this + 362) = 0LL;
  }
  v5 = (_QWORD **)*((_QWORD *)this + 358);
  v6 = *v5;
  *v5 = v5;
  *(_QWORD *)(*((_QWORD *)this + 358) + 8LL) = *((_QWORD *)this + 358);
  *((_QWORD *)this + 359) = 0LL;
  v7 = (_QWORD *)*((_QWORD *)this + 358);
  if ( v6 != v7 )
  {
    do
    {
      v8 = (_QWORD *)*v6;
      v9 = (std::_Ref_count_base *)v6[4];
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
      std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x28);
      v6 = v8;
      v7 = (_QWORD *)*((_QWORD *)this + 358);
    }
    while ( v8 != v7 );
  }
  std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)0x28);
  Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease((volatile int **)this + 354);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 2792));
  v10 = *((_QWORD *)this + 347);
  if ( v10 )
  {
    *((_QWORD *)this + 347) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 346);
  HIDDeviceCollection::~HIDDeviceCollection(this);
}
