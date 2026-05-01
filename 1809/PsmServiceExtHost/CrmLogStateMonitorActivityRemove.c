/*
 * XREFs of CrmLogStateMonitorActivityRemove @ 0x180031E88
 * Callers:
 *     CrmStateMonitorListenerRemove @ 0x180031D18 (CrmStateMonitorListenerRemove.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CrmLogStateMonitorActivityRemove(int a1, int a2)
{
  TLG_STATUS result; // eax
  bool v3; // [rsp+30h] [rbp-19h] BYREF
  int v4; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  UUID *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  int *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  bool *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]

  if ( dword_18009B128 > 5u )
  {
    v4 = a1;
    v6 = &Uuid;
    v7 = 16LL;
    v8 = &v4;
    v3 = a2 != 0;
    v9 = 4LL;
    v10 = &v3;
    v11 = 1LL;
    return TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008D304, 0LL, 0LL, 5u, &pData);
  }
  return result;
}
