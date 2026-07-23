/*
 * XREFs of PoFxPrepareDevice @ 0x14015A65C
 * Callers:
 *     PnpStartDevice @ 0x14015A5B0 (PnpStartDevice.c)
 *     PipProcessDevNodeTree @ 0x1406E77FC (PipProcessDevNodeTree.c)
 *     PiProcessAddBootDevices @ 0x14075AAB8 (PiProcessAddBootDevices.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IoAcquireRemoveLockEx @ 0x1400FE390 (IoAcquireRemoveLockEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x1402D76B0 (PopFxBugCheck.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x1406ECE3C (PopFxFindDeviceAndAllocateUniqueId.c)
 *     PopDiagTraceFxDevicePreparation @ 0x1406F022C (PopDiagTraceFxDevicePreparation.c)
 */

LONG __fastcall PoFxPrepareDevice(__int64 a1, char a2)
{
  LONG result; // eax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR *v6; // rdi
  ULONG_PTR *v7; // rsi
  struct _IO_REMOVE_LOCK *v8; // rdi
  unsigned __int8 (__fastcall *v9)(__int64, __int64 *); // rax
  __int64 v10; // r9
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  char v12; // [rsp+38h] [rbp-30h]
  struct _IO_REMOVE_LOCK *v13; // [rsp+70h] [rbp+8h] BYREF

  result = *(_DWORD *)(a1 + 296);
  v13 = 0LL;
  if ( (result & 1) != 0 )
    return result;
  if ( (result & 2) == 0 )
  {
    result = PopFxFindDeviceAndAllocateUniqueId(a1, &v13);
    if ( result == -1073741738 )
      goto LABEL_12;
    *(_DWORD *)(a1 + 296) |= 2u;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxPluginLock, 0LL);
  v6 = (ULONG_PTR *)PopFxPluginList;
  v7 = 0LL;
  while ( v6 != &PopFxPluginList )
  {
    v9 = (unsigned __int8 (__fastcall *)(__int64, __int64 *))v6[12];
    if ( v9 )
    {
      v11 = a1 + 280;
      if ( !v9(1LL, &v11) )
        PopFxBugCheck(0x605uLL, 1uLL, (ULONG_PTR)v6, 0LL);
      if ( v12 )
      {
        LOBYTE(v10) = 1;
        PopDiagTraceFxDevicePreparation(a1, v6, a1 + 280, v10);
        v7 = v6;
        goto LABEL_8;
      }
    }
    v6 = (ULONG_PTR *)*v6;
  }
  if ( !a2 )
    goto LABEL_9;
LABEL_8:
  *(_DWORD *)(a1 + 296) |= 1u;
  *(_QWORD *)(a1 + 128) = v7;
  *(_WORD *)(a1 + 96) = 0;
  *(_BYTE *)(a1 + 98) = 6;
  *(_DWORD *)(a1 + 100) = 0;
  *(_QWORD *)(a1 + 112) = a1 + 104;
  *(_QWORD *)(a1 + 104) = a1 + 104;
LABEL_9:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
  KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
  result = (unsigned int)KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v7 )
  {
    v8 = v13;
    if ( !v13 )
      return result;
    result = IoAcquireRemoveLockEx(v13 + 8, (PVOID)0x70466F50, &File, 1u, 0x20u);
    if ( result != -1073741738 )
      *(_DWORD *)(a1 + 296) |= 0x4000u;
    goto LABEL_13;
  }
LABEL_12:
  v8 = v13;
LABEL_13:
  if ( v8 )
  {
    result = _InterlockedDecrement(&v8[8].Common.IoCount);
    if ( !result )
      return KeSetEvent(&v8[8].Common.RemoveEvent, 0, 0);
  }
  return result;
}
