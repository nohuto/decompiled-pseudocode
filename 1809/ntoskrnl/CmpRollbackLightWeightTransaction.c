/*
 * XREFs of CmpRollbackLightWeightTransaction @ 0x140694AB0
 * Callers:
 *     NtRollbackRegistryTransaction @ 0x140694490 (NtRollbackRegistryTransaction.c)
 *     CmpCloseLightWeightTransaction @ 0x140694A90 (CmpCloseLightWeightTransaction.c)
 *     CmpAbortRollbackPacket @ 0x140703A6C (CmpAbortRollbackPacket.c)
 *     CmpRollbackTransactionArray @ 0x1407F9CDC (CmpRollbackTransactionArray.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x140111A80 (ExBlockOnAddressPushLock.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     CmpAbortLightWeightTransaction @ 0x140694B50 (CmpAbortLightWeightTransaction.c)
 */

__int64 __fastcall CmpRollbackLightWeightTransaction(volatile signed __int32 *a1)
{
  signed __int32 v2; // eax
  unsigned int v3; // ebx
  PVOID v5[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  CmpInitializeThreadInfo(v5);
  v2 = _InterlockedCompareExchange(a1, 3, 0);
  LODWORD(v6) = v2;
  if ( v2 == 1 )
  {
    LODWORD(v6) = _InterlockedCompareExchange(a1, 4, 1);
    if ( (_DWORD)v6 != 1 )
    {
      v3 = -1072103421;
      goto LABEL_10;
    }
    v3 = 0;
    LODWORD(v6) = 4;
    ExBlockOnAddressPushLock((__int64)(a1 + 2), a1, &v6, 4uLL, 0LL);
LABEL_9:
    CmpAbortLightWeightTransaction(a1);
    goto LABEL_10;
  }
  v3 = 0;
  if ( !v2 )
    goto LABEL_9;
  v3 = -1072103421;
  if ( v2 == 3 )
    v3 = -1072103403;
LABEL_10:
  CmCleanupThreadInfo(v5);
  return v3;
}
