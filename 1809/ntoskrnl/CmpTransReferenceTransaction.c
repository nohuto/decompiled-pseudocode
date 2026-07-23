/*
 * XREFs of CmpTransReferenceTransaction @ 0x1406951F8
 * Callers:
 *     CmpCreateKeyBody @ 0x1405E1970 (CmpCreateKeyBody.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1406950AC (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x1406FB968 (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1406FBBF8 (CmpTransInitializeTransaction.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 */

__int64 __fastcall CmpTransReferenceTransaction(__int64 a1)
{
  char v1; // bl
  struct _KTRANSACTION *v2; // rdi
  unsigned int v3; // ebx

  v1 = a1;
  v2 = (struct _KTRANSACTION *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
  ObfReferenceObject((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
  if ( (v1 & 1) != 0 )
  {
    return v2->OutcomeEvent.Header.LockNV != 0 ? 0xC0190003 : 0;
  }
  else
  {
    v3 = 0;
    if ( !TmIsTransactionActive(v2) )
    {
      ObfDereferenceObject(v2);
      return (unsigned int)-1072103421;
    }
  }
  return v3;
}
