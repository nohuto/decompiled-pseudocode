/*
 * XREFs of NtOpenRegistryTransaction @ 0x1407E9450
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     CmCleanupThreadInfo @ 0x1401B2F3C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B2F7C (CmpInitializeThreadInfo.c)
 *     ObOpenObjectByName @ 0x1405B9290 (ObOpenObjectByName.c)
 *     NtClose @ 0x1405E89E0 (NtClose.c)
 */

__int64 __fastcall NtOpenRegistryTransaction(HANDLE *a1, int a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r9
  BOOLEAN v7; // di
  int v8; // ebx
  char PreviousMode; // r14
  __int64 v10; // rax
  HANDLE Handle; // [rsp+40h] [rbp-38h] BYREF
  PVOID v13[3]; // [rsp+48h] [rbp-30h] BYREF

  Handle = 0LL;
  CmpInitializeThreadInfo(v13);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v7 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      v10 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a1;
      *(_QWORD *)v10 = 0LL;
    }
    else
    {
      *a1 = 0LL;
    }
    v8 = ObOpenObjectByName(a3, (__int64)CmRegistryTransactionType, PreviousMode, 0LL, a2, 0LL, (__int64)&Handle);
    if ( v8 >= 0 )
    {
      *a1 = Handle;
      Handle = 0LL;
      v8 = 0;
    }
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v8 = -1073741431;
  }
  if ( Handle )
    NtClose(Handle);
  if ( v7 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  CmCleanupThreadInfo(v13);
  return (unsigned int)v8;
}
