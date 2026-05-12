/*
 * XREFs of StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C00127F8
 * Callers:
 *     RaidUnitSetSystemPowerIrp @ 0x1C001258C (RaidUnitSetSystemPowerIrp.c)
 * Callees:
 *     RaidUnitGetMinimumPowerCyclePeriod @ 0x1C000729C (RaidUnitGetMinimumPowerCyclePeriod.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000754C (RaidUnitCheckAndAcquirePoFx.c)
 *     _TlgWrite @ 0x1C0011BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0011C70 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged(__int64 a1)
{
  int v2; // ecx
  const struct _TlgProvider_t *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  const GUID *v6; // r9
  TraceLoggingHProvider v7; // rcx
  LPCGUID v8; // r8
  char v9; // [rsp+30h] [rbp-D0h] BYREF
  char v10; // [rsp+31h] [rbp-CFh] BYREF
  char v11; // [rsp+32h] [rbp-CEh] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  int MinimumPowerCyclePeriod; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h]
  const GUID *v16; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+70h] [rbp-90h]
  __int64 v19; // [rsp+78h] [rbp-88h]
  __int64 v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h]
  int *v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  char *v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  char *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  char *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  int *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  int *p_MinimumPowerCyclePeriod; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  const GUID **v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    v2 = *(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL);
    if ( (v2 & 0x80u) != 0 && (v2 & 0x100) != 0 )
    {
      v3 = *(const struct _TlgProvider_t **)(a1 + 1744);
      v15 = MEMORY[0xFFFFF78000000014];
      if ( (unsigned int)dword_1C0061058 > 5 )
      {
        if ( TlgKeywordOn(v3, 0x400000000000uLL) )
        {
          v12 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
          v9 = *(_BYTE *)(a1 + 96);
          v10 = *(_BYTE *)(a1 + 97);
          v11 = *(_BYTE *)(a1 + 98);
          v13 = *(_DWORD *)(v4 + 28);
          MinimumPowerCyclePeriod = RaidUnitGetMinimumPowerCyclePeriod(a1);
          v18 = v5 + 5256;
          v20 = a1 + 1976;
          v22 = &v12;
          v24 = &v9;
          v26 = &v10;
          v28 = &v11;
          v30 = &v13;
          p_MinimumPowerCyclePeriod = &MinimumPowerCyclePeriod;
          v34 = &v16;
          v16 = v6;
          v19 = 16LL;
          v21 = 16LL;
          v23 = 4LL;
          v25 = 1LL;
          v27 = 1LL;
          v29 = 1LL;
          v31 = 4LL;
          v33 = 4LL;
          v35 = 8LL;
          TlgWrite(v7, &unk_1C0058163, v8, v6, 0xBu, &pData);
        }
      }
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  }
}
