/*
 * XREFs of ??$CreateGitHelper@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VGitPtr@Internal@4@@Details@Internal@Windows@@YAJPEAU?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@2@PEAPEAU3452@@Z @ 0x18013FA78
 * Callers:
 *     ?Add@?$GitEventSource@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180141E3C (-Add@-$GitEventSource@U-$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@Applica.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$GitInvokeHelper@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VGitPtr@Internal@4@$01@Details@Internal@Windows@@QEAA@XZ @ 0x180140B58 (--0-$GitInvokeHelper@U-$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@Applicat.c)
 *     ?Revoke@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ @ 0x180148BC0 (-Revoke@-$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Details::CreateGitHelper<Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Internal::GitPtr>(
        __int64 a1,
        _QWORD *a2)
{
  void *v4; // rax
  void *v5; // rbx
  _DWORD *v6; // rdi
  int v7; // ebx

  *a2 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v6 = 0LL;
  if ( v4 )
  {
    memset_0(v4, 0, 0x40uLL);
    v6 = (_DWORD *)Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Internal::GitPtr,2>::GitInvokeHelper<Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Internal::GitPtr,2>(v5);
  }
  if ( !v6 )
  {
    v7 = -2147024882;
    goto LABEL_11;
  }
  v7 = Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Revoke(v6 + 12);
  if ( v7 >= 0 && a1 )
  {
    v7 = v6[15];
    if ( v7 < 0 )
      goto LABEL_11;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _DWORD *))(*(_QWORD *)qword_18059A2A8 + 24LL))(
           qword_18059A2A8,
           a1,
           &GUID_2768fda5_53f3_5aa9_bedd_2f3df0989fb7,
           v6 + 14);
  }
  if ( v7 >= 0 )
    v7 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, _QWORD *))v6)(
           v6,
           &GUID_2768fda5_53f3_5aa9_bedd_2f3df0989fb7,
           a2);
LABEL_11:
  if ( v6 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v7;
}
