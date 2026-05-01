/*
 * XREFs of CrmLogActivityStart @ 0x18003319C
 * Callers:
 *     CrmActivityStart @ 0x180033278 (CrmActivityStart.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CrmLogActivityStart(__int64 a1, __int64 a2, int a3)
{
  TLG_STATUS result; // eax
  int v4; // [rsp+30h] [rbp-49h] BYREF
  int v5; // [rsp+34h] [rbp-45h] BYREF
  __int64 v6; // [rsp+38h] [rbp-41h] BYREF
  __int64 v7; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  UUID *v9; // [rsp+70h] [rbp-9h]
  __int64 v10; // [rsp+78h] [rbp-1h]
  __int64 *v11; // [rsp+80h] [rbp+7h]
  __int64 v12; // [rsp+88h] [rbp+Fh]
  int *v13; // [rsp+90h] [rbp+17h]
  __int64 v14; // [rsp+98h] [rbp+1Fh]
  __int64 *v15; // [rsp+A0h] [rbp+27h]
  __int64 v16; // [rsp+A8h] [rbp+2Fh]
  int *v17; // [rsp+B0h] [rbp+37h]
  __int64 v18; // [rsp+B8h] [rbp+3Fh]

  if ( dword_18009B128 > 5u )
  {
    v6 = *(_QWORD *)(a1 + 40);
    v4 = *(_DWORD *)(a1 + 52);
    v7 = *(_QWORD *)(a2 + 16);
    v9 = &Uuid;
    v11 = &v6;
    v13 = &v4;
    v15 = &v7;
    v17 = &v5;
    v5 = a3;
    v10 = 16LL;
    v12 = 8LL;
    v14 = 4LL;
    v16 = 8LL;
    v18 = 4LL;
    return TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008CB91, 0LL, 0LL, 7u, &pData);
  }
  return result;
}
