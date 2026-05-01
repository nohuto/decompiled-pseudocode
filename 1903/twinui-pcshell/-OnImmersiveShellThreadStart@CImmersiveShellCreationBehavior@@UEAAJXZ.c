/*
 * XREFs of ?OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x1801D5D60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     IsOleInitializePresent @ 0x180089470 (IsOleInitializePresent.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008D08C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@wil@@CAX_NW4Rep.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?SHCreateDUIThreadRef@@YAJPEAJPEAPEAUIUnknown@@@Z @ 0x1801D6494 (-SHCreateDUIThreadRef@@YAJPEAJPEAPEAUIUnknown@@@Z.c)
 *     ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x1801D665C (-ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveShellCreationBehavior::OnImmersiveShellThreadStart(CImmersiveShellCreationBehavior *this)
{
  __int64 v2; // rdx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  HRESULT v4; // ebx
  __int64 v5; // r8
  __int64 v6; // rdx
  void *v8; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = CImmersiveShellCreationBehavior::ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 32));
  if ( v4 < 0 )
  {
    v6 = 500LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  if ( !*((_BYTE *)this + 16) && IsOleInitializePresent() )
  {
    v4 = OleInitialize(0LL);
    if ( v4 < 0 )
    {
      v6 = 507LL;
      goto LABEL_3;
    }
    *((_BYTE *)this + 16) = 1;
  }
  if ( !*((_QWORD *)this + 3) )
  {
    v8 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v8 )
    {
      *(_QWORD *)v8 = &CThreadRefHost::`vftable';
      *((_DWORD *)v8 + 2) = 0;
      *((_QWORD *)v8 + 2) = 0LL;
      SHCreateDUIThreadRef((int *)v8 + 2, (struct IUnknown **)v8 + 2);
      SHSetThreadRef(*((IUnknown **)v8 + 2));
    }
    else
    {
      v8 = 0LL;
    }
    v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = 0LL;
    if ( v3 )
      (**v3)(v3, 1LL);
    *((_QWORD *)this + 3) = v8;
    if ( !v8 )
    {
      v4 = -2147024882;
      v6 = 519LL;
      goto LABEL_3;
    }
  }
  wil::Feature<__WilFeatureTraits_Feature_SiHostLessExplorer>::ReportUsageToService((__int64)v3, v2, v5);
  return 0LL;
}
