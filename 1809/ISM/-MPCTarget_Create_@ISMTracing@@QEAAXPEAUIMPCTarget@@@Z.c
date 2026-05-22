/*
 * XREFs of ?MPCTarget_Create_@ISMTracing@@QEAAXPEAUIMPCTarget@@@Z @ 0x18000C154
 * Callers:
 *     ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x18000B6D4 (--0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ISMTracing::MPCTarget_Create_(ISMTracing *this, struct IMPCTarget *a2)
{
  _DWORD *v3; // rcx
  __int64 v4; // rdi
  int v5; // eax
  char v6; // al
  const wchar_t *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // [rsp+38h] [rbp-19h] BYREF
  __int64 v11; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  int *v13; // [rsp+68h] [rbp+17h]
  __int64 v14; // [rsp+70h] [rbp+1Fh]
  const wchar_t *v15; // [rsp+78h] [rbp+27h]
  int v16; // [rsp+80h] [rbp+2Fh]
  int v17; // [rsp+84h] [rbp+33h]
  __int64 *v18; // [rsp+88h] [rbp+37h]
  __int64 v19; // [rsp+90h] [rbp+3Fh]

  v3 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v3 )
  {
    if ( *v3 )
    {
      v4 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v4 > 4u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
      {
        if ( a2 )
          v5 = (*(__int64 (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)a2 + 48LL))(a2);
        else
          v5 = 0;
        v10 = v5;
        v13 = &v10;
        v14 = 4LL;
        if ( a2 )
        {
          v6 = (*(__int64 (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)a2 + 32LL))(a2);
          v7 = L"Exclusive";
          if ( !v6 )
            v7 = L"SharedWorld";
        }
        else
        {
          v7 = &sourceString;
        }
        v8 = -1LL;
        do
          ++v8;
        while ( v7[v8] );
        v15 = v7;
        v16 = 2 * v8 + 2;
        v9 = *(_QWORD *)a2;
        v17 = 0;
        v11 = (*(__int64 (__fastcall **)(struct IMPCTarget *))(v9 + 56))(a2);
        v18 = &v11;
        v19 = 8LL;
        TlgWrite((TraceLoggingHProvider)v4, &unk_1801664F2, 0LL, 0LL, 5u, &pData);
      }
    }
  }
}
