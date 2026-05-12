/*
 * XREFs of RaidUnitAdaptiveIdleTimeout @ 0x1C000717C
 * Callers:
 *     StorPortUnitIdleCondition @ 0x1C0007450 (StorPortUnitIdleCondition.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C0043010 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitPowerCycleCheck @ 0x1C0043200 (RaidUnitPowerCycleCheck.c)
 *     RaidUnitPowerSettingCallback @ 0x1C0043220 (RaidUnitPowerSettingCallback.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C006E138 (RaUnitRegisterForIdleDetection.c)
 * Callees:
 *     RaidUnitPoFxSetDeviceIdleTimeout @ 0x1C0007250 (RaidUnitPoFxSetDeviceIdleTimeout.c)
 *     RaidUnitGetMinimumPowerCyclePeriod @ 0x1C000729C (RaidUnitGetMinimumPowerCyclePeriod.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000754C (RaidUnitCheckAndAcquirePoFx.c)
 *     McTemplateK0quuuqqq @ 0x1C0042298 (McTemplateK0quuuqqq.c)
 */

void __fastcall RaidUnitAdaptiveIdleTimeout(__int64 a1)
{
  unsigned int MinimumPowerCyclePeriod; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rbp
  unsigned int v6; // edi
  int v7; // r8d
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rsi
  unsigned __int64 v11; // r14
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx

  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) & 0x80u) != 0 )
    {
      MinimumPowerCyclePeriod = RaidUnitGetMinimumPowerCyclePeriod(a1);
      v4 = *(_QWORD *)(v3 + 112);
      v5 = MinimumPowerCyclePeriod;
      if ( v4 )
      {
        ExCancelTimer(v4, 0LL);
        v3 = *(_QWORD *)(a1 + 1744);
      }
      v6 = v5;
      if ( (unsigned int)v5 <= *(_DWORD *)(v3 + 20) )
        v6 = *(_DWORD *)(v3 + 20);
      v7 = 0;
      v8 = v6;
      if ( (*(_DWORD *)(v3 + 32) & 0x200) != 0 )
      {
        ++*(_QWORD *)(v3 + 48);
        v9 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 3184);
        if ( v9 > 0 )
        {
          v10 = v9 / 10000;
          v11 = v9 / 10000 / v5;
          if ( StorEtwLoggingEnabled && (byte_1C00617E2 & 0x10) != 0 )
          {
            v12 = *(_DWORD *)(a1 + 3176);
            LOBYTE(v12) = *(_BYTE *)(a1 + 98);
            McTemplateK0quuuqqq(
              v12,
              *(_QWORD *)(a1 + 24),
              0,
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
              *(_BYTE *)(a1 + 96),
              *(_BYTE *)(a1 + 97),
              v12,
              *(_DWORD *)(a1 + 3176),
              v11,
              v5);
          }
          if ( v11 <= *(unsigned int *)(a1 + 3176) )
          {
            ++*(_QWORD *)(*(_QWORD *)(a1 + 1744) + 40LL);
            v13 = *(_QWORD *)(a1 + 1744);
            v14 = 10000 * (v10 - v5 * (*(unsigned int *)(a1 + 3176) + 1LL));
            if ( !*(_QWORD *)(v13 + 112) )
            {
              *(_QWORD *)(*(_QWORD *)(a1 + 1744) + 112LL) = ExAllocateTimer(RaidUnitPowerCycleCheck, a1, 0LL, v8);
              v13 = *(_QWORD *)(a1 + 1744);
            }
            v15 = *(_QWORD *)(v13 + 112);
            LODWORD(v8) = v6;
            v7 = 1;
            if ( v15 )
            {
              ExSetTimer(v15, v14, 0LL, 0LL);
              LODWORD(v8) = v6;
              v7 = 1;
            }
          }
          else
          {
            LODWORD(v8) = 100;
            v7 = 0;
          }
        }
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) = (v7 << 8) | *(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) & 0xFFFFFEFF;
      RaidUnitPoFxSetDeviceIdleTimeout(a1, (unsigned int)v8);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  }
}
