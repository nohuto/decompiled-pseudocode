/*
 * XREFs of ??1HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ @ 0x1800A87EC
 * Callers:
 *     ??1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x180124DA4 (--1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SpatialInteractionSourceController_::_1_::dtor$3 @ 0x180136854 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController--Spatia_ea_180136854.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@@Z @ 0x180092F7C (-_Erase@-$_Tree@V-$_Tmap_traits@EV-$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpatialInteractionDevices::HID_HANDLE::~HID_HANDLE(
        SpatialInteractionDevices::HID_HANDLE *this,
        const struct std::nothrow_t *a2)
{
  void *v3; // rcx
  char *v4; // rbx
  const struct std::nothrow_t *v5; // rdx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rcx

  v3 = (void *)*((_QWORD *)this + 34);
  if ( v3 )
    operator delete(v3, a2);
  v4 = (char *)this + 248;
  std::_Tree<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Erase(
    (__int64)this + 248,
    *(_QWORD **)(*((_QWORD *)this + 31) + 8LL));
  *(_QWORD *)(*(_QWORD *)v4 + 8LL) = *(_QWORD *)v4;
  **(_QWORD **)v4 = *(_QWORD *)v4;
  *(_QWORD *)(*(_QWORD *)v4 + 16LL) = *(_QWORD *)v4;
  *((_QWORD *)this + 32) = 0LL;
  operator delete(*((void **)this + 31), (const struct std::nothrow_t *)0x38);
  v6 = (void *)*((_QWORD *)this + 28);
  if ( v6 )
    operator delete(v6, v5);
  v7 = (void *)*((_QWORD *)this + 27);
  if ( v7 )
    operator delete(v7, v5);
  v8 = (void *)*((_QWORD *)this + 26);
  if ( v8 )
    operator delete(v8, v5);
  v9 = (void *)*((_QWORD *)this + 24);
  if ( v9 )
    operator delete(v9, v5);
  v10 = (void *)*((_QWORD *)this + 22);
  if ( v10 )
    operator delete(v10, v5);
  v11 = (void *)*((_QWORD *)this + 20);
  if ( v11 )
    operator delete(v11, v5);
  v12 = (void *)*((_QWORD *)this + 18);
  if ( v12 )
    operator delete(v12, v5);
  v13 = (void *)*((_QWORD *)this + 16);
  if ( v13 )
    operator delete(v13, v5);
  std::wstring::~wstring((__int64)this + 8);
  v14 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
}
