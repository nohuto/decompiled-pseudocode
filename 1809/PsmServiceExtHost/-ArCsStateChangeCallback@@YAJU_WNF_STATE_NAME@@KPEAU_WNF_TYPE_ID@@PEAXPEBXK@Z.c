/*
 * XREFs of ?ArCsStateChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18006F530
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?ArOnCsExit@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006FA58 (-ArOnCsExit@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
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

  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008C3D0, 0LL, 0LL, 2u, &pData);
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
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v6 = *a5;
    v12 = 0;
    v8 = v6;
    v10 = &v8;
    v11 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008C2D5, 0LL, 0LL, 3u, &pData);
  }
  return 0LL;
}
