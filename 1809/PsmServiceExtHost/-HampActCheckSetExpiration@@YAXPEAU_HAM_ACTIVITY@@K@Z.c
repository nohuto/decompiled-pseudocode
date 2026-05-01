/*
 * XREFs of ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180005A94
 * Callers:
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800058B4 (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_ST.c)
 * Callees:
 *     ?HampActMarkExpired@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180005B74 (-HampActMarkExpired@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027F30 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18002BEC8 (-HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002E708 (-HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall HampActCheckSetExpiration(struct _HAM_ACTIVITY *a1, unsigned int a2)
{
  unsigned int v2; // r9d
  unsigned __int64 v4; // r8
  unsigned int v5; // edi
  __int64 v6; // rcx
  unsigned int v7; // edx
  struct _RM_HAM_ACTIVITY_HOST *v8; // rsi
  __int64 v9; // r15
  unsigned __int64 v10; // r14
  int v11; // eax
  unsigned __int64 v12; // rax
  int v13; // edx
  UINT32 cData; // r9d
  __int64 v15; // rcx
  int v16; // edx
  UINT32 v17; // r9d
  int v18; // [rsp+30h] [rbp-79h] BYREF
  _DWORD v19[3]; // [rsp+34h] [rbp-75h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-69h] BYREF
  __int64 v21; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  int *v23; // [rsp+70h] [rbp-39h]
  UINT32 v24; // [rsp+78h] [rbp-31h]
  int v25; // [rsp+7Ch] [rbp-2Dh]
  char *v26; // [rsp+80h] [rbp-29h]
  int v27; // [rsp+88h] [rbp-21h]
  int v28; // [rsp+8Ch] [rbp-1Dh]
  EVENT_DATA_DESCRIPTOR v29; // [rsp+90h] [rbp-19h] BYREF
  char *v30; // [rsp+B0h] [rbp+7h]
  int v31; // [rsp+B8h] [rbp+Fh]
  int v32; // [rsp+BCh] [rbp+13h]
  _DWORD *v33; // [rsp+C0h] [rbp+17h]
  UINT32 v34; // [rsp+C8h] [rbp+1Fh]
  int v35; // [rsp+CCh] [rbp+23h]

  v2 = a2;
  if ( (*((_BYTE *)a1 + 544) & 0x20) == 0 && (unsigned __int8)(*((_BYTE *)a1 + 548) - 2) <= 1u )
  {
    v4 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
    v5 = -1;
    if ( a2 )
    {
      do
      {
        _BitScanForward((unsigned int *)&v6, v2);
        v7 = v5;
        v19[1] = v6;
        v5 = *(_DWORD *)(v4 + 4 * v6 + 512);
        if ( v7 < v5 )
          v5 = v7;
        v2 &= ~(1 << v6);
      }
      while ( v2 );
      if ( v5 != -1 )
      {
        v8 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
        if ( !v5 )
        {
          HampActCancelExpirationTimer(a1);
LABEL_10:
          HampActMarkExpired(a1);
          HampHostUpdateActivityState(v8);
          HampHostCheckQueueDependencyWorker(v8);
          return;
        }
        v9 = 10000LL * v5;
        RtlQueryUnbiasedInterruptTime(&v20);
        v10 = v20 + v9;
        if ( v20 + v9 < v20 )
        {
          v10 = -1LL;
          v11 = -1073741675;
        }
        else
        {
          v11 = 0;
        }
        v18 = v11;
        v12 = *((_QWORD *)a1 + 67);
        if ( !v12 || v10 < v12 )
        {
          HampActCancelExpirationTimer(a1);
          v18 = TpAllocTimer((char *)a1 + 528, HampActExpirationTimerCallback, a1, 0LL);
          if ( v18 < 0 )
          {
            if ( hProvider > 4u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
              {
                v25 = 0;
                v28 = 0;
                v23 = &v18;
                v26 = (char *)a1 + 40;
                v24 = cData;
                v27 = v13;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008BD94, 0LL, 0LL, cData, &pData);
              }
            }
            *((_QWORD *)a1 + 67) = 0LL;
            goto LABEL_10;
          }
          if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
            __fastfail(0xEu);
          v15 = *((_QWORD *)a1 + 66);
          v21 = -10000LL * v5;
          TpSetTimer(v15, &v21, 0LL, 0LL);
          *((_QWORD *)a1 + 67) = v10;
          if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
          {
            v32 = 0;
            v35 = 0;
            v30 = (char *)a1 + 40;
            v33 = v19;
            v31 = v16;
            v19[0] = v5;
            v34 = v17;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008BC23, 0LL, 0LL, v17, &v29);
          }
        }
      }
    }
  }
}
