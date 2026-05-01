/*
 * XREFs of ?CommitActivationTimeoutPolicy@ViewWrapperBase@@AEBAXXZ @ 0x180241450
 * Callers:
 *     ?SetActivationTimeoutPolicy@ViewWrapperBase@@UEAAJW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802438C0 (-SetActivationTimeoutPolicy@ViewWrapperBase@@UEAAJW4ActivationTimeoutPolicy@ViewManagerInterop@S.c)
 *     ?ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z @ 0x180245450 (-ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$CommitActivationTimeoutPolicy@AEBIAEBW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTraceLogging@@SAXAEBIAEBW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18023DF1C (--$CommitActivationTimeoutPolicy@AEBIAEBW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Inter.c)
 */

void __fastcall ViewWrapperBase::CommitActivationTimeoutPolicy(ViewWrapperBase *this)
{
  int *v2; // rdi
  __int64 v3; // r8

  if ( *((_QWORD *)this + 24) )
  {
    v2 = (int *)((char *)this + 352);
    v3 = *((unsigned int *)this + 88);
    LOBYTE(v3) = (_DWORD)v3 == 1;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 21) + 520LL) + 96LL))(
      *(_QWORD *)(*((_QWORD *)this + 21) + 520LL),
      *((_QWORD *)this + 24),
      v3);
    ViewManagerInteropTraceLogging::CommitActivationTimeoutPolicy<unsigned int const &,enum Windows::Internal::Shell::ViewManagerInterop::ActivationTimeoutPolicy const &>(
      (int *)this + 37,
      v2);
  }
}
