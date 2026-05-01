/*
 * XREFs of ?RmpActivityHostDecommitOfferedMemoryDxgCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180068450
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostDecommitOfferedMemoryDxgCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        int a3,
        _DWORD *a4)
{
  __int64 v4; // rax
  int v8; // ecx
  unsigned int v9; // r9d
  int v10; // edx
  const struct _TlgProvider_t *v11; // rcx
  int v13; // [rsp+30h] [rbp-69h] BYREF
  int v14; // [rsp+34h] [rbp-65h] BYREF
  _DWORD v15[2]; // [rsp+38h] [rbp-61h] BYREF
  void *v16; // [rsp+40h] [rbp-59h]
  __int64 v17; // [rsp+48h] [rbp-51h]
  __int64 v18; // [rsp+50h] [rbp-49h]
  __int64 v19; // [rsp+58h] [rbp-41h] BYREF
  __int64 v20; // [rsp+60h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-29h] BYREF
  int *v22; // [rsp+90h] [rbp-9h]
  int v23; // [rsp+98h] [rbp-1h]
  int v24; // [rsp+9Ch] [rbp+3h]
  __int64 *v25; // [rsp+A0h] [rbp+7h]
  int v26; // [rsp+A8h] [rbp+Fh]
  int v27; // [rsp+ACh] [rbp+13h]
  int *v28; // [rsp+B0h] [rbp+17h]
  int v29; // [rsp+B8h] [rbp+1Fh]
  int v30; // [rsp+BCh] [rbp+23h]
  __int64 *v31; // [rsp+C0h] [rbp+27h]
  int v32; // [rsp+C8h] [rbp+2Fh]
  int v33; // [rsp+CCh] [rbp+33h]

  v4 = *(_QWORD *)a4;
  v17 = 0LL;
  v15[1] = 0;
  v19 = 0LL;
  v18 = v4;
  LODWORD(v4) = a4[4] & 2;
  v8 = (a4[4] >> 1) & 1;
  v15[0] = 40;
  v16 = a2;
  v17 = (unsigned int)v4 | v8;
  v13 = D3DKMTTrimProcessCommitment(v15);
  v9 = v13;
  if ( v13 >= 0 )
  {
    *((_QWORD *)a4 + 1) += v19;
    v9 = 0;
    v13 = 0;
  }
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x11uLL) )
  {
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v22 = &v13;
    v20 = *((_QWORD *)a1 + 4);
    v25 = &v20;
    v28 = &v14;
    v31 = &v19;
    v23 = v10 - 13;
    v26 = v10 - 13 + 4;
    v14 = a3;
    v29 = v10 - 13;
    v32 = v26;
    TlgWrite(v11, &unk_18009420E, 0LL, 0LL, 6u, &pData);
    return (unsigned int)v13;
  }
  return v9;
}
