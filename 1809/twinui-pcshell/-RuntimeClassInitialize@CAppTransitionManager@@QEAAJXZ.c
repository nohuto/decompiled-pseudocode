/*
 * XREFs of ?RuntimeClassInitialize@CAppTransitionManager@@QEAAJXZ @ 0x180326DE8
 * Callers:
 *     ??$MakeAndInitialize@VCAppTransitionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180325C14 (--$MakeAndInitialize@VCAppTransitionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _Init_thread_footer @ 0x1800840F0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180084158 (_Init_thread_header.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1800EF640 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800F16C4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall CAppTransitionManager::RuntimeClassInitialize(CAppTransitionManager *this)
{
  int inited; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  inited = CObjectWithThreadUseDetection::InitApartmentId((CAppTransitionManager *)((char *)this + 120));
  if ( inited < 0 )
  {
    v3 = 21LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)inited);
    return (unsigned int)inited;
  }
  if ( dword_1805111B0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1805111B0);
    if ( dword_1805111B0 == -1 )
    {
      qword_180510FA0 = 0LL;
      xmmword_180510F90 = xmmword_180482E78;
      qword_180510FA8 = 0LL;
      Init_thread_footer(&dword_1805111B0);
    }
  }
  inited = CImmersiveShellComponent::RegisterServiceInformation(
             (CAppTransitionManager *)((char *)this + 24),
             (const struct CImmersiveShellComponent::ISC_SERVICE *)&xmmword_180510F90,
             1LL);
  if ( inited < 0 )
  {
    v3 = 27LL;
    goto LABEL_3;
  }
  return 0LL;
}
