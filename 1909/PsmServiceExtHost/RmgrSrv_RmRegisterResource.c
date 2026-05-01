/*
 * XREFs of RmgrSrv_RmRegisterResource @ 0x18003DAE0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmgrSrv_RmRegisterResource(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  int v6; // r9d
  unsigned int v8; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-25h] BYREF
  unsigned int v10; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  unsigned int *v12; // [rsp+60h] [rbp+7h]
  __int64 v13; // [rsp+68h] [rbp+Fh]
  int *v14; // [rsp+70h] [rbp+17h]
  __int64 v15; // [rsp+78h] [rbp+1Fh]
  unsigned int *v16; // [rsp+80h] [rbp+27h]
  __int64 v17; // [rsp+88h] [rbp+2Fh]
  unsigned int v18; // [rsp+D8h] [rbp+7Fh] BYREF

  v18 = a4;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v9 = a2;
    v12 = &v9;
    v14 = (int *)&v10;
    v16 = &v18;
    v13 = 4LL;
    v10 = a3;
    v15 = 4LL;
    v17 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18009274D, 0LL, 0LL, 5u, &pData);
    a4 = v18;
  }
  LOBYTE(a4) = (_DWORD)a4 != 0;
  v6 = (*(__int64 (__fastcall **)(ExecutionModel::ResourceManager *, _QWORD, _QWORD, __int64))(*(_QWORD *)g_pResourceManager
                                                                                             + 24LL))(
         g_pResourceManager,
         a2,
         a3,
         a4);
  if ( v6 >= 0 )
    v6 = 0;
  v8 = v6;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    v13 = 4LL;
    v12 = &v8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18009255D, 0LL, 0LL, 3u, &pData);
    return v8;
  }
  return (unsigned int)v6;
}
