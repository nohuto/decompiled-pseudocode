/*
 * XREFs of PopTriggerMonitorPowerEvent @ 0x1408B28D4
 * Callers:
 *     PdcPoReportLidState @ 0x1408AB1C0 (PdcPoReportLidState.c)
 *     PopProcessSessionDisplayStateChange @ 0x1408AB8DC (PopProcessSessionDisplayStateChange.c)
 *     PopDisplayBurstSuppressWorker @ 0x1408B10E0 (PopDisplayBurstSuppressWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PopDiagTracePowerStateEvent @ 0x1408B0250 (PopDiagTracePowerStateEvent.c)
 *     PopPowerAggregatorHandleIntent @ 0x1408B24CC (PopPowerAggregatorHandleIntent.c)
 */

__int64 __fastcall PopTriggerMonitorPowerEvent(char a1, int a2)
{
  int v3; // edi
  __int64 v4; // rax
  _DWORD *i; // rcx
  int v6; // esi
  __int64 v7; // rax
  _DWORD *j; // rcx
  char *v9; // rbx
  __int64 (__fastcall *v10)(__int64, int *); // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // edx
  int v17; // [rsp+40h] [rbp+18h] BYREF

  if ( PopPlatformAoAc )
  {
    v4 = 0LL;
    for ( i = &PopMonitorEventMapping; *i != a2; i += 2 )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= 0x2E )
        return (unsigned int)-1073741811;
    }
    v6 = *((_DWORD *)&PopMonitorEventMapping + 2 * v4 + 1);
    if ( !v6 )
      return (unsigned int)-1073741811;
    v7 = 0LL;
    for ( j = &PopPowerEventTable; *j != v6; j += 12 )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= 0x2C )
        return (unsigned int)-1073741823;
    }
    v9 = (char *)&PopPowerEventTable + 48 * v7;
    if ( !v9 )
      return (unsigned int)-1073741823;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerEventLock);
    v10 = (__int64 (__fastcall *)(__int64, int *))*((_QWORD *)v9 + 3);
    v17 = 0;
    LOBYTE(v11) = a1;
    v3 = v10(v11, &v17);
    v12 = MEMORY[0xFFFFF78000000008];
    v13 = (unsigned int)PopPowerEventTraceCount;
    ++*((_QWORD *)v9 + 4);
    *((_QWORD *)v9 + 5) = v12;
    v14 = 3 * v13;
    *((_DWORD *)&PopPowerEventTrace + 2 * v14) = v6;
    PopPowerEventTraceCount = ((_BYTE)v13 + 1) & 0x1F;
    v15 = v17;
    *((_DWORD *)&PopPowerEventTrace + 2 * v14 + 2) = v17;
    *((_DWORD *)&PopPowerEventTrace + 2 * v14 + 1) = v3;
    *((_QWORD *)&PopPowerEventTrace + v14 + 2) = v12;
    if ( v3 >= 0 )
    {
      PopDiagTracePowerStateEvent(v6, v15);
      if ( v17 )
        v3 = PopPowerAggregatorHandleIntent(v17, *((_DWORD *)v9 + 4), *(_DWORD *)v9);
    }
    PopReleaseRwLock((ULONG_PTR)&PopPowerEventLock);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v3;
}
