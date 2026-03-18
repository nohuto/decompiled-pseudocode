/*
 * XREFs of PiPnpRtlEnsureObjectCached @ 0x140862A0C
 * Callers:
 *     PiCMCreateDevice @ 0x140870890 (PiCMCreateDevice.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     PiPnpRtlEndOperation @ 0x1405BB924 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD6D8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlObjectEventCreate @ 0x1405BD82C (PiPnpRtlObjectEventCreate.c)
 *     PiDmGetObject @ 0x1405BEF20 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405BF214 (PiDmObjectRelease.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406FB944 (PiDmAddCacheReferenceForObject.c)
 */

__int64 __fastcall PiPnpRtlEnsureObjectCached(__int64 a1, _WORD *a2)
{
  int Object; // eax
  int v4; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rbx
  struct _KTHREAD *v7; // rax
  int v8; // ebx
  char *v10; // [rsp+20h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+30h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h] BYREF

  BugCheckParameter2 = 0LL;
  P = 0LL;
  v10 = 0LL;
  Object = PiDmGetObject(1LL, (__int64)a2, (__int64 *)&BugCheckParameter2);
  v4 = Object;
  if ( Object < 0 )
  {
    if ( Object == -1073741772 )
    {
      v4 = PiDmAddCacheReferenceForObject(1u, a2, (volatile signed __int32 **)&BugCheckParameter2);
      if ( v4 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v6 = BugCheckParameter2;
        ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
        *(_DWORD *)(v6 + 32) |= 1u;
        ExReleasePushLockEx(v6, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( (int)PiPnpRtlBeginOperation(&P) >= 0 )
        {
          v7 = KeGetCurrentThread();
          --v7->KernelApcDisable;
          ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
          v8 = PiPnpRtlObjectEventCreate((__int64)a2, 1u, (__int64)P, &v10);
          ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          if ( v8 >= 0 && v10 )
            *((_DWORD *)v10 + 1) |= 1u;
          PiPnpRtlEndOperation((PVOID **)P);
        }
      }
    }
  }
  else
  {
    v4 = 0;
  }
  if ( BugCheckParameter2 )
    PiDmObjectRelease((unsigned int *)BugCheckParameter2);
  return (unsigned int)v4;
}
