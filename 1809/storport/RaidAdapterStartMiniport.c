/*
 * XREFs of RaidAdapterStartMiniport @ 0x1C001F31C
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C001B7F8 (RaidAdapterStartDeviceIrp.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006E60 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0006FF4 (RaidAdapterReleaseInterruptLock.c)
 *     RaCallMiniportFindAdapter @ 0x1C001EF8C (RaCallMiniportFindAdapter.c)
 *     InitializeBusesWithVmLunsBitmap @ 0x1C001F500 (InitializeBusesWithVmLunsBitmap.c)
 *     RaidInitializePerfOptsPassive @ 0x1C001F5AC (RaidInitializePerfOptsPassive.c)
 *     RaCallMiniportHwInitialize @ 0x1C001FE58 (RaCallMiniportHwInitialize.c)
 *     StorEtwEnableAdapter @ 0x1C001FE90 (StorEtwEnableAdapter.c)
 *     RaidPreInitializePerfOpts @ 0x1C00202A0 (RaidPreInitializePerfOpts.c)
 *     RaidAdapterConnectInterrupt @ 0x1C00203D4 (RaidAdapterConnectInterrupt.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 *     RaInitializeMiniport @ 0x1C006E7E4 (RaInitializeMiniport.c)
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
  KIRQL v16; // [rsp+48h] [rbp+10h]

  if ( !a2 )
    return 3221225486LL;
  v4 = (__int64 *)(a1 + 312);
  result = RaInitializeMiniport(a1 + 312, a2, a3, a1 + 296);
  if ( (int)result < 0 )
    return result;
  v7 = *(void **)(a1 + 2144);
  *(_BYTE *)(a1 + 4514) = 1;
  result = RaCallMiniportFindAdapter(v4, v7, v6);
  *(_BYTE *)(a1 + 109) |= 0x20u;
  if ( (int)result < 0 )
    return result;
  LOBYTE(v8) = StorEtwLoggingEnabled;
  StorEtwEnableAdapter(a1, v8);
  if ( !*(_DWORD *)(a1 + 768) )
  {
    v15 = *(_BYTE *)(a1 + 464);
    if ( v15 == 2 )
    {
      if ( *(_QWORD *)(a1 + 4432) < 0x100000000uLL )
        *(_QWORD *)(a1 + 4432) = -1LL;
      *(_QWORD *)(a1 + 4448) = 0x100000000LL;
    }
    else
    {
      if ( (unsigned __int8)(v15 - 3) > 1u )
        goto LABEL_5;
      if ( *(_QWORD *)(a1 + 4432) < 0x100000000uLL )
        *(_QWORD *)(a1 + 4432) = -1LL;
      *(_QWORD *)(a1 + 4448) = 0LL;
    }
    *(_QWORD *)(a1 + 4464) = -1LL;
  }
LABEL_5:
  v9 = *(_BYTE *)(a1 + 516);
  v10 = *(_DWORD *)(a1 + 468);
  *(_DWORD *)(a1 + 712) = v10;
  *(_BYTE *)(a1 + 4514) = v9 == 0;
  if ( v9 )
  {
    v12 = v16;
LABEL_13:
    *(_BYTE *)(a1 + 104) |= 0x10u;
    v13 = RaCallMiniportHwInitialize(v4);
    if ( v13 >= 0 )
      *(_BYTE *)(a1 + 104) |= 1u;
    if ( *(_BYTE *)(a1 + 4514) )
      RaidAdapterReleaseInterruptLock(a1, v12);
    if ( v13 >= 0 )
    {
      v14 = *(unsigned __int8 (__fastcall **)(__int64))(a1 + 4472);
      if ( v14 )
      {
        if ( v14(*(_QWORD *)(a1 + 552) + 16LL) )
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
  v11 = *(_DWORD *)(a1 + 480);
  *(_BYTE *)(a1 + 107) = 0;
  *(_DWORD *)(a1 + 4480) = v11;
  if ( v11 )
  {
    *(_BYTE *)(a1 + 4512) = 1;
    if ( !v10 )
      v11 = 1;
    *(_DWORD *)(a1 + 4480) = v11;
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
