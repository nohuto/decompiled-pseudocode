/*
 * XREFs of ??1SystemCursorService@@QEAA@XZ @ 0x1800C9018
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VSystemCursorService@@@std@@EEAAXXZ @ 0x1800CAD40 (-_Destroy@-$_Ref_count_obj@VSystemCursorService@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B3D0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?clear@?$list@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1800CAEB0 (-clear@-$list@U-$pair@$$CB_KV-$shared_ptr@VSystemCursor@@@std@@@std@@V-$allocator@U-$pair@$$CB_K.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1800CB1B0 (-erase@-$_Tree@V-$_Tmap_traits@EV-$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@.c)
 */

void __fastcall SystemCursorService::~SystemCursorService(SystemCursorService *this)
{
  std::_Ref_count_base *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  std::_Ref_count_base *v5; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 22);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  std::_Tree<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::erase(
    (char *)this + 152,
    &v6,
    **((_QWORD **)this + 19));
  std::_Deallocate<16,0>(*((void **)this + 19), (const struct std::nothrow_t *)0x38);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 17);
  v3 = (void *)*((_QWORD *)this + 13);
  if ( v3 )
  {
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 15) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    std::_Deallocate<16,0>(
      v4,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 10) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  std::list<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>::clear((char *)this + 48);
  std::_Deallocate<16,0>(*((void **)this + 6), (const struct std::nothrow_t *)0x28);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 3);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v5 )
    std::_Ref_count_base::_Decwref(v5);
}
