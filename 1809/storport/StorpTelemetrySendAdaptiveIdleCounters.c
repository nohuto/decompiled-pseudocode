/*
 * XREFs of StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0001F1C
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C0002BC0 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     RaidUnitGetMinimumPowerCyclePeriod @ 0x1C000729C (RaidUnitGetMinimumPowerCyclePeriod.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000754C (RaidUnitCheckAndAcquirePoFx.c)
 *     _TlgWrite @ 0x1C0011BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0011C70 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetrySendAdaptiveIdleCounters(__int64 a1)
{
  signed __int64 v2; // rcx
  const GUID *v3; // r9
  int v4; // r10d
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // ecx
  char v8; // [rsp+30h] [rbp-D0h] BYREF
  char v9; // [rsp+31h] [rbp-CFh] BYREF
  char v10; // [rsp+32h] [rbp-CEh] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h]
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  __int64 v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  int *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  char *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  char *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  char *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  unsigned int *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  int *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  int *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  int *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  int *v41; // [rsp+130h] [rbp+30h]
  __int64 v42; // [rsp+138h] [rbp+38h]
  __int64 *v43; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+148h] [rbp+48h]
  __int64 *v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]

  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx() )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) & 0x80u) != 0 )
    {
      RaidUnitGetMinimumPowerCyclePeriod(a1);
      v17 = MEMORY[0xFFFFF78000000014];
      v2 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 3184);
      if ( v2 > 0 )
        v2 = (unsigned __int64)((unsigned __int128)(v2 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63;
      if ( (unsigned int)dword_1C0061058 > 5 )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)v2, 0x400000000000uLL) )
        {
          v5 = *(_QWORD *)(a1 + 1744);
          v6 = *(_QWORD *)(a1 + 24);
          v7 = *(_DWORD *)(v6 + 56);
          v8 = *(_BYTE *)(a1 + 96);
          v9 = *(_BYTE *)(a1 + 97);
          v10 = *(_BYTE *)(a1 + 98);
          v11 = v7;
          v12 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 12LL);
          v13 = *(_DWORD *)(v5 + 24);
          v14 = *(_DWORD *)(a1 + 3176);
          v15 = v4;
          v16 = (int)v3;
          v18 = *(_QWORD *)(v5 + 48);
          v19 = *(_QWORD *)(v5 + 40);
          v21 = v6 + 5256;
          v23 = a1 + 1976;
          v25 = &v11;
          v27 = &v8;
          v29 = &v9;
          v31 = &v10;
          v33 = &v12;
          v35 = &v13;
          v37 = &v14;
          v39 = &v15;
          v41 = &v16;
          v43 = &v18;
          v45 = &v19;
          v22 = 16LL;
          v24 = 16LL;
          v26 = 4LL;
          v28 = 1LL;
          v30 = 1LL;
          v32 = 1LL;
          v34 = 4LL;
          v36 = 4LL;
          v38 = 4LL;
          v40 = 4LL;
          v42 = 4LL;
          v44 = 8LL;
          v46 = 8LL;
          TlgWrite((TraceLoggingHProvider)v12, &unk_1C00596EC, (LPCGUID)v6, v3, 0xFu, &pData);
        }
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 1744) + 48LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 1744) + 40LL) = 0LL;
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  }
}
