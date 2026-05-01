/*
 * XREFs of CrmRegistrationNotifyWindowClosedReasonChange @ 0x18003C5C4
 * Callers:
 *     CrmActivityStart @ 0x180032860 (CrmActivityStart.c)
 *     CrmActivityListenerCallback @ 0x180032CA0 (CrmActivityListenerCallback.c)
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x18003EE0C (CrmSrvActivityWindowClosedReasonSubscribe.c)
 * Callees:
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

BOOLEAN __fastcall CrmRegistrationNotifyWindowClosedReasonChange(__int64 a1, __int64 a2)
{
  int *v2; // rdi
  BOOLEAN result; // al
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  int v10; // r9d
  int v11; // eax
  int v12; // [rsp+30h] [rbp-79h] BYREF
  int v13; // [rsp+34h] [rbp-75h] BYREF
  int v14; // [rsp+38h] [rbp-71h] BYREF
  int v15; // [rsp+3Ch] [rbp-6Dh] BYREF
  int v16; // [rsp+40h] [rbp-69h] BYREF
  __int64 v17; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  UUID *v19; // [rsp+70h] [rbp-39h]
  int v20; // [rsp+78h] [rbp-31h]
  int v21; // [rsp+7Ch] [rbp-2Dh]
  int *v22; // [rsp+80h] [rbp-29h]
  int v23; // [rsp+88h] [rbp-21h]
  int v24; // [rsp+8Ch] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-19h] BYREF
  int *v26; // [rsp+A0h] [rbp-9h]
  int v27; // [rsp+A8h] [rbp-1h]
  int v28; // [rsp+ACh] [rbp+3h]
  __int64 *v29; // [rsp+B0h] [rbp+7h]
  int v30; // [rsp+B8h] [rbp+Fh]
  int v31; // [rsp+BCh] [rbp+13h]
  int *v32; // [rsp+C0h] [rbp+17h]
  int v33; // [rsp+C8h] [rbp+1Fh]
  int v34; // [rsp+CCh] [rbp+23h]
  int *v35; // [rsp+D0h] [rbp+27h]
  int v36; // [rsp+D8h] [rbp+2Fh]
  int v37; // [rsp+DCh] [rbp+33h]

  v2 = 0LL;
  if ( *(_DWORD *)(a2 + 56) == 17 )
  {
    v6 = 255;
    v12 = 255;
    if ( !*(_DWORD *)(a2 + 96) )
    {
LABEL_19:
      result = RtlPublishWnfStateData(*(_QWORD *)(a2 + 128), 0LL, &v12, 4LL, 0LL);
      v2 = &v12;
      goto LABEL_3;
    }
    v7 = *(_QWORD *)(a2 + 104);
    v8 = *(unsigned int *)(a2 + 96);
    v9 = (_DWORD *)(v7 + 32);
    while ( 1 )
    {
      if ( v9[4] )
      {
        switch ( *v9 )
        {
          case 7:
            v6 &= ~1u;
            break;
          case 9:
            v6 &= ~2u;
            break;
          case 0x10:
            v6 &= ~4u;
            break;
          case 0x13:
            v6 &= ~8u;
            break;
          case 0x14:
            v6 &= ~0x10u;
            break;
          case 0x15:
            v6 &= ~0x20u;
            break;
          case 0x16:
            v6 &= ~0x40u;
            break;
          case 0x1A:
            v6 &= ~0x80u;
            break;
          default:
            goto LABEL_18;
        }
        v12 = v6;
      }
LABEL_18:
      v9 += 14;
      if ( !--v8 )
        goto LABEL_19;
    }
  }
  result = RtlPublishWnfStateData(*(_QWORD *)(a2 + 128), 0LL, 0LL, 0LL, 0LL);
LABEL_3:
  if ( dword_1800AB2F8 > 5u )
  {
    result = TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 2uLL);
    if ( result )
    {
      v13 = *(_DWORD *)(a1 + 24);
      v14 = *(_DWORD *)(a2 + 56);
      v17 = *(_QWORD *)(a2 + 48);
      if ( v2 )
        v11 = *v2;
      else
        v11 = 0;
      v21 = 0;
      v24 = 0;
      v15 = v11;
      v19 = &Uuid;
      v22 = &v13;
      v16 = v10;
      v20 = 16;
      v23 = 4;
      TlgCreateSid(&pDesc, (const SID *)(a1 + 72));
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v29 = &v17;
      v32 = &v15;
      v35 = &v16;
      v26 = &v14;
      v27 = 4;
      v30 = 8;
      v33 = 4;
      v36 = 4;
      return TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009AE7D, 0LL, 0LL, 9u, &pData);
    }
  }
  return result;
}
