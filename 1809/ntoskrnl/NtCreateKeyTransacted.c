/*
 * XREFs of NtCreateKeyTransacted @ 0x140693C70
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     CmCleanupThreadInfo @ 0x1401B2F3C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B2F7C (CmpInitializeThreadInfo.c)
 *     CmCreateKey @ 0x1405B5A60 (CmCreateKey.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     CmpTransDereferenceTransaction @ 0x140694094 (CmpTransDereferenceTransaction.c)
 */

__int64 __fastcall NtCreateKeyTransacted(
        HANDLE *a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
        __int128 *a5,
        int a6,
        HANDLE Handle,
        _DWORD *a8)
{
  struct _KTHREAD *CurrentThread; // r9
  int Key; // edi
  NTSTATUS v13; // eax
  __int64 v14; // r9
  __int64 v15; // rbx
  NTSTATUS v16; // eax
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  PVOID v19; // [rsp+48h] [rbp-20h] BYREF
  PVOID v20[2]; // [rsp+50h] [rbp-18h] BYREF

  CmpInitializeThreadInfo(v20);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    Key = -1073741431;
    goto LABEL_12;
  }
  v13 = ObReferenceObjectByHandle(
          Handle,
          4u,
          CmRegistryTransactionType,
          KeGetCurrentThread()->PreviousMode,
          &Object,
          0LL);
  v15 = (__int64)Object;
  Key = v13;
  if ( v13 == -1073741788 )
  {
    v16 = ObReferenceObjectByHandle(
            Handle,
            4u,
            (POBJECT_TYPE)TmTransactionObjectType,
            KeGetCurrentThread()->PreviousMode,
            &v19,
            0LL);
    v15 = (__int64)v19;
    Key = v16;
    goto LABEL_7;
  }
  if ( v13 >= 0 )
  {
    v15 = (unsigned __int64)Object | 1;
LABEL_7:
    if ( Key >= 0 )
      Key = CmCreateKey(a1, a2, a3, v14, a5, a6, a8, v15);
  }
  if ( v15 )
    CmpTransDereferenceTransaction(v15);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_12:
  CmCleanupThreadInfo(v20);
  return (unsigned int)Key;
}
