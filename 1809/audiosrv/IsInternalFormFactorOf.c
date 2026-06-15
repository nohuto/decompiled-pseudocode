/*
 * XREFs of IsInternalFormFactorOf @ 0x18010FFC0
 * Callers:
 *     DisableSpatialOnInternalSpeakers @ 0x18010F82C (DisableSpatialOnInternalSpeakers.c)
 *     SearchForHeadphones @ 0x18011046C (SearchForHeadphones.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     GetContainerId @ 0x18005641C (GetContainerId.c)
 *     GetEndpointFormFactor @ 0x180056C74 (GetEndpointFormFactor.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall IsInternalFormFactorOf(__int64 a1, int a2)
{
  char v3; // bl
  int ContainerId; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rdx
  int EndpointFormFactor; // edi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v13[1] = -2LL;
  v3 = 0;
  v13[0] = 0LL;
  ContainerId = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, 0LL, v13);
  v7 = retaddr;
  if ( ContainerId < 0 )
  {
    v8 = 420LL;
LABEL_5:
    wil::details::in1diag3::_Log_Hr(
      v7,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)ContainerId);
    goto LABEL_11;
  }
  EndpointFormFactor = GetEndpointFormFactor(v13[0], v5, v6);
  ContainerId = GetContainerId(v10, v13[0], &v14);
  v7 = retaddr;
  if ( ContainerId < 0 )
  {
    v8 = 425LL;
    goto LABEL_5;
  }
  if ( a2 == EndpointFormFactor )
  {
    v11 = v14;
    if ( !(_QWORD)v14 )
      v11 = *((_QWORD *)&v14 + 1) + 1LL;
    if ( !v11 )
      v3 = 1;
  }
LABEL_11:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v13);
  return v3;
}
