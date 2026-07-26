/*
 * XREFs of ?ndisVerifyNdisAcquireRWLockWrite@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1C007EE50
 * Callers:
 *     <none>
 * Callees:
 *     NdisAcquireRWLockWrite @ 0x1C0006370 (NdisAcquireRWLockWrite.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ?ndisGetRWLockVerifierContext@@YAPEAUNDIS_VERIFY_RW_LOCK_EX@@PEAU_NDIS_RW_LOCK_EX@@@Z @ 0x1C007ED4C (-ndisGetRWLockVerifierContext@@YAPEAUNDIS_VERIFY_RW_LOCK_EX@@PEAU_NDIS_RW_LOCK_EX@@@Z.c)
 *     ?ndisVerifyValidRWLockFlags@@YAXE@Z @ 0x1C007F238 (-ndisVerifyValidRWLockFlags@@YAXE@Z.c)
 */

void __fastcall ndisVerifyNdisAcquireRWLockWrite(
        struct _NDIS_RW_LOCK_EX *BugCheckParameter3,
        struct _LOCK_STATE_EX *BugCheckParameter4,
        unsigned __int8 a3)
{
  struct NDIS_VERIFY_RW_LOCK_EX *RWLockVerifierContext; // rbx

  RWLockVerifierContext = ndisGetRWLockVerifierContext(BugCheckParameter3);
  if ( *(_QWORD *)((KeGetPcr()->Prcb.Number << 12) + *((_QWORD *)BugCheckParameter3 + 4)) )
    ndisBugCheckEx(0x2FuLL, 1uLL, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  ndisVerifyValidRWLockFlags(a3);
  NdisAcquireRWLockWrite(BugCheckParameter3, BugCheckParameter4, a3);
  if ( RWLockVerifierContext )
    _InterlockedIncrement64((volatile signed __int64 *)RWLockVerifierContext + 6);
}
