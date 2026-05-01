/*
 * XREFs of ?RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006FABC
 * Callers:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002A920 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall RmHamEnforcementEmptySignalAbort(HANDLE *a1)
{
  __int64 v2; // rax
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  NtSetEvent(a1[155], 0LL);
  if ( dword_1800AB2C0 > 4u )
  {
    v2 = (__int64)*(a1 - 4);
    v7 = 0;
    v3 = v2;
    v5 = &v3;
    v6 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180095719, 0LL, 0LL, 3u, &pData);
  }
}
