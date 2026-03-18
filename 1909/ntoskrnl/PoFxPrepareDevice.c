/*
 * XREFs of PoFxPrepareDevice @ 0x140159050
 * Callers:
 *     PnpStartDevice @ 0x140158FA4 (PnpStartDevice.c)
 *     PipProcessDevNodeTree @ 0x14070443C (PipProcessDevNodeTree.c)
 *     PiProcessAddBootDevices @ 0x140780918 (PiProcessAddBootDevices.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     IoAcquireRemoveLockEx @ 0x1400E0C90 (IoAcquireRemoveLockEx.c)
 *     PopPluginPrepareDevice @ 0x1402F5BC0 (PopPluginPrepareDevice.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x140719F6C (PopFxFindDeviceAndAllocateUniqueId.c)
 *     PopDiagTraceFxDevicePreparation @ 0x140732E38 (PopDiagTraceFxDevicePreparation.c)
 */

LONG __fastcall PoFxPrepareDevice(__int64 a1, char a2)
{
  LONG result; // eax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR *v6; // rdi
  ULONG_PTR *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  result = *(_DWORD *)(a1 + 296);
  v10 = 0LL;
  if ( (result & 1) != 0 )
    return result;
  if ( (result & 2) == 0 )
  {
    result = PopFxFindDeviceAndAllocateUniqueId(a1, &v10);
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
    if ( (unsigned __int8)PopPluginPrepareDevice((ULONG_PTR)v6) )
    {
      LOBYTE(v9) = 1;
      PopDiagTraceFxDevicePreparation(a1, v6, a1 + 280, v9);
      v7 = v6;
      if ( v6 )
        goto LABEL_8;
      break;
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
  result = (unsigned int)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v7 )
  {
    v8 = v10;
    if ( !v10 )
      return result;
    result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v10 + 264), (PVOID)0x70466F50, &Src, 1u, 0x20u);
    if ( result != -1073741738 )
      *(_DWORD *)(a1 + 296) |= 0x4000u;
    goto LABEL_13;
  }
LABEL_12:
  v8 = v10;
LABEL_13:
  if ( v8 )
  {
    result = _InterlockedDecrement((volatile signed __int32 *)(v8 + 268));
    if ( !result )
      return KeSetEvent((PRKEVENT)(v8 + 272), 0, 0);
  }
  return result;
}
