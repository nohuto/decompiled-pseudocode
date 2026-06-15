/*
 * XREFs of IsInternalFormFactorOf @ 0x1800054E0
 * Callers:
 *     SearchForHeadphones @ 0x180005424 (SearchForHeadphones.c)
 *     DisableSpatialOnInternalSpeakers @ 0x18011C9EC (DisableSpatialOnInternalSpeakers.c)
 * Callees:
 *     GetEndpointFormFactor @ 0x1800088B8 (GetEndpointFormFactor.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E4E0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GetContainerId @ 0x180047D00 (GetContainerId.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall IsInternalFormFactorOf(__int64 a1, int a2)
{
  int ContainerId; // eax
  wil::details::in1diag3 *v4; // rcx
  int EndpointFormFactor; // ebx
  __int64 v6; // rcx
  char v7; // bl
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v11[1] = -2LL;
  v11[0] = 0LL;
  ContainerId = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)a1 + 32LL))(a1, 0LL, v11);
  v4 = retaddr;
  if ( ContainerId < 0 )
  {
    v9 = 334LL;
LABEL_10:
    wil::details::in1diag3::_Log_Hr(
      v4,
      (void *)v9,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)ContainerId,
      v11[0]);
LABEL_4:
    v7 = 0;
    goto LABEL_5;
  }
  EndpointFormFactor = GetEndpointFormFactor(v11[0]);
  ContainerId = GetContainerId(v6, v11[0], v12);
  v4 = retaddr;
  if ( ContainerId < 0 )
  {
    v9 = 339LL;
    goto LABEL_10;
  }
  if ( a2 != EndpointFormFactor )
    goto LABEL_4;
  v10 = v12[0];
  if ( !v12[0] )
    v10 = v12[1] + 1LL;
  if ( v10 )
    goto LABEL_4;
  v7 = 1;
LABEL_5:
  if ( v11[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11[0] + 16LL))(v11[0]);
  return v7;
}
