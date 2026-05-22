/*
 * XREFs of ?OnSuccessfulDetach@MPCSixDofProcessor@@EEAAXPEAUIMPCTarget@@I@Z @ 0x1800F1130
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnSuccessfulDetach@MPCInputProviderBase@@MEAAXPEAUIMPCTarget@@I@Z @ 0x180100CA0 (-OnSuccessfulDetach@MPCInputProviderBase@@MEAAXPEAUIMPCTarget@@I@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCSixDofProcessor::OnSuccessfulDetach(
        MPCSixDofProcessor *this,
        struct IMPCTarget *a2,
        unsigned int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  int v9[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_BYTE *)this + 4696) )
  {
    v6 = *((_QWORD *)this + 5);
    v7 = *((unsigned int *)this + 117);
    v9[1] = 0;
    v9[3] = 0;
    v9[0] = 3;
    v9[2] = 1;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v6 + 72LL))(v6, v7, v9);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x354,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
        (const char *)(unsigned int)v8);
  }
  MPCInputProviderBase::OnSuccessfulDetach(this, a2, a3);
}
