/*
 * XREFs of CmpRollbackTransactionArray @ 0x140831620
 * Callers:
 *     CmpParseKey @ 0x1405F9560 (CmpParseKey.c)
 *     CmSetValueKey @ 0x140630930 (CmSetValueKey.c)
 *     CmDeleteKey @ 0x14063B4FC (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x14063CCDC (CmDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1406409F0 (CmpSetKeySecurity.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpTransDereferenceTransaction @ 0x140636BA0 (CmpTransDereferenceTransaction.c)
 *     CmpRollbackLightWeightTransaction @ 0x1406E34C0 (CmpRollbackLightWeightTransaction.c)
 *     CmpRetryBackOff @ 0x1408315E8 (CmpRetryBackOff.c)
 */

__int64 __fastcall CmpRollbackTransactionArray(unsigned int a1, PVOID *a2, __int64 a3, _DWORD *a4)
{
  int v4; // ebp
  PVOID *v8; // rsi
  __int64 v9; // r15
  PVOID v10; // rbx
  struct _KENLISTMENT *v11; // rcx
  int v12; // edi

  v4 = 0;
  if ( a1 )
  {
    v8 = a2;
    v9 = a1;
    do
    {
      v10 = *v8;
      v11 = (struct _KENLISTMENT *)*v8;
      if ( ((unsigned __int8)*v8 & 1) != 0 )
      {
        v12 = CmpRollbackLightWeightTransaction((volatile signed __int32 *)((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFEuLL));
        CmpTransDereferenceTransaction((__int64)v10);
      }
      else
      {
        v12 = TmRollbackEnlistment(v11, 0LL);
        ObfDereferenceObject(*v8);
      }
      if ( v12 < 0 && v4 >= 0 && (((v12 + 1072103405) & 0xFFFFFFFC) != 0 || v12 == -1072103404) )
        v4 = v12;
      ++v8;
      --v9;
    }
    while ( v9 );
  }
  if ( a1 )
    ExFreePoolWithTag(a2, 0x36344D43u);
  CmpRetryBackOff(a4);
  return (unsigned int)v4;
}
