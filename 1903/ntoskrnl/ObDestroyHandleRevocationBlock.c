/*
 * XREFs of ObDestroyHandleRevocationBlock @ 0x1406D7858
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1406D75FC (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x140729F9C (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082850 (ExWaitForRundownProtectionRelease.c)
 *     ObpHandleRevocationBlockRemoveInsertedObject @ 0x14089DCF0 (ObpHandleRevocationBlockRemoveInsertedObject.c)
 */

void __fastcall ObDestroyHandleRevocationBlock(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r9
  struct _EX_RUNDOWN_REF *Count; // rdi
  struct _EX_RUNDOWN_REF *v5; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&a1[2], 0LL);
  Count = (struct _EX_RUNDOWN_REF *)a1->Count;
  while ( Count != a1 )
  {
    v5 = Count;
    LOBYTE(v3) = 1;
    Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    ObpHandleRevocationBlockRemoveInsertedObject(v5, a1, 0LL, v3);
  }
  ExReleasePushLockEx((ULONG_PTR)&a1[2], 0LL);
  KeLeaveCriticalRegion();
  ExWaitForRundownProtectionRelease(a1 + 3);
}
