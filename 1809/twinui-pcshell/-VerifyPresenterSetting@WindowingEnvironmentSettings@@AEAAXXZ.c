/*
 * XREFs of ?VerifyPresenterSetting@WindowingEnvironmentSettings@@AEAAXXZ @ 0x18022CE54
 * Callers:
 *     ??0WindowingEnvironmentSettings@@QEAA@PEAU?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@AEBV?$function@$$A6A?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@I@Z@std@@@Z @ 0x180224668 (--0WindowingEnvironmentSettings@@QEAA@PEAU-$IVectorView@PEAUISetting@WindowingEnvironment@Applic.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall WindowingEnvironmentSettings::VerifyPresenterSetting(WindowingEnvironmentSettings *this)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 64) )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      642LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventargs.h",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  *((_BYTE *)this + 64) = 1;
}
