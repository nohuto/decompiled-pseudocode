/*
 * XREFs of _lambda_8e28f867b71c5b412c422ba9f3efd952_::operator() @ 0x180083BD4
 * Callers:
 *     _lambda_8e28f867b71c5b412c422ba9f3efd952_::_lambda_invoker_cdecl_ @ 0x180083BB0 (_lambda_8e28f867b71c5b412c422ba9f3efd952_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSITOR_PROCESS_INFO@@I@Z @ 0x18002220C (-AddMultipleAndSet@-$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSIT.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

char __fastcall lambda_8e28f867b71c5b412c422ba9f3efd952_::operator()(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        char a5)
{
  int v5; // eax
  __int64 v6; // rdx
  const struct _TlgProvider_t *v7; // rcx
  bool v9; // [rsp+30h] [rbp-79h] BYREF
  char v10; // [rsp+31h] [rbp-78h] BYREF
  bool v11; // [rsp+32h] [rbp-77h] BYREF
  int v12; // [rsp+38h] [rbp-71h] BYREF
  _BOOL8 v13; // [rsp+40h] [rbp-69h] BYREF
  __int64 v14; // [rsp+48h] [rbp-61h] BYREF
  __int64 v15; // [rsp+50h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-49h] BYREF
  int *v17; // [rsp+80h] [rbp-29h]
  __int64 v18; // [rsp+88h] [rbp-21h]
  bool *v19; // [rsp+90h] [rbp-19h]
  __int64 v20; // [rsp+98h] [rbp-11h]
  char *v21; // [rsp+A0h] [rbp-9h]
  __int64 v22; // [rsp+A8h] [rbp-1h]
  bool *v23; // [rsp+B0h] [rbp+7h]
  __int64 v24; // [rsp+B8h] [rbp+Fh]
  __int64 *v25; // [rsp+C0h] [rbp+17h]
  __int64 v26; // [rsp+C8h] [rbp+1Fh]
  char *v27; // [rsp+D0h] [rbp+27h]
  __int64 v28; // [rsp+D8h] [rbp+2Fh]
  void *retaddr; // [rsp+F8h] [rbp+4Fh]

  v12 = a3;
  v14 = a4;
  v13 = 0LL;
  v15 = 0LL;
  HIDWORD(v15) = *(_DWORD *)(a2 + 8);
  v9 = (a5 & 2) != 0;
  v10 = a5 & 1;
  v11 = (a5 & 4) != 0;
  v13 = v11;
  *(_DWORD *)((char *)&v13 + 2) = v9;
  WORD2(v13) = a5 & 1;
  LODWORD(v15) = a3;
  v5 = DynArray<_CIT_SI_COMPOSITOR_PROCESS_INFO,0>::AddMultipleAndSet(a2 + 16, &v13, 1LL);
  if ( v5 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v5, retaddr);
  if ( dword_180305E80 > 5u )
  {
    LOBYTE(v5) = TlgKeywordOn((TraceLoggingHProvider)&dword_180305E80, 1uLL);
    if ( (_BYTE)v5 )
    {
      v20 = v6;
      v17 = &v12;
      v19 = &v9;
      v21 = &v10;
      v23 = &v11;
      v25 = &v14;
      v22 = v6;
      v24 = v6;
      v27 = (char *)&v15 + 4;
      v18 = 4LL;
      v26 = 8LL;
      v28 = 4LL;
      LOBYTE(v5) = TlgWrite(v7, &unk_1802B20DC, 0LL, 0LL, 8u, &pData);
    }
  }
  return v5;
}
