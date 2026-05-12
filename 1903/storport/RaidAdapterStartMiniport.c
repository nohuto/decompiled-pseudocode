/*
 * XREFs of RaidAdapterStartMiniport @ 0x1C001909C
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C0019D3C (RaidAdapterStartDeviceIrp.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0005B34 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005CC8 (RaidAdapterReleaseInterruptLock.c)
 *     RaCallMiniportFindAdapter @ 0x1C0018D14 (RaCallMiniportFindAdapter.c)
 *     InitializeBusesWithVmLunsBitmap @ 0x1C0019288 (InitializeBusesWithVmLunsBitmap.c)
 *     RaidInitializePerfOptsPassive @ 0x1C0019334 (RaidInitializePerfOptsPassive.c)
 *     RaCallMiniportHwInitialize @ 0x1C0019BF4 (RaCallMiniportHwInitialize.c)
 *     StorEtwEnableAdapter @ 0x1C0019C2C (StorEtwEnableAdapter.c)
 *     RaidAdapterConnectInterrupt @ 0x1C001EE64 (RaidAdapterConnectInterrupt.c)
 *     RaidPreInitializePerfOpts @ 0x1C001FEC8 (RaidPreInitializePerfOpts.c)
 *     _guard_dispatch_icall_nop @ 0x1C00234D0 (_guard_dispatch_icall_nop.c)
 *     RaInitializeMiniport @ 0x1C006BD50 (RaInitializeMiniport.c)
 */

__int64 __fastcall RaidAdapterStartMiniport(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rdi
  __int64 result; // rax
  unsigned int v6; // r8d
  void *v7; // rdx
  __int64 v8; // rdx
  char v9; // cl
  int v10; // edx
  int v11; // eax
  KIRQL v12; // si
  int v13; // edi
  unsigned __int8 (__fastcall *v14)(__int64); // rax
  char v15; // al

  if ( !a2 )
    return 3221225486LL;
  v4 = (__int64 *)(a1 + 296);
  result = RaInitializeMiniport(a1 + 296, a2, a3, a1 + 280);
  if ( (int)result < 0 )
    return result;
  v7 = *(void **)(a1 + 2080);
  *(_BYTE *)(a1 + 4450) = 1;
  result = RaCallMiniportFindAdapter(v4, v7, v6);
  *(_BYTE *)(a1 + 109) |= 0x20u;
  if ( (int)result < 0 )
    return result;
  LOBYTE(v8) = StorEtwLoggingEnabled;
  StorEtwEnableAdapter(a1, v8);
  if ( !*(_DWORD *)(a1 + 744) )
  {
    v15 = *(_BYTE *)(a1 + 448);
    if ( v15 == 2 )
    {
      if ( *(_QWORD *)(a1 + 4368) < 0x100000000uLL )
        *(_QWORD *)(a1 + 4368) = -1LL;
      *(_QWORD *)(a1 + 4384) = 0x100000000LL;
    }
    else
    {
      if ( (unsigned __int8)(v15 - 3) > 1u )
        goto LABEL_5;
      if ( *(_QWORD *)(a1 + 4368) < 0x100000000uLL )
        *(_QWORD *)(a1 + 4368) = -1LL;
      *(_QWORD *)(a1 + 4384) = 0LL;
    }
    *(_QWORD *)(a1 + 4400) = -1LL;
  }
LABEL_5:
  v9 = *(_BYTE *)(a1 + 500);
  v10 = *(_DWORD *)(a1 + 452);
  *(_DWORD *)(a1 + 688) = v10;
  *(_BYTE *)(a1 + 4450) = v9 == 0;
  if ( v9 )
  {
    v12 = 0;
LABEL_13:
    *(_BYTE *)(a1 + 104) |= 0x10u;
    v13 = RaCallMiniportHwInitialize(v4);
    if ( v13 >= 0 )
      *(_BYTE *)(a1 + 104) |= 1u;
    if ( *(_BYTE *)(a1 + 4450) )
      RaidAdapterReleaseInterruptLock(a1, v12);
    if ( v13 >= 0 )
    {
      v14 = *(unsigned __int8 (__fastcall **)(__int64))(a1 + 4408);
      if ( v14 )
      {
        if ( v14(*(_QWORD *)(a1 + 536) + 16LL) )
        {
LABEL_20:
          *(_BYTE *)(a1 + 104) &= ~0x10u;
          RaidInitializePerfOptsPassive(a1);
          return InitializeBusesWithVmLunsBitmap(a1);
        }
        v13 = -1073741823;
      }
      if ( v13 >= 0 )
        goto LABEL_20;
    }
    return (unsigned int)v13;
  }
  v11 = *(_DWORD *)(a1 + 464);
  *(_BYTE *)(a1 + 107) = 0;
  *(_DWORD *)(a1 + 4416) = v11;
  if ( v11 )
  {
    *(_BYTE *)(a1 + 4448) = 1;
    if ( !v10 )
      v11 = 1;
    *(_DWORD *)(a1 + 4416) = v11;
  }
  result = RaidAdapterConnectInterrupt(a1);
  if ( (int)result >= 0 )
  {
    result = RaidPreInitializePerfOpts(a1);
    if ( (int)result >= 0 )
    {
      v12 = RaidAdapterAcquireInterruptLock(a1);
      *(_BYTE *)(a1 + 107) = 1;
      goto LABEL_13;
    }
  }
  return result;
}
