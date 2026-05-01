/*
 * XREFs of ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x1800378CC
 * Callers:
 *     ?RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x180037854 (-RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x1800685C0 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180037E64 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostQueryOfferedMemory(struct _RM_ACTIVITY_HOST *a1, unsigned __int64 *a2)
{
  int (*v4)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *); // r9
  unsigned int v5; // r9d
  int v7; // edx
  const struct _TlgProvider_t *v8; // rcx
  char v9; // al
  char v10; // [rsp+30h] [rbp-39h] BYREF
  int v11; // [rsp+34h] [rbp-35h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-31h] BYREF
  __int64 v13; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  int *v15; // [rsp+70h] [rbp+7h]
  int v16; // [rsp+78h] [rbp+Fh]
  int v17; // [rsp+7Ch] [rbp+13h]
  __int64 *v18; // [rsp+80h] [rbp+17h]
  int v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+8Ch] [rbp+23h]
  unsigned __int64 *v21; // [rsp+90h] [rbp+27h]
  int v22; // [rsp+98h] [rbp+2Fh]
  int v23; // [rsp+9Ch] [rbp+33h]
  char *v24; // [rsp+A0h] [rbp+37h]
  int v25; // [rsp+A8h] [rbp+3Fh]
  int v26; // [rsp+ACh] [rbp+43h]

  if ( (*((_BYTE *)a1 + 1244) & 0x10) != 0 )
  {
    if ( (*((_BYTE *)a1 + 1240) & 8) != 0 )
    {
      v12 = 0LL;
      *a2 = 0LL;
      goto LABEL_5;
    }
    v4 = RmpActivityHostQueryOfferedMemoryCommitSaveCallback;
  }
  else
  {
    v4 = (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostQueryOfferedMemoryDxgCallback;
  }
  v12 = 0LL;
  v11 = RmHamHostActOnProcesses(a1, 0x1000u, 1u, v4, &v12);
  v5 = v11;
  if ( v11 < 0 )
  {
    v12 = -1LL;
    goto LABEL_6;
  }
  *a2 = v12;
LABEL_5:
  v5 = 0;
  v11 = 0;
LABEL_6:
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v15 = &v11;
    v13 = *((_QWORD *)a1 + 4);
    v18 = &v13;
    v21 = &v12;
    v9 = v7 & (*((_DWORD *)a1 + 311) >> 4);
    v16 = 4;
    v26 = 0;
    v10 = v9;
    v24 = &v10;
    v19 = 8;
    v22 = 8;
    v25 = v7;
    TlgWrite(v8, &unk_1800942D3, 0LL, 0LL, 6u, &pData);
    return (unsigned int)v11;
  }
  return v5;
}
