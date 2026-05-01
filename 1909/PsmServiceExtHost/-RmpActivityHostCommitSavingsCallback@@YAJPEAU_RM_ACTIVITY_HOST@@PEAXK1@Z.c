/*
 * XREFs of ?RmpActivityHostCommitSavingsCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180067FE0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

__int64 __fastcall RmpActivityHostCommitSavingsCallback(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, int *a4)
{
  int v4; // edi
  unsigned int v8; // r9d
  const struct _TlgProvider_t *v9; // rcx
  int v10; // r10d
  bool v12; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-65h] BYREF
  int v14; // [rsp+38h] [rbp-61h] BYREF
  __int64 v15; // [rsp+40h] [rbp-59h] BYREF
  int ProcessInformation; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v17; // [rsp+4Ch] [rbp-4Dh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-29h] BYREF
  unsigned int *v19; // [rsp+90h] [rbp-9h]
  int v20; // [rsp+98h] [rbp-1h]
  int v21; // [rsp+9Ch] [rbp+3h]
  __int64 *v22; // [rsp+A0h] [rbp+7h]
  int v23; // [rsp+A8h] [rbp+Fh]
  int v24; // [rsp+ACh] [rbp+13h]
  bool *v25; // [rsp+B0h] [rbp+17h]
  int v26; // [rsp+B8h] [rbp+1Fh]
  int v27; // [rsp+BCh] [rbp+23h]
  int *v28; // [rsp+C0h] [rbp+27h]
  int v29; // [rsp+C8h] [rbp+2Fh]
  int v30; // [rsp+CCh] [rbp+33h]

  v4 = *a4;
  memset_0(&ProcessInformation, 0, 0x20uLL);
  ProcessInformation = 3;
  v17 = v17 & 0xFFFFFFFE | (v4 != 0);
  v13 = NtSetInformationProcess(a2, (PROCESSINFOCLASS)65, &ProcessInformation, 0x20u);
  v8 = v13;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x11uLL) )
  {
    v21 = 0;
    v24 = 0;
    v19 = &v13;
    v15 = *((_QWORD *)a1 + 4);
    v12 = v4 != 0;
    v27 = 0;
    v30 = 0;
    v22 = &v15;
    v25 = &v12;
    v28 = &v14;
    v20 = v10;
    v23 = 8;
    v26 = 1;
    v14 = a3;
    v29 = v10;
    TlgWrite(v9, &unk_180094196, 0LL, 0LL, 6u, &pData);
    return v13;
  }
  return v8;
}
