/*
 * XREFs of StorpTelemetrySendAdaptiveIdleCounters @ 0x1C000E5DC
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C000C660 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     RaidUnitGetMinimumPowerCyclePeriod @ 0x1C0006A08 (RaidUnitGetMinimumPowerCyclePeriod.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000950C (RaidUnitCheckAndAcquirePoFx.c)
 *     _TlgWrite @ 0x1C000E500 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E5A8 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
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
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h]
  __int64 v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  int *v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  char *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  char *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  char *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  unsigned int *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  int *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  int *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  int *v38; // [rsp+110h] [rbp+10h]
  __int64 v39; // [rsp+118h] [rbp+18h]
  int *v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  __int64 *v42; // [rsp+130h] [rbp+30h]
  __int64 v43; // [rsp+138h] [rbp+38h]
  __int64 *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1488) + 32LL) & 0x80u) != 0 )
    {
      RaidUnitGetMinimumPowerCyclePeriod(a1);
      v2 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 2712);
      if ( v2 > 0 )
        v2 = (unsigned __int64)((unsigned __int128)(v2 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63;
      if ( (unsigned int)dword_1C0061058 > 5 )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)v2, 0x400000000000uLL) )
        {
          v5 = *(_QWORD *)(a1 + 1488);
          v6 = *(_QWORD *)(a1 + 24);
          v7 = *(_DWORD *)(v6 + 56);
          v8 = *(_BYTE *)(a1 + 96);
          v9 = *(_BYTE *)(a1 + 97);
          v10 = *(_BYTE *)(a1 + 98);
          v11 = v7;
          v12 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 12LL);
          v13 = *(_DWORD *)(v5 + 24);
          v14 = *(_DWORD *)(a1 + 2704);
          v15 = v4;
          v16 = (int)v3;
          v17 = *(_QWORD *)(v5 + 48);
          v18 = *(_QWORD *)(v5 + 40);
          v20 = v6 + 5128;
          v22 = a1 + 1720;
          v24 = &v11;
          v26 = &v8;
          v28 = &v9;
          v30 = &v10;
          v32 = &v12;
          v34 = &v13;
          v36 = &v14;
          v38 = &v15;
          v40 = &v16;
          v42 = &v17;
          v44 = &v18;
          v21 = 16LL;
          v23 = 16LL;
          v25 = 4LL;
          v27 = 1LL;
          v29 = 1LL;
          v31 = 1LL;
          v33 = 4LL;
          v35 = 4LL;
          v37 = 4LL;
          v39 = 4LL;
          v41 = 4LL;
          v43 = 8LL;
          v45 = 8LL;
          TlgWrite((TraceLoggingHProvider)v12, &unk_1C00586AD, (LPCGUID)v6, v3, 0xFu, &pData);
        }
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 1488) + 48LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 1488) + 40LL) = 0LL;
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
  }
}
