/*
 * XREFs of ?NotifySubmixClient@CAppSubmixClient@@QEAAXW4ProcessSubmix_NotificationType@@_K@Z @ 0x1800FDB68
 * Callers:
 *     _lambda_0f6133618d0c12f17131f09684aeafcf_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1800FC590 (_lambda_0f6133618d0c12f17131f09684aeafcf_--operator()_std--unique_ptr_CAppSubmixClientContext_st.c)
 *     _lambda_43698c41cf4338565ce00927154dde27_::operator()_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____const__ @ 0x1800FC68C (_lambda_43698c41cf4338565ce00927154dde27_--operator()_std--unique_ptr_CAppSubmixClientContext_st.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAppSubmixClient::NotifySubmixClient(__int64 *a1, int a2, __int64 a3)
{
  DWORD CurrentProcessId; // eax
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // r8
  int MediaEvent; // eax
  int v11[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+28h] [rbp-40h]
  __int128 v13; // [rsp+38h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v11[0] = 40;
  v11[1] = 0x40000;
  v12 = 0LL;
  v13 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  v7 = *a1;
  *(_QWORD *)&v12 = CurrentProcessId;
  LODWORD(v13) = a2;
  *((_QWORD *)&v13 + 1) = a3;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
  MediaEvent = GenerateMediaEvent(v11, v8, v9);
  if ( MediaEvent < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x27D,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)(unsigned int)MediaEvent);
}
