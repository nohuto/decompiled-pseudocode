/*
 * XREFs of ??$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND__@@AEBKAEAK@Z @ 0x1802088FC
 * Callers:
 *     ?SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x1800667B0 (-SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilege.c)
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VPrivilegedOperationsTraceLogging@@@details@wil@@QEAAPEAVPrivilegedOperationsTraceLogging@@P6AXXZ@Z @ 0x18020C55C (-get@-$static_lazy@VPrivilegedOperationsTraceLogging@@@details@wil@@QEAAPEAVPrivilegedOperations.c)
 */

int __fastcall PrivilegedOperationsTraceLogging::SetShellCloak<int,HWND__ * &,unsigned long const &,unsigned long &>(
        int *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v8; // rax
  const struct _TlgProvider_t *v9; // rcx
  int v11; // [rsp+38h] [rbp-29h] BYREF
  __int64 v12; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  int *v14; // [rsp+68h] [rbp+7h]
  __int64 v15; // [rsp+70h] [rbp+Fh]
  __int64 *v16; // [rsp+78h] [rbp+17h]
  __int64 v17; // [rsp+80h] [rbp+1Fh]
  __int64 v18; // [rsp+88h] [rbp+27h]
  __int64 v19; // [rsp+90h] [rbp+2Fh]
  __int64 v20; // [rsp+98h] [rbp+37h]
  __int64 v21; // [rsp+A0h] [rbp+3Fh]

  v8 = wil::details::static_lazy<PrivilegedOperationsTraceLogging>::get(
         a1,
         lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_);
  v9 = *(const struct _TlgProvider_t **)(v8 + 8);
  if ( *(_DWORD *)v9 > 5u )
  {
    v11 = *a1;
    v14 = &v11;
    v12 = *a2;
    v16 = &v12;
    v15 = 4LL;
    v17 = 8LL;
    v18 = a3;
    v19 = 4LL;
    v20 = a4;
    v21 = 4LL;
    LODWORD(v8) = TlgWrite(v9, &unk_1804EF146, 0LL, 0LL, 6u, &pData);
  }
  return v8;
}
