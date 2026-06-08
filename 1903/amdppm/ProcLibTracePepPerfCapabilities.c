/*
 * XREFs of ProcLibTracePepPerfCapabilities @ 0x1C001EBEC
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C001D140 (ProcLibTraceControlCallback.c)
 *     InitPepPerfStates @ 0x1C0032C74 (InitPepPerfStates.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C00028C0 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 */

void __fastcall ProcLibTracePepPerfCapabilities(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // r13
  char *v4; // rdi
  __int64 v5; // rbx
  unsigned int *v6; // r12
  _BYTE *PoolWithTag; // rsi
  unsigned int i; // r9d
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned __int8 *v11; // r15
  unsigned __int8 v12; // al
  __int64 j; // r10
  char *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  struct _PROCESSOR_NUMBER v18; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int8 *p_Number; // [rsp+58h] [rbp-B0h]
  __int64 v21; // [rsp+60h] [rbp-A8h]
  __int64 v22; // [rsp+68h] [rbp-A0h]
  __int64 v23; // [rsp+70h] [rbp-98h]
  _BYTE *v24; // [rsp+78h] [rbp-90h]
  int v25; // [rsp+80h] [rbp-88h]
  int v26; // [rsp+84h] [rbp-84h]
  __int64 v27; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-78h]
  __int64 v29; // [rsp+98h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-68h]
  __int64 v31; // [rsp+A8h] [rbp-60h]
  __int64 v32; // [rsp+B0h] [rbp-58h]
  __int64 v33; // [rsp+B8h] [rbp-50h]
  __int64 v34; // [rsp+C0h] [rbp-48h]
  __int64 v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  __int64 v37; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  __int64 v39; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  char *v41; // [rsp+F8h] [rbp-10h]
  int v42; // [rsp+100h] [rbp-8h]
  int v43; // [rsp+104h] [rbp-4h]

  v18 = 0;
  v3 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PERF_CAPABILITIES;
  if ( a2 )
    v3 = &PPM_ETW_PERF_CAPABILITIES_RUNDOWN;
  v4 = 0LL;
  if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v3) )
  {
    v5 = *(_QWORD *)(a1 + 1176);
    if ( v5 )
    {
      if ( *(_QWORD *)(a1 + 1192) )
      {
        v6 = (unsigned int *)(a1 + 1112);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(10 * *(_DWORD *)(a1 + 1112)), 0x72637250u);
        if ( PoolWithTag )
        {
          for ( i = 0; i < *v6; *(_DWORD *)&PoolWithTag[2 * v10 + 6] = *(unsigned __int8 *)(v5 + 8 * v9 + 60) )
          {
            v9 = i++;
            v10 = 5 * v9;
            *(_DWORD *)&PoolWithTag[2 * v10] = *(_DWORD *)(v5 + 8 * v9 + 56) & 1;
            PoolWithTag[2 * v10 + 4] = (*(_DWORD *)(v5 + 8 * v9 + 56) >> 1) & 3;
            PoolWithTag[2 * v10 + 5] = (*(_DWORD *)(v5 + 8 * v9 + 56) >> 3) & 0xF;
          }
          v11 = (unsigned __int8 *)(v5 + 32);
          v12 = *(_BYTE *)(v5 + 32);
          if ( v12 )
          {
            v4 = (char *)ExAllocatePoolWithTag(PagedPool, 9LL * v12, 0x72637250u);
            if ( !v4 )
            {
LABEL_15:
              ExFreePoolWithTag(PoolWithTag, 0x72637250u);
              if ( v4 )
                ExFreePoolWithTag(v4, 0x72637250u);
              return;
            }
            for ( j = 0LL; (unsigned int)j < *v11; j = (unsigned int)(j + 1) )
            {
              v14 = &v4[8 * j];
              *(_DWORD *)&v14[j] = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 24 * j);
              *(_DWORD *)&v14[j + 4] = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 24 * j + 4);
              v14[j + 8] = *(_BYTE *)(*(_QWORD *)(v5 + 40) + 24 * j + 8);
            }
          }
          if ( (int)ProcLibGetProcessorNumber(a1, &v18) >= 0 )
          {
            *(_QWORD *)&UserData.Size = 2LL;
            UserData.Ptr = (unsigned __int64)&v18;
            v21 = 1LL;
            p_Number = &v18.Number;
            v15 = *v6;
            v22 = a1 + 1112;
            v23 = 4LL;
            v24 = PoolWithTag;
            v26 = 0;
            v27 = v5;
            v25 = 10 * v15;
            v16 = *(_QWORD *)(a1 + 1192);
            v29 = v5 + 4;
            v31 = v5 + 8;
            v33 = v5 + 12;
            v28 = 4LL;
            v35 = v16 + 12;
            v37 = v16 + 20;
            v30 = 4LL;
            v32 = 4LL;
            v34 = 4LL;
            v36 = 4LL;
            v38 = 4LL;
            v39 = v5 + 32;
            v40 = 1LL;
            v17 = *v11;
            v41 = v4;
            v43 = 0;
            v42 = 9 * v17;
            EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v3, 0LL, 0xCu, &UserData);
          }
          goto LABEL_15;
        }
      }
    }
  }
}
