/*
 * XREFs of SystemStateTrackerStart @ 0x180040F20
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180041050 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?SstpPublish@@YAXPEBU_SYSTEM_STATE_TRACKER@@@Z @ 0x180040FD8 (-SstpPublish@@YAXPEBU_SYSTEM_STATE_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 SystemStateTrackerStart()
{
  struct _SYSTEM_STATE_TRACKER *v0; // rbx
  unsigned int v1; // eax
  unsigned int v2; // edi
  unsigned int v3; // edi
  int WnfStateData; // r9d
  __int64 v6; // rdx
  unsigned int v7; // [rsp+40h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-40h] BYREF
  unsigned int *v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+70h] [rbp-18h]
  int v11; // [rsp+74h] [rbp-14h]

  v0 = GlobalSystemStateTracker;
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_18008DB87, 0LL, 0LL, 2u, &pData);
  v1 = *((_DWORD *)v0 + 54);
  v2 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v6 = 32LL * v2;
      if ( (*((_BYTE *)v0 + v6 + 40) & 1) != 0 )
      {
        WnfStateData = RtlQueryWnfStateData(
                         (char *)v0 + v6 + 44,
                         *(_QWORD *)((char *)v0 + v6 + 24),
                         SstpStateChangeTriage,
                         v0,
                         0LL);
        if ( WnfStateData < 0 )
          break;
      }
      v1 = *((_DWORD *)v0 + 54);
      if ( ++v2 >= v1 )
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    v3 = 0;
    if ( v1 )
    {
      while ( 1 )
      {
        WnfStateData = RtlSubscribeWnfStateChangeNotification(
                         (char *)v0 + 32 * v3 + 48,
                         *((_QWORD *)v0 + 4 * v3 + 3),
                         *((unsigned int *)v0 + 8 * v3 + 11),
                         SstpOnStateChanged,
                         v0,
                         0LL,
                         0,
                         0);
        if ( WnfStateData < 0 )
          break;
        if ( ++v3 >= *((_DWORD *)v0 + 54) )
          goto LABEL_4;
      }
    }
    else
    {
LABEL_4:
      RtlAcquireSRWLockExclusive(v0);
      *((_DWORD *)v0 + 2) = GetCurrentThreadId();
      *((_DWORD *)v0 + 5) |= 1u;
      *((_DWORD *)v0 + 4) = 1;
      SstpPublish(v0);
      *((_DWORD *)v0 + 2) = 0;
      RtlReleaseSRWLockExclusive(v0);
      WnfStateData = 0;
    }
  }
  v7 = WnfStateData;
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 9uLL) )
  {
    v11 = 0;
    v9 = &v7;
    v10 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_18008DBAE, 0LL, 0LL, 3u, &pData);
    return v7;
  }
  return (unsigned int)WnfStateData;
}
