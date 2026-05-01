/*
 * XREFs of ??_GUwpPrimaryAppProxy@@UEAAPEAXI@Z @ 0x180097050
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18004059C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Destroy@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x18009A600 (-_Destroy@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator.c)
 */

UwpPrimaryAppProxy *__fastcall UwpPrimaryAppProxy::`scalar deleting destructor'(UwpPrimaryAppProxy *this, char a2)
{
  __int64 v4; // rdx

  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Destroy(this, v4, *((_QWORD *)this + 7));
    std::_Deallocate<16,0>(
      *((void **)this + 6),
      (const struct std::nothrow_t *)((*((_QWORD *)this + 8) - *((_QWORD *)this + 6)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  std::wstring::_Tidy_deallocate((_QWORD *)this + 1);
  *(_QWORD *)this = &PrimaryAppProxyBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
