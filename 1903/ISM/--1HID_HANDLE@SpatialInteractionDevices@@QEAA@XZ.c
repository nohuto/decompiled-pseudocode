/*
 * XREFs of ??1HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ @ 0x1800DE9C4
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SpatialInteractionSourceController_::_1_::dtor$3 @ 0x1801630AE (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--Spatia_ea_1801630AE.c)
 *     ??1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x180163290 (--1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18006F494 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800CB1B0 (-erase@-$_Tree@V-$_Tmap_traits@EV-$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@.c)
 */

void __fastcall SpatialInteractionDevices::HID_HANDLE::~HID_HANDLE(
        SpatialInteractionDevices::HID_HANDLE *this,
        const struct std::nothrow_t *a2)
{
  void *v3; // rcx
  const struct std::nothrow_t *v4; // rdx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = (void *)*((_QWORD *)this + 34);
  if ( v3 )
    operator delete(v3, a2);
  std::_Tree<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::erase(
    (_QWORD *)this + 31,
    &v13,
    **((_QWORD **)this + 31),
    *((_QWORD *)this + 31));
  std::_Deallocate<16,0>(*((void **)this + 31), (const struct std::nothrow_t *)0x38);
  v5 = (void *)*((_QWORD *)this + 28);
  if ( v5 )
    operator delete(v5, v4);
  v6 = (void *)*((_QWORD *)this + 27);
  if ( v6 )
    operator delete(v6, v4);
  v7 = (void *)*((_QWORD *)this + 26);
  if ( v7 )
    operator delete(v7, v4);
  v8 = (void *)*((_QWORD *)this + 24);
  if ( v8 )
    operator delete(v8, v4);
  v9 = (void *)*((_QWORD *)this + 22);
  if ( v9 )
    operator delete(v9, v4);
  v10 = (void *)*((_QWORD *)this + 20);
  if ( v10 )
    operator delete(v10, v4);
  v11 = (void *)*((_QWORD *)this + 18);
  if ( v11 )
    operator delete(v11, v4);
  v12 = (void *)*((_QWORD *)this + 16);
  if ( v12 )
    operator delete(v12, v4);
  std::wstring::_Tidy_deallocate((__int64)this + 8);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this);
}
