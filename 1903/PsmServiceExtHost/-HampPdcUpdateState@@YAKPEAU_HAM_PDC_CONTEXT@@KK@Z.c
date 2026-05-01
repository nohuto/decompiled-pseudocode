/*
 * XREFs of ?HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z @ 0x18007BC84
 * Callers:
 *     ?HampPdcWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007BF60 (-HampPdcWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x18003DEC0 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18007698C (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180077F90 (-HampHostTryEnterConnectedStandby@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x18007CE88 (-HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_.c)
 */

__int64 __fastcall HampPdcUpdateState(struct _HAM_PDC_CONTEXT *a1, unsigned int a2, char a3)
{
  __int64 v3; // rsi
  unsigned int v6; // edi
  struct _RM_HAM_ACTIVITY_HOST *NextHost; // rbx
  __int64 v8; // r15
  unsigned __int8 v9; // si
  __int64 v10; // r8
  unsigned int v11; // ecx
  int v12; // edx
  int v13; // r9d
  int v14; // edx
  int v15; // r9d
  char v17; // [rsp+30h] [rbp-89h] BYREF
  int v18; // [rsp+34h] [rbp-85h] BYREF
  int v19; // [rsp+38h] [rbp-81h] BYREF
  __int64 v20; // [rsp+40h] [rbp-79h] BYREF
  __int64 v21; // [rsp+48h] [rbp-71h] BYREF
  __int64 v22; // [rsp+50h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-39h] BYREF
  int *v25; // [rsp+90h] [rbp-29h]
  int v26; // [rsp+98h] [rbp-21h]
  int v27; // [rsp+9Ch] [rbp-1Dh]
  __int64 *v28; // [rsp+A0h] [rbp-19h]
  int v29; // [rsp+A8h] [rbp-11h]
  int v30; // [rsp+ACh] [rbp-Dh]
  int *v31; // [rsp+B0h] [rbp-9h]
  int v32; // [rsp+B8h] [rbp-1h]
  int v33; // [rsp+BCh] [rbp+3h]
  __int64 *v34; // [rsp+C0h] [rbp+7h]
  int v35; // [rsp+C8h] [rbp+Fh]
  int v36; // [rsp+CCh] [rbp+13h]
  __int64 *v37; // [rsp+D0h] [rbp+17h]
  int v38; // [rsp+D8h] [rbp+1Fh]
  int v39; // [rsp+DCh] [rbp+23h]

  v3 = *(_QWORD *)a1;
  v6 = 0;
  NextHost = HampHostEnumerateHostsInNode((struct _HAM_RC_TREE_NODE *)(*(_QWORD *)a1 + 128LL), 0, 0LL);
  if ( NextHost )
  {
    v8 = v3 + 504;
    do
    {
      v9 = HampHostTryEnterConnectedStandby((__int64)NextHost, a2);
      if ( v9 )
      {
        v11 = dword_1800AB2C0;
        if ( dword_1800AB2C0 > 4u )
        {
          TlgCreateWsz(&pDesc, (LPCWSTR)NextHost + 12);
          v27 = 0;
          v30 = 0;
          v12 = *((_DWORD *)NextHost + 140);
          v33 = 0;
          v25 = &v18;
          v20 = *((_QWORD *)NextHost - 4);
          v28 = &v20;
          v19 = v9;
          v31 = &v19;
          v18 = v12;
          v26 = v13;
          v29 = 8;
          v32 = v13;
          TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180099F7D, 0LL, 0LL, 6u, &pData);
          v11 = dword_1800AB2C0;
        }
        if ( v9 == 1
          && (a3 & 1) != 0
          && v11 > 4
          && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 0x400000000008uLL) )
        {
          TlgCreateWsz(&pDesc, (LPCWSTR)NextHost + 12);
          v27 = 0;
          v30 = 0;
          v33 = 0;
          v36 = 0;
          v14 = *((_DWORD *)NextHost + 140);
          v39 = 0;
          v25 = &v19;
          v21 = *((_QWORD *)NextHost - 4);
          v28 = &v21;
          v31 = &v18;
          v34 = &v20;
          v37 = &v22;
          v19 = v14;
          v26 = v15;
          v29 = 8;
          v18 = 1;
          v32 = v15;
          LODWORD(v20) = a2;
          v35 = v15;
          v22 = 0x1000000LL;
          v38 = 8;
          TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_18009A06D, 0LL, 0LL, 8u, &pData);
        }
        v6 = 1;
      }
      LOBYTE(v10) = v9;
      HampSlsUpdateHostBlockType(v8, NextHost, v10);
      NextHost = HampManagerGetNextHost(NextHost);
    }
    while ( NextHost );
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    pDesc.Reserved = 0;
    v27 = 0;
    pDesc.Ptr = (ULONGLONG)&v17;
    v25 = (int *)&v20;
    v17 = v6;
    pDesc.Size = 1;
    LODWORD(v20) = a2;
    v26 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180099FC1, 0LL, 0LL, 4u, &pData);
  }
  return v6;
}
