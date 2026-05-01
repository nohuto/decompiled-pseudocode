/*
 * XREFs of ?HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180076DDC
 * Callers:
 *     ?HampManagerTracingControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x180047480 (-HampManagerTracingControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E090 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18000E0DC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180037E64 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x18004936C (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

void __fastcall HamRmHostLogRundownEvents(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v2; // edx
  struct _HAM_ACTIVITY *i; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // edx
  __int64 v8; // r10
  char v9; // al
  int v10; // r9d
  struct _HAM_ACTIVITY *v11; // rbx
  char v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13; // [rsp+31h] [rbp-CFh] BYREF
  char v14; // [rsp+32h] [rbp-CEh] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+3Ch] [rbp-C4h] BYREF
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+B0h] [rbp-50h] BYREF
  int *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  int *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  int *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  int *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  char *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  __int64 *v38; // [rsp+110h] [rbp+10h]
  __int64 v39; // [rsp+118h] [rbp+18h]
  char *v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  __int64 *v42; // [rsp+130h] [rbp+30h]
  __int64 v43; // [rsp+138h] [rbp+38h]
  int *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]
  __int64 v46; // [rsp+150h] [rbp+50h]
  __int64 v47; // [rsp+158h] [rbp+58h]
  __int64 v48; // [rsp+160h] [rbp+60h]
  __int64 v49; // [rsp+168h] [rbp+68h]

  HampHostAcquireLockExclusiveEx(a1, 0);
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v19, (union _RM_OPTIMIZATION_STATE *)&v20);
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 12);
    v2 = *((_DWORD *)a1 + 140);
    v26.Ptr = (ULONGLONG)&v18;
    v21 = *((_QWORD *)a1 - 4);
    v27.Ptr = (ULONGLONG)&v21;
    v15 = v19;
    v28 = &v15;
    v16 = v20;
    v30 = &v16;
    v17 = *((_DWORD *)a1 + 160);
    v32 = &v17;
    v12 = *((_BYTE *)a1 + 648);
    v34 = (int *)&v12;
    v36 = (char *)a1 + 800;
    v18 = v2;
    *(_QWORD *)&v26.Size = 4LL;
    *(_QWORD *)&v27.Size = 8LL;
    v29 = 4LL;
    v31 = 4LL;
    v33 = 4LL;
    v35 = 1LL;
    v37 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098A1C, 0LL, 0LL, 0xAu, &pData);
  }
  for ( i = HampHostGetFirstActivity(a1); ; i = HampHostGetNextActivity(v11) )
  {
    v11 = i;
    if ( !i )
      break;
    v23 = *(_QWORD *)(*((_QWORD *)i + 11) + 16LL);
    v4 = *((_QWORD *)i + 9);
    if ( v4 )
      v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 24LL);
    else
      v5 = -1LL;
    v22 = v5;
    if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
    {
      *(_QWORD *)&pDesc.Size = v6;
      pDesc.Ptr = (ULONGLONG)v11 + 40;
      TlgCreateWsz(&v26, (LPCWSTR)v11 + 126);
      TlgCreateWsz(&v27, (LPCWSTR)v11 + 62);
      v7 = *((_DWORD *)v11 + 28);
      v28 = &v17;
      v12 = *((_BYTE *)v11 + 548);
      v30 = (int *)&v12;
      v13 = *((_BYTE *)v11 + 549);
      v32 = (int *)&v13;
      v16 = *(_DWORD *)(v8 + 32);
      v34 = &v16;
      v9 = *((_BYTE *)v11 + 544) & 1;
      v17 = v7;
      v14 = v9;
      v36 = &v14;
      v38 = &v22;
      v40 = (char *)v11 + 512;
      v42 = &v23;
      v44 = &v15;
      v48 = v8 + 8;
      v29 = 4LL;
      v31 = 1LL;
      v33 = 1LL;
      v35 = 4LL;
      v37 = 1LL;
      v39 = 8LL;
      v41 = 8LL;
      v43 = 8LL;
      v15 = v10;
      v45 = 4LL;
      v46 = v8;
      v47 = 8LL;
      v49 = 8LL;
      TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180099099, 0LL, 0LL, 0x10u, &pData);
    }
  }
  HampHostReleaseLockExclusiveEx(a1);
  RmHamHostActOnProcesses(
    (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64),
    0,
    1,
    (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))HampHostLogProcess,
    0LL);
}
