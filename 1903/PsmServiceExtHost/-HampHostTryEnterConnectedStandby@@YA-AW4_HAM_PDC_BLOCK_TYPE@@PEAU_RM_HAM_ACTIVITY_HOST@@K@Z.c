/*
 * XREFs of ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180077F90
 * Callers:
 *     ?HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z @ 0x18007BC84 (-HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z.c)
 * Callees:
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800029F4 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18000D29C (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000E090 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18000E0DC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E230 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C140 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x180037D44 (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

char __fastcall HampHostTryEnterConnectedStandby(__int64 a1, unsigned int a2)
{
  char v4; // si
  unsigned __int64 v5; // r14
  int v6; // edx
  int v7; // r14d
  struct _HAM_ACTIVITY *i; // rax
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  int v13; // r9d
  unsigned int v14[2]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v15; // [rsp+50h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-39h] BYREF
  __int64 v17; // [rsp+78h] [rbp-19h]
  int v18; // [rsp+80h] [rbp-11h]
  int v19; // [rsp+84h] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+98h] [rbp+7h] BYREF
  unsigned int *v22; // [rsp+A8h] [rbp+17h]
  int v23; // [rsp+B0h] [rbp+1Fh]
  int v24; // [rsp+B4h] [rbp+23h]
  __int64 *v25; // [rsp+B8h] [rbp+27h]
  int v26; // [rsp+C0h] [rbp+2Fh]
  int v27; // [rsp+C4h] [rbp+33h]

  if ( (int)HampHostQueryIsDebugEnabled((struct _RM_HAM_ACTIVITY_HOST *)a1, v14) >= 0 && v14[0] )
    return 0;
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  v5 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 776) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                             + 120)
                 + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)a1, v6) )
  {
    v4 = 0;
    for ( i = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1);
          ;
          i = HampHostGetNextActivity((struct _HAM_ACTIVITY *)v10) )
    {
      v10 = (__int64)i;
      if ( !i )
        goto LABEL_6;
      if ( (*((_BYTE *)i + 544) & 0x28) == 0 && (unsigned __int8)(*((_BYTE *)i + 548) - 2) <= 1u )
      {
        v11 = *((_DWORD *)i + 28);
        if ( (v11 & 0x4000) != 0 )
        {
          v4 = 2;
          if ( a2 >= *(_DWORD *)(v5 + 208) )
          {
            v7 = HampHostQueueTerminateEx(a1, 3u, 2048, 0LL, 1, 0);
            if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 0x400000000008uLL) )
            {
              v19 = 0;
              v17 = v10 + 40;
              v18 = 8;
              TlgCreateWsz(&pDesc, (LPCWSTR)(v10 + 124));
              TlgCreateWsz(&v21, (LPCWSTR)(a1 + 24));
              v12 = *(_QWORD *)(a1 - 32);
              v24 = 0;
              v27 = 0;
              v22 = v14;
              v25 = &v15;
              *(_QWORD *)v14 = v12;
              v23 = v13;
              v15 = 0x1000000LL;
              v26 = v13;
              TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098F9E, 0LL, 0LL, 7u, &pData);
            }
            goto LABEL_7;
          }
        }
        if ( (*(_BYTE *)(v10 + 120) & 4) != 0 )
        {
          v4 = 3;
LABEL_20:
          HampActRequestStopEx(v10, 3u, 3, 0, 6912, (v11 & 0x800) != 0 ? 8 : 4, 0LL);
          continue;
        }
        if ( (*(_BYTE *)(v10 + 120) & 8) != 0 )
        {
          v4 = 4;
          if ( a2 >= *(_DWORD *)(v5 + 204) )
            goto LABEL_20;
        }
      }
    }
  }
  v4 = 1;
LABEL_6:
  v7 = 0;
LABEL_7:
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1);
  if ( v7 )
    HampDepGroupRunStateChangeWorker(*(struct _HAM_DEPENDENCY_GROUP **)(a1 + 688));
  return v4;
}
