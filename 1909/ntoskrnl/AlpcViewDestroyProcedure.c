/*
 * XREFs of AlpcViewDestroyProcedure @ 0x14065FFA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     AlpcpUnlockBlob @ 0x1405E4F60 (AlpcpUnlockBlob.c)
 *     MmUnsecureVirtualMemory @ 0x14060C520 (MmUnsecureVirtualMemory.c)
 *     MmUnmapViewInSystemSpace @ 0x140648600 (MmUnmapViewInSystemSpace.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14065E4F8 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14065EDF0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpRemoveResourcePort @ 0x140660180 (AlpcpRemoveResourcePort.c)
 *     MiUnmapViewOfSection @ 0x1406602D0 (MiUnmapViewOfSection.c)
 *     AlpcpRestoreWriteAccess @ 0x140660750 (AlpcpRestoreWriteAccess.c)
 */

__int64 __fastcall AlpcViewDestroyProcedure(__int64 a1)
{
  ULONG_PTR v2; // rsi
  ULONG_PTR v3; // rdi
  _KPROCESS *Process; // rbp
  int v5; // ecx
  int v6; // eax
  _KPROCESS *v7; // rcx
  void *v8; // rcx
  volatile signed __int64 *v9; // rdi
  _BYTE v11[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v11, 0, sizeof(v11));
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 16);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v3 )
  {
    AlpcpLockForCachedReferenceBlob(*(_QWORD *)(a1 + 16));
    **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
    v5 = *(_DWORD *)(v3 + 52) - 1;
    *(_DWORD *)(v3 + 52) = v5;
    if ( (*(_DWORD *)(a1 + 72) & 4) == 0 )
    {
      v6 = *(_DWORD *)(v3 + 48);
      if ( (v6 & 1) != 0 )
      {
        *(_QWORD *)(v3 + 80) = 0LL;
        v2 = *(_QWORD *)(v3 + 72);
        if ( v2 )
        {
          AlpcpRestoreWriteAccess(*(_QWORD *)(v3 + 72));
        }
        else if ( !v5 )
        {
          *(_DWORD *)(v3 + 48) = v6 & 0xFFFFFFFE;
        }
      }
    }
    AlpcpUnlockBlob(v3);
    AlpcpRemoveResourcePort(*(_QWORD *)(a1 + 24), a1);
    ObfDereferenceObject(*(PVOID *)(a1 + 24));
    if ( (*(_DWORD *)(a1 + 72) & 8) != 0 )
    {
      MmUnmapViewInSystemSpace(*(PVOID *)(a1 + 40));
    }
    else
    {
      v7 = *(_KPROCESS **)(a1 + 32);
      if ( Process != v7 )
        KiStackAttachProcess(v7, 0, (__int64)v11);
      v8 = *(void **)(a1 + 56);
      if ( v8 )
        MmUnsecureVirtualMemory(v8);
      MiUnmapViewOfSection(*(_QWORD *)(a1 + 32));
      if ( Process != *(_KPROCESS **)(a1 + 32) )
        KiUnstackDetachProcess((struct _KTHREAD *)v11, 0);
    }
    if ( v2 )
      AlpcpDereferenceBlobEx(v2, 1);
    AlpcpDereferenceBlobEx(*(_QWORD *)(a1 + 16), 1);
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 32) + 1664LL, 0LL);
    **(_QWORD **)(a1 + 88) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL) = *(_QWORD *)(a1 + 88);
    v9 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 32) + 1664LL);
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 32), 0x63706C41u);
  }
  return 0LL;
}
