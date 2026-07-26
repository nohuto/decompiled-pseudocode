/*
 * XREFs of ?ndisVerifyValidRWLockFlags@@YAXE@Z @ 0x1C00C41B8
 * Callers:
 *     ?ndisVerifyNdisAcquireRWLockRead@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1C00C3D60 (-ndisVerifyNdisAcquireRWLockRead@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 *     ?ndisVerifyNdisAcquireRWLockWrite@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1C00C3DD0 (-ndisVerifyNdisAcquireRWLockWrite@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 *     ?ndisVerifyNdisTryAcquireRWLockRead@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1C00C4010 (-ndisVerifyNdisTryAcquireRWLockRead@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 *     ?ndisVerifyNdisTryAcquireRWLockWrite@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1C00C4090 (-ndisVerifyNdisTryAcquireRWLockWrite@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C007E3F0 (ndisBugCheckEx.c)
 */

void __fastcall ndisVerifyValidRWLockFlags(unsigned __int8 a1)
{
  if ( (a1 & 1) != 0 && KeGetCurrentIrql() != 2 )
    ndisBugCheckEx(0x2EuLL, 0LL, KeGetCurrentIrql(), 0LL);
  if ( (a1 & 0xFE) != 0 )
    ndisBugCheckEx(0x2DuLL, 0LL, a1, 0LL);
}
