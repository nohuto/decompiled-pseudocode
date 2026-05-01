/*
 * XREFs of ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18006A3CC
 * Callers:
 *     ?HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18006DF64 (-HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 * Callees:
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800058B4 (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_ST.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x1800109AC (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017F34 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023DD0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002BBCC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18002C430 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002CAF0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
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
  __int64 v12; // r9
  int v13; // r10d
  unsigned int v14[4]; // [rsp+38h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  __int64 v16; // [rsp+68h] [rbp-9h]
  int v17; // [rsp+70h] [rbp-1h]
  int v18; // [rsp+74h] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+88h] [rbp+17h] BYREF
  unsigned int *v21; // [rsp+98h] [rbp+27h]
  int v22; // [rsp+A0h] [rbp+2Fh]
  int v23; // [rsp+A4h] [rbp+33h]

  if ( (int)HampHostQueryIsDebugEnabled((struct _RM_HAM_ACTIVITY_HOST *)a1, v14) >= 0 && v14[0] )
    return 0;
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  v5 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 752) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
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
          if ( a2 >= *(_DWORD *)(v5 + 224) )
          {
            v7 = HampHostQueueTerminateEx((struct _RM_HAM_ACTIVITY_HOST *)a1, 3u, 0x800u, 0LL, 1, 0);
            if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000008uLL) )
            {
              v18 = 0;
              v16 = v10 + 40;
              v17 = 8;
              TlgCreateWsz(&pDesc, (LPCWSTR)(v10 + 124));
              TlgCreateWsz(&v20, (LPCWSTR)(a1 + 24));
              v12 = *(_QWORD *)(a1 - 32);
              v23 = 0;
              v21 = v14;
              *(_QWORD *)v14 = v12;
              v22 = v13;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008B450, 0LL, 0LL, 6u, &pData);
            }
            goto LABEL_7;
          }
        }
        if ( (*(_BYTE *)(v10 + 120) & 4) != 0 )
        {
          v4 = 3;
LABEL_20:
          HampActRequestStop(v10, 3u, 3, 6656, (v11 & 0x800) != 0 ? 8 : 4, 0LL);
          continue;
        }
        if ( (*(_BYTE *)(v10 + 120) & 8) != 0 )
        {
          v4 = 4;
          if ( a2 >= *(_DWORD *)(v5 + 220) )
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
    HampDepGroupRunStateChangeWorker(*(struct _HAM_DEPENDENCY_GROUP **)(a1 + 664));
  return v4;
}
