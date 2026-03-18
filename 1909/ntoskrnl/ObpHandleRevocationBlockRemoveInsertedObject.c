/*
 * XREFs of ObpHandleRevocationBlockRemoveInsertedObject @ 0x14089D510
 * Callers:
 *     ObpHandleRevocationBlockRemoveObject @ 0x1406B6830 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObDestroyHandleRevocationBlock @ 0x1406D7638 (ObDestroyHandleRevocationBlock.c)
 *     ObRevokeHandles @ 0x14072A6EC (ObRevokeHandles.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 */

void __fastcall ObpHandleRevocationBlockRemoveInsertedObject(
        __int64 *a1,
        struct _EX_RUNDOWN_REF *a2,
        __int64 a3,
        char a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v9; // rcx
  __int64 **v10; // rax

  if ( a2 == (struct _EX_RUNDOWN_REF *)_InterlockedCompareExchange64(a1 + 2, 2LL, (signed __int64)a2) )
  {
    if ( !a4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&a2[2], 0LL);
    }
    v9 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 || (v10 = (__int64 **)a1[1], *v10 != a1) )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = (__int64)v10;
    if ( !a4 )
    {
      ExReleasePushLockEx((ULONG_PTR)&a2[2], 0LL);
      KeLeaveCriticalRegion();
    }
    ExReleaseRundownProtection_0(a2 + 3);
    a1[2] = a3;
  }
}
