/*
 * XREFs of CrmLogStateMonitorListenerAdd @ 0x180033628
 * Callers:
 *     CrmStateMonitorListenerAdd @ 0x1800335A0 (CrmStateMonitorListenerAdd.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CrmLogStateMonitorListenerAdd(int *a1)
{
  int v1; // eax
  TLG_STATUS result; // eax
  int v3; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  UUID *v5; // [rsp+60h] [rbp-38h]
  int v6; // [rsp+68h] [rbp-30h]
  int v7; // [rsp+6Ch] [rbp-2Ch]
  int *v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]

  if ( dword_18009B128 > 5u )
  {
    v1 = *a1;
    v7 = 0;
    v10 = 0;
    v3 = v1;
    v5 = &Uuid;
    v8 = &v3;
    v6 = 16;
    v9 = 4;
    return TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008D619, 0LL, 0LL, 4u, &pData);
  }
  return result;
}
