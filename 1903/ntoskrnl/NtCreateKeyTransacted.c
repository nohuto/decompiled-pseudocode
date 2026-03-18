/*
 * XREFs of NtCreateKeyTransacted @ 0x14063DB60
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     CmpTransDereferenceTransaction @ 0x1406335B0 (CmpTransDereferenceTransaction.c)
 *     CmCreateKey @ 0x14063B570 (CmCreateKey.c)
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
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v12; // eax
  __int64 v13; // r9
  __int64 v14; // rbx
  NTSTATUS v15; // eax
  int Key; // edi
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  PVOID v19; // [rsp+48h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741431;
  }
  v12 = ObReferenceObjectByHandle(
          Handle,
          4u,
          CmRegistryTransactionType,
          KeGetCurrentThread()->PreviousMode,
          &Object,
          0LL);
  v14 = (__int64)Object;
  Key = v12;
  if ( v12 == -1073741788 )
  {
    v15 = ObReferenceObjectByHandle(
            Handle,
            4u,
            (POBJECT_TYPE)TmTransactionObjectType,
            KeGetCurrentThread()->PreviousMode,
            &v19,
            0LL);
    v14 = (__int64)v19;
    Key = v15;
    goto LABEL_5;
  }
  if ( v12 >= 0 )
  {
    v14 = (unsigned __int64)Object | 1;
LABEL_5:
    if ( Key >= 0 )
      Key = CmCreateKey(a1, a2, a3, v13, a5, a6, a8, v14);
  }
  if ( v14 )
    CmpTransDereferenceTransaction(v14);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)Key;
}
