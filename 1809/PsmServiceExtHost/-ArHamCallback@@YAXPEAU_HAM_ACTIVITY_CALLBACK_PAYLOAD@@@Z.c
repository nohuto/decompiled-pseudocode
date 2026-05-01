/*
 * XREFs of ?ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x18006F650
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?ArActClearChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x18006FC8C (-ArActClearChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18006FCE4 (-ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArActRestart@@YAJPEAU_AR_ACTIVITY@@W4_AR_STATE_CHANGE_EVENT@@@Z @ 0x18006FE28 (-ArActRestart@@YAJPEAU_AR_ACTIVITY@@W4_AR_STATE_CHANGE_EVENT@@@Z.c)
 *     ?ArActWaitNoChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x18006FE90 (-ArActWaitNoChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 */

void __fastcall ArHamCallback(struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *a1)
{
  __int64 v2; // rsi
  int v3; // ecx
  char v4; // r12
  unsigned __int64 v5; // rbx
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  unsigned __int64 v9; // rdi
  char v10; // bl
  int v11; // edx
  char v12; // [rsp+30h] [rbp-59h] BYREF
  char v13; // [rsp+31h] [rbp-58h] BYREF
  int v14; // [rsp+34h] [rbp-55h] BYREF
  int v15; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  int *v17; // [rsp+60h] [rbp-29h]
  int v18; // [rsp+68h] [rbp-21h]
  int v19; // [rsp+6Ch] [rbp-1Dh]
  struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *v20; // [rsp+70h] [rbp-19h]
  int v21; // [rsp+78h] [rbp-11h]
  int v22; // [rsp+7Ch] [rbp-Dh]
  char *v23; // [rsp+80h] [rbp-9h]
  int v24; // [rsp+88h] [rbp-1h]
  int v25; // [rsp+8Ch] [rbp+3h]
  char *v26; // [rsp+90h] [rbp+7h]
  int v27; // [rsp+98h] [rbp+Fh]
  int v28; // [rsp+9Ch] [rbp+13h]
  int *v29; // [rsp+A0h] [rbp+17h]
  int v30; // [rsp+A8h] [rbp+1Fh]
  int v31; // [rsp+ACh] [rbp+23h]

  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008C326, 0LL, 0LL, 2u, &pData);
  v2 = *((_QWORD *)a1 + 1);
  v3 = *((_DWORD *)a1 + 4);
  v4 = *(_BYTE *)(v2 + 52);
  v5 = *(_QWORD *)(v2 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !v3 )
    goto LABEL_15;
  v6 = v3 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
    {
      ArActWaitNoChangeInProgress(*((struct _AR_ACTIVITY **)a1 + 1));
      v14 = ArActClose((struct _AR_ACTIVITY *)v2);
      ArActClearChangeInProgress((struct _AR_ACTIVITY *)v2);
      goto LABEL_16;
    }
    if ( v7 != 1 )
    {
      v14 = -1073741811;
      goto LABEL_16;
    }
LABEL_15:
    v14 = 0;
    goto LABEL_16;
  }
  ArActWaitNoChangeInProgress(*((struct _AR_ACTIVITY **)a1 + 1));
  v8 = HamStopActivity(*(_QWORD *)((*(_QWORD *)(v2 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 72), *(_QWORD *)(v2 + 40));
  if ( v8 >= 0 )
  {
    *(_BYTE *)(v2 + 52) = 0;
    v8 = 0;
  }
  v14 = v8;
  ArActClearChangeInProgress((struct _AR_ACTIVITY *)v2);
  if ( v14 >= 0 )
  {
    v9 = v5 + 48;
    RtlAcquireSRWLockShared(v5 + 48);
    v10 = *(_BYTE *)(v5 + 64);
    RtlReleaseSRWLockShared(v9);
    if ( (v10 & 1) == 0 )
    {
      ArActWaitNoChangeInProgress((struct _AR_ACTIVITY *)v2);
      v14 = ArActRestart(v2);
      ArActClearChangeInProgress((struct _AR_ACTIVITY *)v2);
      if ( hProvider <= 4u )
        goto LABEL_19;
      v19 = 0;
      v22 = 0;
      v17 = &v14;
      v18 = 4;
      v20 = (struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *)(v2 + 40);
      v21 = 8;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008C344, 0LL, 0LL, 4u, &pData);
    }
  }
LABEL_16:
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v17 = &v14;
    v12 = *(_BYTE *)(v2 + 52);
    v23 = &v12;
    v26 = &v13;
    v15 = *((_DWORD *)a1 + 4);
    v29 = &v15;
    v18 = 4;
    v20 = a1;
    v21 = v11;
    v24 = 1;
    v13 = v4;
    v27 = 1;
    v30 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008C283, 0LL, 0LL, 7u, &pData);
  }
LABEL_19:
  if ( *((_DWORD *)a1 + 4) == 3 )
    CemRcObjectDereference((_QWORD *)v2);
}
