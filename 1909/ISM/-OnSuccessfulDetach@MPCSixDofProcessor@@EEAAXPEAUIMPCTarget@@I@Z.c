/*
 * XREFs of ?OnSuccessfulDetach@MPCSixDofProcessor@@EEAAXPEAUIMPCTarget@@I@Z @ 0x180130F50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@@SAXAEAPEAUIMPCTarget@@$$QEAPEAULegacyInputInfo@@$$QEA_NAEAI@Z @ 0x18013CA30 (--$MPCInputProviderSourceDetectedLost@AEAPEAUIMPCTarget@@PEAULegacyInputInfo@@_NAEAI@ISMTracing@.c)
 */

void __fastcall MPCSixDofProcessor::OnSuccessfulDetach(MPCSixDofProcessor *this, struct IMPCTarget *a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  _BYTE v9[8]; // [rsp+20h] [rbp-30h] BYREF
  int v10; // [rsp+28h] [rbp-28h] BYREF
  char *v11; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  if ( *((_BYTE *)this + 5576) )
  {
    v6 = *((_QWORD *)this + 5);
    v7 = *((unsigned int *)this + 119);
    v12[0] = 3LL;
    v12[1] = 1LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v6 + 72LL))(v6, v7, v12);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        846LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
        (const char *)(unsigned int)v8);
  }
  v10 = a3;
  v11 = (char *)this + 472;
  v12[0] = a2;
  v9[0] = 0;
  ((void (__fastcall *)(_QWORD *, char **, _BYTE *, int *))ISMTracing::MPCInputProviderSourceDetectedLost<IMPCTarget * &,LegacyInputInfo *,bool,unsigned int &>)(
    v12,
    &v11,
    v9,
    &v10);
  *((_BYTE *)this + 4537) = 1;
}
