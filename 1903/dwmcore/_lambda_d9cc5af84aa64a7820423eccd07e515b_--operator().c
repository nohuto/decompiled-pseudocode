/*
 * XREFs of _lambda_d9cc5af84aa64a7820423eccd07e515b_::operator() @ 0x1800A7558
 * Callers:
 *     _lambda_d9cc5af84aa64a7820423eccd07e515b_::_lambda_invoker_cdecl_ @ 0x1800A7530 (_lambda_d9cc5af84aa64a7820423eccd07e515b_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     ?AddMultipleAndSet@?$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSITOR_PROCESS_INFO@@I@Z @ 0x1800C483C (-AddMultipleAndSet@-$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSIT.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

char __fastcall lambda_d9cc5af84aa64a7820423eccd07e515b_::operator()(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rdx
  const struct _TlgProvider_t *v9; // rcx
  bool v11; // [rsp+30h] [rbp-91h] BYREF
  char v12; // [rsp+31h] [rbp-90h] BYREF
  bool v13; // [rsp+32h] [rbp-8Fh] BYREF
  int v14; // [rsp+38h] [rbp-89h] BYREF
  _WORD v15[4]; // [rsp+40h] [rbp-81h] BYREF
  __int64 v16; // [rsp+48h] [rbp-79h] BYREF
  int v17; // [rsp+50h] [rbp-71h]
  int v18; // [rsp+54h] [rbp-6Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-61h] BYREF
  int *v20; // [rsp+80h] [rbp-41h]
  __int64 v21; // [rsp+88h] [rbp-39h]
  bool *v22; // [rsp+90h] [rbp-31h]
  __int64 v23; // [rsp+98h] [rbp-29h]
  char *v24; // [rsp+A0h] [rbp-21h]
  __int64 v25; // [rsp+A8h] [rbp-19h]
  bool *v26; // [rsp+B0h] [rbp-11h]
  __int64 v27; // [rsp+B8h] [rbp-9h]
  __int64 *v28; // [rsp+C0h] [rbp-1h]
  __int64 v29; // [rsp+C8h] [rbp+7h]
  int *v30; // [rsp+D0h] [rbp+Fh]
  __int64 v31; // [rsp+D8h] [rbp+17h]
  void *retaddr; // [rsp+108h] [rbp+47h]

  v14 = a3;
  v16 = a4;
  v18 = *(_DWORD *)(a2 + 8);
  v11 = (a6 & 2) != 0;
  v12 = a6 & 1;
  v13 = (a6 & 4) != 0;
  v15[0] = v13;
  v15[1] = v11;
  v15[2] = a6 & 1;
  v15[3] = 0;
  v17 = a3;
  v6 = DynArray<_CIT_SI_COMPOSITOR_PROCESS_INFO,0>::AddMultipleAndSet(a2 + 16, v15, 1LL);
  if ( v6 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v6, retaddr, v7);
  if ( dword_18033A1D0 > 5u )
  {
    LOBYTE(v6) = TlgKeywordOn((TraceLoggingHProvider)&dword_18033A1D0, 1uLL);
    if ( (_BYTE)v6 )
    {
      v23 = v8;
      v20 = &v14;
      v22 = &v11;
      v24 = &v12;
      v26 = &v13;
      v28 = &v16;
      v25 = v8;
      v27 = v8;
      v30 = &v18;
      v21 = 4LL;
      v29 = 8LL;
      v31 = 4LL;
      LOBYTE(v6) = TlgWrite(v9, &unk_1802D91E0, 0LL, 0LL, 8u, &pData);
    }
  }
  return v6;
}
