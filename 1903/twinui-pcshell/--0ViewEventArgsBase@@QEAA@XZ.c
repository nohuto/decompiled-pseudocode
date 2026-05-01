/*
 * XREFs of ??0ViewEventArgsBase@@QEAA@XZ @ 0x18000E744
 * Callers:
 *     ??0ViewEventArgsForSelectTargetView@@QEAA@XZ @ 0x18000E5C0 (--0ViewEventArgsForSelectTargetView@@QEAA@XZ.c)
 *     ??0ViewEventArgsForShowAsStandalone@@QEAA@XZ @ 0x18000E66C (--0ViewEventArgsForShowAsStandalone@@QEAA@XZ.c)
 *     ??0ViewEventArgsForShowAsViewMode@@QEAA@XZ @ 0x180268564 (--0ViewEventArgsForShowAsViewMode@@QEAA@XZ.c)
 *     ??0ViewEventArgsForSwitch@@QEAA@XZ @ 0x180268650 (--0ViewEventArgsForSwitch@@QEAA@XZ.c)
 *     ??0ViewEventArgsForWindowingSettings@@QEAA@V?$map@V?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@UWindowingEnvironmentId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Z @ 0x18027982C (--0ViewEventArgsForWindowingSettings@@QEAA@V-$map@V-$com_ptr_t@UIViewWrapper@ViewManagerInterop@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180022178 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 */

ViewEventArgsBase *__fastcall ViewEventArgsBase::ViewEventArgsBase(ViewEventArgsBase *this)
{
  ViewEventArgsBase *result; // rax

  Microsoft::WRL::FtmBase::FtmBase((ViewEventArgsBase *)((char *)this + 8));
  *(_QWORD *)this = &ViewEventArgsBase::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
  *((_QWORD *)this + 1) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  result = this;
  *((_QWORD *)this + 7) = 0LL;
  return result;
}
