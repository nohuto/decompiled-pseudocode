/*
 * XREFs of VrpPreUnloadKey @ 0x140845A38
 * Callers:
 *     VrpRegistryCallback @ 0x140840F00 (VrpRegistryCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     VrpFindExactNamespaceNode @ 0x14084340C (VrpFindExactNamespaceNode.c)
 */

__int64 __fastcall VrpPreUnloadKey(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdi
  int v4; // esi
  volatile signed __int64 *v6; // rbp
  __int64 ExactNamespaceNode; // rax
  unsigned int v8; // edi
  char v10; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 24);
  v4 = a2;
  --CurrentThread->KernelApcDisable;
  v6 = (volatile signed __int64 *)(a2 + 16);
  ExAcquirePushLockExclusiveEx(a2 + 16, 0LL);
  ExactNamespaceNode = VrpFindExactNamespaceNode(v4, (int)v3 + 16, (int)&v10);
  v8 = 0;
  if ( ExactNamespaceNode )
  {
    if ( *(int *)(ExactNamespaceNode + 56) < 0 )
    {
      *(_QWORD *)(a1 + 16) = ExactNamespaceNode;
    }
    else
    {
      v8 = -1073741790;
      if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v6);
      KeAbPostRelease((ULONG_PTR)v6);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    return v8;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0LL;
  }
}
