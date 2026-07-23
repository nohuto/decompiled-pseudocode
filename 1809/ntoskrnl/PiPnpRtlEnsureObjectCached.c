/*
 * XREFs of PiPnpRtlEnsureObjectCached @ 0x140829F2C
 * Callers:
 *     PiCMCreateDevice @ 0x140837A14 (PiCMCreateDevice.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PiPnpRtlEndOperation @ 0x140596CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140597E08 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlObjectEventCreate @ 0x1405990E4 (PiPnpRtlObjectEventCreate.c)
 *     PiDmGetObject @ 0x1405999C8 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140599D30 (PiDmObjectRelease.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406F2D80 (PiDmAddCacheReferenceForObject.c)
 */

__int64 __fastcall PiPnpRtlEnsureObjectCached(__int64 a1, wchar_t *a2, __int64 a3, __int64 a4)
{
  int Object; // eax
  int v6; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v8; // rbx
  struct _KTHREAD *v9; // rax
  int v10; // ebx
  char *v12; // [rsp+20h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+30h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h] BYREF

  BugCheckParameter2 = 0LL;
  P = 0LL;
  v12 = 0LL;
  Object = PiDmGetObject(1LL, (__int64)a2, (__int64 *)&BugCheckParameter2, a4);
  v6 = Object;
  if ( Object < 0 )
  {
    if ( Object == -1073741772 )
    {
      v6 = PiDmAddCacheReferenceForObject(1u, a2, (volatile signed __int32 **)&BugCheckParameter2);
      if ( v6 >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v8 = BugCheckParameter2;
        ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
        *(_DWORD *)(v8 + 32) |= 1u;
        ExReleasePushLockEx(v8, 0LL);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        if ( (int)PiPnpRtlBeginOperation(&P) >= 0 )
        {
          v9 = KeGetCurrentThread();
          --v9->KernelApcDisable;
          ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
          v10 = PiPnpRtlObjectEventCreate((__int64)a2, 1LL, (__int64)P, &v12);
          ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          if ( v10 >= 0 && v12 )
            *((_DWORD *)v12 + 1) |= 1u;
          PiPnpRtlEndOperation((PVOID **)P);
        }
      }
    }
  }
  else
  {
    v6 = 0;
  }
  if ( BugCheckParameter2 )
    PiDmObjectRelease((unsigned int *)BugCheckParameter2);
  return (unsigned int)v6;
}
