/*
 * XREFs of ?NotifySubmixClient@CAppSubmixClient@@QEAAXW4ProcessSubmix_NotificationType@@_K@Z @ 0x1800F1CF8
 * Callers:
 *     _lambda_0f6133618d0c12f17131f09684aeafcf_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1800F0774 (_lambda_0f6133618d0c12f17131f09684aeafcf_--operator()_std--unique_ptr_CAppSubmixClientContext_st.c)
 *     _lambda_43698c41cf4338565ce00927154dde27_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1800F0880 (_lambda_43698c41cf4338565ce00927154dde27_--operator()_std--unique_ptr_CAppSubmixClientContext_st.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAppSubmixClient::NotifySubmixClient(__int64 *a1, int a2, __int64 a3)
{
  DWORD CurrentProcessId; // eax
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // r8
  int MediaEvent; // eax
  int v11[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+28h] [rbp-40h]
  int v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  memset_0(v11, 0, 0x28uLL);
  v11[0] = 40;
  v11[1] = 0x40000;
  CurrentProcessId = GetCurrentProcessId();
  v7 = *a1;
  v12 = CurrentProcessId;
  v13 = a2;
  v14 = a3;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
  MediaEvent = GenerateMediaEvent(v11, v8, v9);
  if ( MediaEvent < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x274,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)(unsigned int)MediaEvent);
}
