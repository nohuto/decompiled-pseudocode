/*
 * XREFs of ?ndisVerifyNdisTryPromoteRWLockFromReadToWrite@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@@Z @ 0x1C007F190
 * Callers:
 *     <none>
 * Callees:
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ?DecrementReadConcurrency@@YAXPEAUNDIS_VERIFY_RW_LOCK_EX@@@Z @ 0x1C007ECF0 (-DecrementReadConcurrency@@YAXPEAUNDIS_VERIFY_RW_LOCK_EX@@@Z.c)
 *     ?IncrementReadConcurrency@@YAXPEAUNDIS_VERIFY_RW_LOCK_EX@@@Z @ 0x1C007ED14 (-IncrementReadConcurrency@@YAXPEAUNDIS_VERIFY_RW_LOCK_EX@@@Z.c)
 *     ?ndisGetRWLockVerifierContext@@YAPEAUNDIS_VERIFY_RW_LOCK_EX@@PEAU_NDIS_RW_LOCK_EX@@@Z @ 0x1C007ED4C (-ndisGetRWLockVerifierContext@@YAPEAUNDIS_VERIFY_RW_LOCK_EX@@PEAU_NDIS_RW_LOCK_EX@@@Z.c)
 *     NdisTryPromoteRWLockFromReadToWrite @ 0x1C007F490 (NdisTryPromoteRWLockFromReadToWrite.c)
 */

unsigned __int8 __fastcall ndisVerifyNdisTryPromoteRWLockFromReadToWrite(
        struct _NDIS_RW_LOCK_EX *BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  struct NDIS_VERIFY_RW_LOCK_EX *RWLockVerifierContext; // rax
  struct NDIS_VERIFY_RW_LOCK_EX *v5; // rbx

  RWLockVerifierContext = ndisGetRWLockVerifierContext(BugCheckParameter3);
  v5 = RWLockVerifierContext;
  if ( *(_BYTE *)(BugCheckParameter4 + 1) != 3
    || !*(_QWORD *)((KeGetPcr()->Prcb.Number << 12) + *((_QWORD *)BugCheckParameter3 + 4)) )
  {
    ndisBugCheckEx(0x30uLL, 1uLL, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
  }
  if ( RWLockVerifierContext )
    DecrementReadConcurrency(RWLockVerifierContext);
  if ( (unsigned __int8)NdisTryPromoteRWLockFromReadToWrite(BugCheckParameter3, BugCheckParameter4) )
  {
    if ( v5 )
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 11);
    return 1;
  }
  else
  {
    if ( v5 )
    {
      IncrementReadConcurrency(v5);
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 12);
    }
    return 0;
  }
}
