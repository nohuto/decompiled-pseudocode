/*
 * XREFs of ?MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x180009718
 * Callers:
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x180007CDC (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ISMTracing::MPCInputRouter_Set3DFocusTarget_(
        ISMTracing *this,
        struct IMPCFocusTarget *a2,
        struct IMPCFocusTarget *a3)
{
  _DWORD *v5; // rcx
  __int64 v6; // r14
  int v7; // eax
  const wchar_t *v8; // rdi
  char v9; // al
  const wchar_t *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // eax
  int v14; // [rsp+30h] [rbp-79h] BYREF
  int v15; // [rsp+34h] [rbp-75h] BYREF
  struct IMPCFocusTarget *v16; // [rsp+38h] [rbp-71h] BYREF
  struct IMPCFocusTarget *v17; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  struct IMPCFocusTarget **v19; // [rsp+70h] [rbp-39h]
  __int64 v20; // [rsp+78h] [rbp-31h]
  int *v21; // [rsp+80h] [rbp-29h]
  __int64 v22; // [rsp+88h] [rbp-21h]
  const wchar_t *v23; // [rsp+90h] [rbp-19h]
  int v24; // [rsp+98h] [rbp-11h]
  int v25; // [rsp+9Ch] [rbp-Dh]
  struct IMPCFocusTarget **v26; // [rsp+A0h] [rbp-9h]
  __int64 v27; // [rsp+A8h] [rbp-1h]
  int *v28; // [rsp+B0h] [rbp+7h]
  __int64 v29; // [rsp+B8h] [rbp+Fh]
  const wchar_t *v30; // [rsp+C0h] [rbp+17h]
  int v31; // [rsp+C8h] [rbp+1Fh]
  int v32; // [rsp+CCh] [rbp+23h]

  v5 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v5 )
  {
    if ( *v5 )
    {
      v6 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v6 > 4u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
      {
        v16 = a2;
        v19 = &v16;
        v20 = 8LL;
        if ( a2 )
          v7 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a2 + 48LL))(a2);
        else
          v7 = 0;
        v14 = v7;
        v21 = &v14;
        v8 = L"Exclusive";
        v22 = 4LL;
        if ( a2 )
        {
          v9 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a2 + 32LL))(a2);
          v10 = L"Exclusive";
          if ( !v9 )
            v10 = L"SharedWorld";
        }
        else
        {
          v10 = &sourceString;
        }
        v11 = -1LL;
        v12 = -1LL;
        do
          ++v12;
        while ( v10[v12] );
        v23 = v10;
        v24 = 2 * v12 + 2;
        v26 = &v17;
        v25 = 0;
        v17 = a3;
        v27 = 8LL;
        if ( a3 )
          v13 = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a3 + 48LL))(a3);
        else
          v13 = 0;
        v15 = v13;
        v28 = &v15;
        v29 = 4LL;
        if ( a3 )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)a3 + 32LL))(a3) )
            v8 = L"SharedWorld";
        }
        else
        {
          v8 = &sourceString;
        }
        do
          ++v11;
        while ( v8[v11] );
        v30 = v8;
        v31 = 2 * v11 + 2;
        v32 = 0;
        TlgWrite((TraceLoggingHProvider)v6, &unk_180165F41, 0LL, 0LL, 8u, &pData);
      }
    }
  }
}
