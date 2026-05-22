/*
 * XREFs of ??_GCustomCursorApplication@@QEAAPEAXI@Z @ 0x1800C8F68
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VCustomCursorApplication@@@std@@EEAAXXZ @ 0x1800CAAF0 (-_Destroy@-$_Ref_count_obj@VCustomCursorApplication@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B050 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?clear@?$list@IV?$allocator@I@std@@@std@@QEAAXXZ @ 0x1800344C0 (-clear@-$list@IV-$allocator@I@std@@@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BFAC (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CustomCursorApplication *__fastcall CustomCursorApplication::`scalar deleting destructor'(
        CustomCursorApplication *this)
{
  char *v2; // rcx
  void *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  v2 = (char *)*((_QWORD *)this + 13);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)this + 11);
  v3 = (void *)*((_QWORD *)this + 5);
  if ( v3 )
  {
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 7) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
  std::list<unsigned int>::clear((__int64)this + 24);
  std::_Deallocate<16,0>(*((void **)this + 3), (const struct std::nothrow_t *)0x18);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v4 )
    std::_Ref_count_base::_Decwref(v4);
  return this;
}
