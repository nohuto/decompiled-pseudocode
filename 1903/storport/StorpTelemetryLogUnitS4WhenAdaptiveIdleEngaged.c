/*
 * XREFs of StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C00106A0
 * Callers:
 *     RaidUnitSetSystemPowerIrp @ 0x1C0010424 (RaidUnitSetSystemPowerIrp.c)
 * Callees:
 *     RaidUnitGetMinimumPowerCyclePeriod @ 0x1C0006A08 (RaidUnitGetMinimumPowerCyclePeriod.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000950C (RaidUnitCheckAndAcquirePoFx.c)
 *     _TlgWrite @ 0x1C000E500 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E5A8 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rcx
  __int64 v4; // rdx
  const GUID *v5; // r9
  TraceLoggingHProvider v6; // rcx
  LPCGUID v7; // r8
  char v8; // [rsp+30h] [rbp-D0h] BYREF
  char v9; // [rsp+31h] [rbp-CFh] BYREF
  char v10; // [rsp+32h] [rbp-CEh] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int MinimumPowerCyclePeriod; // [rsp+3Ch] [rbp-C4h] BYREF
  const GUID *v14; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  __int64 v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  int *v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  char *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  char *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  char *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  int *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  int *p_MinimumPowerCyclePeriod; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  const GUID **v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    v2 = *(_DWORD *)(*(_QWORD *)(a1 + 1488) + 32LL);
    if ( (v2 & 0x80u) != 0 && (v2 & 0x100) != 0 && (unsigned int)dword_1C0061058 > 5 )
    {
      if ( TlgKeywordOn(*(TraceLoggingHProvider *)(a1 + 1488), 0x400000000000uLL) )
      {
        v11 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
        v8 = *(_BYTE *)(a1 + 96);
        v9 = *(_BYTE *)(a1 + 97);
        v10 = *(_BYTE *)(a1 + 98);
        v12 = *(_DWORD *)(v3 + 28);
        MinimumPowerCyclePeriod = RaidUnitGetMinimumPowerCyclePeriod(a1);
        v16 = v4 + 5128;
        v18 = a1 + 1720;
        v20 = &v11;
        v22 = &v8;
        v24 = &v9;
        v26 = &v10;
        v28 = &v12;
        p_MinimumPowerCyclePeriod = &MinimumPowerCyclePeriod;
        v32 = &v14;
        v14 = v5;
        v17 = 16LL;
        v19 = 16LL;
        v21 = 4LL;
        v23 = 1LL;
        v25 = 1LL;
        v27 = 1LL;
        v29 = 4LL;
        v31 = 4LL;
        v33 = 8LL;
        TlgWrite(v6, &unk_1C0056F17, v7, v5, 0xBu, &pData);
      }
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
  }
}
