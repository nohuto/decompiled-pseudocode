/*
 * XREFs of ?ndisVerifyNdisReleaseRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@@Z @ 0x1C007F020
 * Callers:
 *     <none>
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0005F00 (NdisReleaseRWLock.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ?DecrementReadConcurrency@@YAXPEAUNDIS_VERIFY_RW_LOCK_EX@@@Z @ 0x1C007ECF0 (-DecrementReadConcurrency@@YAXPEAUNDIS_VERIFY_RW_LOCK_EX@@@Z.c)
 *     ?ndisGetRWLockVerifierContext@@YAPEAUNDIS_VERIFY_RW_LOCK_EX@@PEAU_NDIS_RW_LOCK_EX@@@Z @ 0x1C007ED4C (-ndisGetRWLockVerifierContext@@YAPEAUNDIS_VERIFY_RW_LOCK_EX@@PEAU_NDIS_RW_LOCK_EX@@@Z.c)
 */

void __fastcall ndisVerifyNdisReleaseRWLock(
        struct _NDIS_RW_LOCK_EX *BugCheckParameter3,
        struct _LOCK_STATE_EX *BugCheckParameter4)
{
  struct NDIS_VERIFY_RW_LOCK_EX *RWLockVerifierContext; // rax

  RWLockVerifierContext = ndisGetRWLockVerifierContext(BugCheckParameter3);
  if ( BugCheckParameter4->LockState != 2 )
  {
    if ( BugCheckParameter4->LockState == 3 )
    {
      if ( RWLockVerifierContext )
        DecrementReadConcurrency(RWLockVerifierContext);
    }
    else if ( BugCheckParameter4->LockState != 4 )
    {
      ndisBugCheckEx(0x30uLL, 1uLL, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    }
  }
  NdisReleaseRWLock(BugCheckParameter3, BugCheckParameter4);
  BugCheckParameter4->LockState = 0;
}
