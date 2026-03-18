/*
 * XREFs of KeSetIntervalProfile @ 0x1406F8190
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1406E7358 (EtwpEnableKernelTrace.c)
 *     NtSetIntervalProfile @ 0x1406F8140 (NtSetIntervalProfile.c)
 *     EtwpCoverageSamplerStart @ 0x140906018 (EtwpCoverageSamplerStart.c)
 *     KiInitializeCacheErrataSupport @ 0x140A3C5E8 (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x1400F820C (KeGenericProcessorCallback.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiSanitizeProfileInterval @ 0x1402B1988 (KiSanitizeProfileInterval.c)
 *     KeQueryIntervalProfile @ 0x1406F80B4 (KeQueryIntervalProfile.c)
 */

void __fastcall KeSetIntervalProfile(int a1, int a2)
{
  int IntervalProfile; // esi
  int v4; // edi
  int v5; // eax
  int v6; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v8[4]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD *v9; // [rsp+50h] [rbp-20h] BYREF
  int v10; // [rsp+58h] [rbp-18h]
  int v11; // [rsp+5Ch] [rbp-14h]

  IntervalProfile = 0;
  v6 = a1;
  v7 = 0LL;
  v4 = a1;
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x402) != 0 )
    IntervalProfile = KeQueryIntervalProfile(a2);
  if ( !a2 )
  {
    if ( (KiCacheErrataMonitor & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
    {
LABEL_5:
      v7 = __PAIR64__(v4, a2);
      KeGenericProcessorCallback(
        KeActiveProcessors,
        (void (__fastcall *)(struct _KPRCB *, __int64))KiSetIntervalWorker,
        (__int64)&v7,
        1);
      goto LABEL_6;
    }
    KiSanitizeProfileInterval(&v6);
    v4 = v6;
  }
  if ( a2 != 1 )
    goto LABEL_5;
  KiProfileAlignmentFixupInterval = v4;
LABEL_6:
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x402) != 0 )
  {
    v5 = KeQueryIntervalProfile(a2);
    if ( v5 != IntervalProfile )
    {
      v11 = 0;
      v8[1] = v5;
      v8[0] = a2;
      v9 = v8;
      v8[2] = IntervalProfile;
      v10 = 12;
      EtwTraceKernelEvent((__int64)&v9, 1u, 0x20000402u, 0xF48u, 0x401902u);
    }
  }
}
