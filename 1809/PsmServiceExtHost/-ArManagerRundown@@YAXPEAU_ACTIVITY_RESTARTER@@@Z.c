/*
 * XREFs of ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006F8DC
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180041050 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     CemRcTableGetNext @ 0x18000858C (CemRcTableGetNext.c)
 *     CemRcTableGetFirst @ 0x18000BA38 (CemRcTableGetFirst.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?ArActClearChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x18006FC8C (-ArActClearChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18006FCE4 (-ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArActWaitNoChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x18006FE90 (-ArActWaitNoChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 *     CemRcTableWaitForEmpty @ 0x180070F64 (CemRcTableWaitForEmpty.c)
 */

void __fastcall ArManagerRundown(struct _ACTIVITY_RESTARTER *a1)
{
  struct _AR_ACTIVITY *i; // rax
  struct _AR_ACTIVITY *v3; // rbx
  int v4; // [rsp+38h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  int *v6; // [rsp+68h] [rbp+27h]
  int v7; // [rsp+70h] [rbp+2Fh]
  int v8; // [rsp+74h] [rbp+33h]
  _QWORD *v9; // [rsp+78h] [rbp+37h]
  int v10; // [rsp+80h] [rbp+3Fh]
  int v11; // [rsp+84h] [rbp+43h]

  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008C305, 0LL, 0LL, 2u, &pData);
  v4 = RtlUnsubscribeWnfNotificationWaitForCompletion(*((_QWORD *)a1 + 10));
  for ( i = (struct _AR_ACTIVITY *)CemRcTableGetFirst((__int64)a1); ; i = (struct _AR_ACTIVITY *)CemRcTableGetNext(v3) )
  {
    v3 = i;
    if ( !i )
      break;
    ArActWaitNoChangeInProgress(i);
    v4 = ArActClose(v3);
    ArActClearChangeInProgress(v3);
    if ( v4 < 0 && hProvider > 4u )
    {
      v8 = 0;
      v11 = 0;
      v6 = &v4;
      v9 = (_QWORD *)((char *)v3 + 40);
      v7 = 4;
      v10 = 8;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008C398, 0LL, 0LL, 4u, &pData);
    }
  }
  CemRcTableWaitForEmpty(a1);
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008C377, 0LL, 0LL, 2u, &pData);
  }
}
