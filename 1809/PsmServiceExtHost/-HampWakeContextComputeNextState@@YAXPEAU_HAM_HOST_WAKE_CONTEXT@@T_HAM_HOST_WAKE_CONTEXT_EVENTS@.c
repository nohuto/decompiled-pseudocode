/*
 * XREFs of ?HampWakeContextComputeNextState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@T_HAM_HOST_WAKE_CONTEXT_EVENTS@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x180023B30
 * Callers:
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800233D0 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

unsigned __int64 __fastcall HampWakeContextComputeNextState(__int64 a1, char a2, _OWORD *a3)
{
  unsigned __int8 v6; // al
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // [rsp+30h] [rbp-69h] BYREF
  __int64 v12; // [rsp+38h] [rbp-61h] BYREF
  _BYTE JobInformation[24]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v14; // [rsp+58h] [rbp-41h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-19h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+7h]
  __int64 v17; // [rsp+A8h] [rbp+Fh]
  __int64 *v18; // [rsp+B0h] [rbp+17h]
  __int64 v19; // [rsp+B8h] [rbp+1Fh]

  RtlQueryUnbiasedInterruptTime(&v11);
  if ( (a2 & 0x20) != 0 )
  {
    memset_0(a3, 0, 0x28uLL);
    *((_BYTE *)a3 + 32) = 1;
    goto LABEL_9;
  }
  v6 = *(_BYTE *)(a1 + 160);
  *a3 = *(_OWORD *)(a1 + 128);
  a3[1] = *(_OWORD *)(a1 + 144);
  *((_QWORD *)a3 + 4) = *(_QWORD *)(a1 + 160);
  if ( ((unsigned __int8)~(v6 >> 1) & ((a2 & 0x19) == 0)) == 0 )
  {
    NtQueryInformationJobObject(*(HANDLE *)(a1 + 112), (JOBOBJECTINFOCLASS)20, JobInformation, 0x40u, 0LL);
    v7 = v14;
    v12 = v14;
    if ( (a2 & 8) != 0 )
    {
      v8 = 0LL;
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 128);
      if ( v14 && !v8 && (*(_BYTE *)(a1 + 184) & 0x38) == 8 )
      {
        if ( hProvider > 5u )
        {
          v17 = 8LL;
          v16 = a1 + 168;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008BF74, 0LL, 0LL, 3u, &pData);
        }
        goto LABEL_9;
      }
    }
    *(_QWORD *)a3 = v14;
    if ( v7 )
    {
      if ( v8 )
      {
        if ( (a2 & 1) != 0 )
        {
          *((_BYTE *)a3 + 32) |= 2u;
          *((_QWORD *)a3 + 3) = v11 + 10000LL * *(unsigned int *)(*(_QWORD *)(a1 + 56) + 100LL);
        }
        else if ( v11 >= *(_QWORD *)(a1 + 152) )
        {
          if ( (*(_BYTE *)(a1 + 160) & 2) != 0 && hProvider > 4u )
          {
            v17 = 8LL;
            v16 = a1 + 168;
            v18 = &v12;
            v19 = 8LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008BF39, 0LL, 0LL, 4u, &pData);
          }
          *((_BYTE *)a3 + 32) &= ~2u;
        }
        else
        {
          *((_BYTE *)a3 + 32) |= 2u;
        }
      }
      else
      {
        *((_BYTE *)a3 + 32) |= 2u;
        v10 = v11;
        *((_QWORD *)a3 + 3) = v11 + 10000LL * *(unsigned int *)(*(_QWORD *)(a1 + 56) + 100LL);
        if ( (*(_BYTE *)(a1 + 160) & 2) == 0 )
          *((_QWORD *)a3 + 2) = v10 + 10000LL * *(unsigned int *)(*(_QWORD *)(a1 + 56) + 96LL);
      }
    }
    else
    {
      if ( v11 >= *(_QWORD *)(a1 + 144) )
      {
        if ( (*(_BYTE *)(a1 + 160) & 2) != 0 && hProvider > 4u )
        {
          v17 = 8LL;
          v16 = a1 + 168;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008BFA2, 0LL, 0LL, 3u, &pData);
        }
        *((_BYTE *)a3 + 32) &= ~2u;
      }
      else
      {
        *((_BYTE *)a3 + 32) |= 2u;
      }
      *((_QWORD *)a3 + 3) = 0LL;
    }
  }
LABEL_9:
  result = v11;
  *((_QWORD *)a3 + 1) = v11;
  return result;
}
