/*
 * XREFs of RaidUnitMaintenanceTime @ 0x1C003FD44
 * Callers:
 *     RaidUnitEndMaintenanceTime @ 0x1C003FBC0 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C003FCB0 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitPowerSettingCallback @ 0x1C003FEC0 (RaidUnitPowerSettingCallback.c)
 * Callees:
 *     RaidUnitPoFxActivateComponent @ 0x1C0009408 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000950C (RaidUnitCheckAndAcquirePoFx.c)
 *     McTemplateK0quuu @ 0x1C003ECB0 (McTemplateK0quuu.c)
 */

void __fastcall RaidUnitMaintenanceTime(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    v4 = *(_QWORD *)(a1 + 1488);
    v5 = *(_DWORD *)(v4 + 32);
    if ( (v5 & 0x80u) != 0
      && (v5 & 0x200) != 0
      && (v5 & 0x400) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)(v4 + 140), 0) )
    {
      v6 = *(_QWORD *)(a1 + 1488);
      if ( (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v6 + 128)) > 864000000000LL
        && (*(_QWORD *)(v6 + 120)
         || (*(_QWORD *)(*(_QWORD *)(a1 + 1488) + 120LL) = ExAllocateTimer(RaidUnitEndMaintenanceTime, a1, 0LL, v3),
             v6 = *(_QWORD *)(a1 + 1488),
             *(_QWORD *)(v6 + 120))) )
      {
        if ( (byte_1C0061741 & 1) != 0 )
          McTemplateK0quuu(
            *(struct _MCGEN_TRACE_CONTEXT **)(a1 + 24),
            &EventUnitMaintenanceTimeStart,
            v2,
            *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
            *(_BYTE *)(a1 + 96),
            *(_BYTE *)(a1 + 97),
            *(_BYTE *)(a1 + 98));
        RaidUnitPoFxActivateComponent(a1, 0, 2LL, 0LL);
        *(_DWORD *)(*(_QWORD *)(a1 + 1488) + 136LL) = 0;
        ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 1488) + 120LL), -600000000LL, 0LL, 0LL);
      }
      else
      {
        *(_DWORD *)(v6 + 140) &= ~1u;
      }
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
  }
}
