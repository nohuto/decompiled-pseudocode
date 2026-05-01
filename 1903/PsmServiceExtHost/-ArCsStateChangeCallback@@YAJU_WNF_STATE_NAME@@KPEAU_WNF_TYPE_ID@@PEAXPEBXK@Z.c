/*
 * XREFs of ?ArCsStateChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18007D330
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?ArOnCsExit@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18007D858 (-ArOnCsExit@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 */

__int64 __fastcall ArCsStateChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4,
        int *a5)
{
  int v6; // eax
  int v8; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]

  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_18009A296, 0LL, 0LL, 2u, &pData);
  if ( *a5 )
  {
    RtlAcquireSRWLockExclusive(a4 + 12);
    a4[14] = GetCurrentThreadId();
    *((_BYTE *)a4 + 64) |= 1u;
    a4[14] = 0;
    RtlReleaseSRWLockExclusive(a4 + 12);
  }
  else
  {
    ArOnCsExit((struct _ACTIVITY_RESTARTER *)a4);
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v6 = *a5;
    v12 = 0;
    v8 = v6;
    v10 = &v8;
    v11 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_18009A19B, 0LL, 0LL, 3u, &pData);
  }
  return 0LL;
}
