/*
 * XREFs of StorPortUnitIdleState @ 0x1C00407C0
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0016380 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0006860 (RaidIsUnitControlSupported.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000950C (RaidUnitCheckAndAcquirePoFx.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C0016768 (StorUpdateCrashDumpPowerReady.c)
 *     RaidGetStorPoFxComponent @ 0x1C0016898 (RaidGetStorPoFxComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001ED44 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001ED80 (RaidAdapterPoFxActivateComponent.c)
 *     McTemplateK0pquuuqq @ 0x1C003E908 (McTemplateK0pquuuqq.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C0040008 (RaidUnitSendPoFxIdleStateToMiniport.c)
 */

void __fastcall StorPortUnitIdleState(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ebp
  char *StorPoFxComponent; // rax
  __int64 v13; // rcx
  char v14; // al
  KSPIN_LOCK *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  const EVENT_DESCRIPTOR *v18; // rdx
  __int64 v19; // rcx
  char v20; // al
  __int64 v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-48h]
  __int64 v25; // [rsp+38h] [rbp-40h]
  __int64 v26; // [rsp+40h] [rbp-38h]
  __int64 v27; // [rsp+48h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( StorEtwLoggingEnabled && (byte_1C0061741 & 1) != 0 )
      McTemplateK0pquuuqq(
        *(struct _MCGEN_TRACE_CONTEXT **)(a1 + 24),
        &EventUnitIdleStateStart,
        v6,
        **(_QWORD **)(a1 + 1488),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a2,
        a3);
    if ( a3 )
    {
      v8 = *(_QWORD *)(a1 + 1488);
      *(_QWORD *)(a1 + 1752) = MEMORY[0xFFFFF78000000008];
      v9 = *(_DWORD *)(v8 + 32);
      if ( *(char *)(*(_QWORD *)(a1 + 24) + 108LL) >= 0 )
        v10 = v9 & 0xFFFFFFBF;
      else
        v10 = v9 | 0x40;
      *(_DWORD *)(v8 + 32) = v10;
    }
    else
    {
      ++*(_DWORD *)(a1 + 1804);
      if ( *(_QWORD *)(a1 + 1752) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1488) + 32LL) & 0x40) != 0 || *(char *)(*(_QWORD *)(a1 + 24) + 108LL) < 0 )
        {
          v7 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 1752);
          *(_QWORD *)(a1 + 1760) += v7 / 0x2710;
          if ( v7 / 0x2710 >= 0x2710 )
            ++*(_DWORD *)(a1 + 1812);
        }
        *(_QWORD *)(a1 + 1752) = 0LL;
      }
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 1488) + 16LL) = a3;
    if ( *(_DWORD *)(a1 + 688) && a3 )
      StorUpdateCrashDumpPowerReady(*(_QWORD *)(a1 + 24));
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1488) + 32LL) & 4) != 0 && RaidIsUnitControlSupported(a1, 7) )
    {
      v11 = 1;
      StorPoFxComponent = RaidGetStorPoFxComponent(*(int **)(*(_QWORD *)(a1 + 1488) + 8LL), a2);
      if ( StorPoFxComponent && *(_DWORD *)StorPoFxComponent == 2 )
        v11 = *((_DWORD *)StorPoFxComponent + 8);
      if ( a3 <= v11 )
      {
        v13 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(v13 + 5024) )
        {
          v14 = *(_BYTE *)(a1 + 161);
          if ( (v14 & 8) == 0 )
          {
            *(_BYTE *)(a1 + 161) = v14 | 8;
            if ( !(unsigned __int8)RaidAdapterPoFxActivateComponent(v13, 0LL, 0LL) )
            {
              v15 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 24) + 80LL);
              memset(&LockHandle, 0, sizeof(LockHandle));
              KeAcquireInStackQueuedSpinLock(v15, &LockHandle);
              v16 = *(_QWORD *)(a1 + 24);
              if ( *(int *)(v16 + 268) > 1 )
              {
                *(_BYTE *)(a1 + 1656) = 1;
                *(_DWORD *)(a1 + 1660) = a3;
                ExpInterlockedPushEntrySList((PSLIST_HEADER)(v16 + 5008), (PSLIST_ENTRY)(a1 + 1680));
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                if ( !StorEtwLoggingEnabled || (byte_1C0061741 & 1) == 0 )
                  goto LABEL_44;
                v18 = (const EVENT_DESCRIPTOR *)&EventUnitIdleStateQueued;
LABEL_43:
                v21 = *(_QWORD *)(a1 + 24);
                LODWORD(v27) = a3;
                LODWORD(v26) = a2;
                LOBYTE(v25) = *(_BYTE *)(a1 + 98);
                LOBYTE(v24) = *(_BYTE *)(a1 + 97);
                LOBYTE(v23) = *(_BYTE *)(a1 + 96);
                LODWORD(v22) = *(_DWORD *)(v21 + 56);
                McTemplateK0pquuuqq(
                  (struct _MCGEN_TRACE_CONTEXT *)v21,
                  v18,
                  v17,
                  **(_QWORD **)(a1 + 1488),
                  v22,
                  v23,
                  v24,
                  v25,
                  v26,
                  v27);
LABEL_44:
                ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
                return;
              }
              KeReleaseInStackQueuedSpinLock(&LockHandle);
            }
          }
        }
      }
      RaidUnitSendPoFxIdleStateToMiniport(a1);
      if ( a3 > v11 )
      {
        v19 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(v19 + 5024) )
        {
          v20 = *(_BYTE *)(a1 + 161);
          if ( (v20 & 8) != 0 )
          {
            *(_BYTE *)(a1 + 161) = v20 & 0xF7;
            RaidAdapterPoFxIdleComponent(v19, 0LL, 0LL);
          }
        }
      }
    }
    if ( *(_DWORD *)(a1 + 688) && !a3 )
      StorUpdateCrashDumpPowerReady(*(_QWORD *)(a1 + 24));
    PoFxCompleteIdleState(**(_QWORD **)(a1 + 1488), a2);
    if ( !StorEtwLoggingEnabled || (byte_1C0061741 & 1) == 0 )
      goto LABEL_44;
    v18 = (const EVENT_DESCRIPTOR *)&EventUnitIdleStateStop;
    goto LABEL_43;
  }
}
