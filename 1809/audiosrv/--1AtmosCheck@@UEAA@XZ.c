/*
 * XREFs of ??1AtmosCheck@@UEAA@XZ @ 0x1801375A4
 * Callers:
 *     ??_EAtmosCheck@@UEAAPEAXI@Z @ 0x180137D80 (--_EAtmosCheck@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?clear@?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@@std@@QEAAXXZ @ 0x18005512C (-clear@-$list@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$uniqu.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180060770 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1?$vector@KV?$allocator@K@std@@@std@@QEAA@XZ @ 0x180067B04 (--1-$vector@KV-$allocator@K@std@@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??1?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@QEAA@XZ @ 0x1800EEE98 (--1-$vector@PEAVCVADServer@@V-$allocator@PEAVCVADServer@@@std@@@std@@QEAA@XZ.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x18013C0AC (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 *     ?clear@?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAXXZ @ 0x18013CD00 (-clear@-$list@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std.c)
 */

void __fastcall AtmosCheck::~AtmosCheck(AtmosCheck *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &AtmosCheck::`vftable';
  AtmosCheck::Uninitialize(this);
  std::vector<unsigned long>::~vector<unsigned long>((__int64)this + 528);
  std::vector<CVADServer *>::~vector<CVADServer *>((__int64)this + 488);
  std::list<std::pair<std::wstring const,std::wstring>>::clear((char *)this + 472);
  std::_Deallocate<16,0>(*((void **)this + 59), (const struct std::nothrow_t *)0x50);
  std::vector<CVADServer *>::~vector<CVADServer *>((__int64)this + 424);
  std::list<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>::clear((__int64)this + 408);
  std::_Deallocate<16,0>(*((void **)this + 51), (const struct std::nothrow_t *)0x38);
  `eh vector destructor iterator'(
    (char *)this + 208,
    32LL,
    6LL,
    (void (*)(void *))AtmosCheck::CommonSpatialTechInfo::~CommonSpatialTechInfo);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 24);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
