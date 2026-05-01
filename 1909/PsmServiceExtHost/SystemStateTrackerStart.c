/*
 * XREFs of SystemStateTrackerStart @ 0x1800419B4
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180041E70 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?SstpStart@@YAJPEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x180041A18 (-SstpStart@@YAJPEAU_SYSTEM_STATE_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 SystemStateTrackerStart()
{
  struct _SYSTEM_STATE_TRACKER *v0; // rbx
  unsigned int v1; // r9d
  unsigned int v3; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  unsigned int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  v0 = GlobalSystemStateTracker;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18009B498, 0LL, 0LL, 2u, &pData);
  v1 = SstpStart(v0);
  v3 = v1;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v7 = 0;
    v5 = &v3;
    v6 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18009B4BF, 0LL, 0LL, 3u, &pData);
    return v3;
  }
  return v1;
}
