/*
 * XREFs of ?RuntimeClassInitialize@CAppTransitionManager@@QEAAJXZ @ 0x180387344
 * Callers:
 *     ??$MakeAndInitialize@VCAppTransitionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180386194 (--$MakeAndInitialize@VCAppTransitionManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _Init_thread_footer @ 0x180086D88 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180086DF0 (_Init_thread_header.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180113AF0 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180116064 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
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
  if ( dword_18059B6F4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18059B6F4);
    if ( dword_18059B6F4 == -1 )
    {
      qword_18059B450 = 0LL;
      xmmword_18059B440 = xmmword_1804FF688;
      qword_18059B458 = 0LL;
      Init_thread_footer(&dword_18059B6F4);
    }
  }
  inited = CImmersiveShellComponent::RegisterServiceInformation(
             (CAppTransitionManager *)((char *)this + 24),
             (const struct CImmersiveShellComponent::ISC_SERVICE *)&xmmword_18059B440,
             1LL);
  if ( inited < 0 )
  {
    v3 = 27LL;
    goto LABEL_3;
  }
  return 0LL;
}
