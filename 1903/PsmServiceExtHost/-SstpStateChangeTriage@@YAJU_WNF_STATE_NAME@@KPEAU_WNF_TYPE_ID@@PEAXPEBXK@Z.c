/*
 * XREFs of ?SstpStateChangeTriage@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180041D40
 * Callers:
 *     ?SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180041B10 (-SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SstpStateChangeTriage(
        struct _WNF_STATE_NAME a1,
        unsigned int a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4,
        const void *a5,
        unsigned int a6)
{
  unsigned int v7; // ebx
  unsigned int v9; // r8d
  __int64 v10; // r10
  unsigned int v11; // r9d
  int v13; // edx
  const struct _TlgProvider_t *v14; // rcx
  int v15; // r10d
  char v16; // [rsp+40h] [rbp-49h] BYREF
  int v17; // [rsp+44h] [rbp-45h] BYREF
  unsigned int v18; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  int *v20; // [rsp+70h] [rbp-19h]
  int v21; // [rsp+78h] [rbp-11h]
  int v22; // [rsp+7Ch] [rbp-Dh]
  char *v23; // [rsp+80h] [rbp-9h]
  int v24; // [rsp+88h] [rbp-1h]
  int v25; // [rsp+8Ch] [rbp+3h]
  int *v26; // [rsp+90h] [rbp+7h]
  int v27; // [rsp+98h] [rbp+Fh]
  int v28; // [rsp+9Ch] [rbp+13h]

  v7 = 0;
  v9 = a4[54];
  if ( !v9 )
    goto LABEL_6;
  while ( 1 )
  {
    v10 = 8LL * v7;
    if ( *(_QWORD *)&a4[v10 + 6] == a1 )
      break;
    if ( ++v7 >= v9 )
      goto LABEL_6;
  }
  v17 = (*(__int64 (__fastcall **)(struct _WNF_STATE_NAME, _QWORD, struct _WNF_TYPE_ID *, _DWORD *, const void *, unsigned int))&a4[v10 + 8])(
          a1,
          a2,
          a3,
          a4,
          a5,
          a6);
  v11 = v17;
  if ( v17 >= 0 )
  {
LABEL_6:
    v11 = 0;
    v17 = 0;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v20 = &v17;
    v23 = &v16;
    v26 = (int *)&v18;
    v21 = v15;
    v16 = v7;
    v24 = v13;
    v18 = a2;
    v27 = v15;
    TlgWrite(v14, &unk_18009B391, 0LL, 0LL, 5u, &pData);
    return (unsigned int)v17;
  }
  return v11;
}
