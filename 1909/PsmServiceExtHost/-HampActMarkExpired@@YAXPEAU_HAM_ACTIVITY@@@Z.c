/*
 * XREFs of ?HampActMarkExpired@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18007ADAC
 * Callers:
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18007A99C (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18007AC10 (-HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall HampActMarkExpired(struct _HAM_ACTIVITY *a1)
{
  int v1; // edx
  const struct _TlgProvider_t *v2; // rcx
  __int64 v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+50h] [rbp-28h]
  int v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+5Ch] [rbp-1Ch]

  *((_DWORD *)a1 + 136) |= 0x20u;
  if ( dword_1800AB2C0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
    {
      v7 = 0;
      v5 = v3 + 40;
      v6 = v1;
      TlgWrite(v2, &unk_180099B5C, 0LL, 0LL, 3u, &pData);
    }
  }
}
