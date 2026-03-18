/*
 * XREFs of McTemplateK0pzzq @ 0x1C0036090
 * Callers:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C0035FC0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?VgpuTraceFrequentRead@@YAXEJPEAXPEBG1ZZ @ 0x1C01E0530 (-VgpuTraceFrequentRead@@YAXEJPEAXPEBG1ZZ.c)
 * Callees:
 *     McGenEventWrite @ 0x1C00130CC (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 */

ULONG McTemplateK0pzzq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  const wchar_t *v3; // rcx
  __int64 v4; // rax
  int v6; // r9d
  __int64 v7; // rdx
  __int64 v8; // r8
  const wchar_t *v9; // rcx
  bool v10; // zf
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-21h] BYREF
  va_list v13; // [rsp+40h] [rbp-11h]
  __int64 v14; // [rsp+48h] [rbp-9h]
  const wchar_t *v15; // [rsp+50h] [rbp-1h]
  int v16; // [rsp+58h] [rbp+7h]
  int v17; // [rsp+5Ch] [rbp+Bh]
  const wchar_t *v18; // [rsp+60h] [rbp+Fh]
  int v19; // [rsp+68h] [rbp+17h]
  int v20; // [rsp+6Ch] [rbp+1Bh]
  va_list v21; // [rsp+70h] [rbp+1Fh]
  __int64 v22; // [rsp+78h] [rbp+27h]
  __int64 v23; // [rsp+B8h] [rbp+67h] BYREF
  va_list va; // [rsp+B8h] [rbp+67h]
  const wchar_t *v25; // [rsp+C0h] [rbp+6Fh]
  const wchar_t *v26; // [rsp+C8h] [rbp+77h]
  va_list va1; // [rsp+D0h] [rbp+7Fh] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v23 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, const wchar_t *);
  v26 = va_arg(va1, const wchar_t *);
  v3 = v25;
  va_copy(v13, va);
  v4 = -1LL;
  v14 = 8LL;
  v6 = 10;
  if ( v25 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v25[v7] );
    v8 = (unsigned int)(2 * v7 + 2);
  }
  else
  {
    v8 = 10LL;
  }
  v16 = v8;
  v17 = 0;
  if ( !v25 )
    v3 = L"NULL";
  v15 = v3;
  v9 = v26;
  v10 = v26 == 0LL;
  if ( v26 )
  {
    do
      ++v4;
    while ( v26[v4] );
    v6 = 2 * v4 + 2;
    v10 = v26 == 0LL;
  }
  if ( v10 )
    v9 = L"NULL";
  v19 = v6;
  v18 = v9;
  va_copy(v21, va1);
  v20 = 0;
  v22 = 4LL;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&DxgkControlGuid_Context, a2, (LPCGUID)v8, 5u, &EventData);
}
