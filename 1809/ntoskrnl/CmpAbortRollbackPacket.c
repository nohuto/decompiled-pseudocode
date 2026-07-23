/*
 * XREFs of CmpAbortRollbackPacket @ 0x140703A6C
 * Callers:
 *     CmpTryToRundownHive @ 0x14000FCAC (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x140693550 (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x1407E9AD0 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1407F061C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1407F0AAC (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x1408025AC (CmRestoreKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     CmpRollbackLightWeightTransaction @ 0x140694AB0 (CmpRollbackLightWeightTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x140695254 (CmpTransDereferenceTransaction.c)
 */

__int64 __fastcall CmpAbortRollbackPacket(__int64 a1, _BYTE *a2)
{
  int v2; // esi
  __int64 v5; // r15
  __int64 v7; // rbx
  int v8; // edi

  v2 = 0;
  if ( a2 )
    *a2 = 0;
  v5 = 0LL;
  if ( *(_DWORD *)a1 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5);
      if ( v7 )
        break;
LABEL_19:
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *(_DWORD *)a1 )
        return (unsigned int)v2;
    }
    if ( (v7 & 1) != 0 )
    {
      v8 = CmpRollbackLightWeightTransaction((volatile signed __int32 *)(v7 & 0xFFFFFFFFFFFFFFFEuLL));
      if ( v8 < 0 )
        goto LABEL_12;
      CmpTransDereferenceTransaction(v7);
    }
    else
    {
      v8 = TmRollbackEnlistment(*(PKENLISTMENT *)(*(_QWORD *)(a1 + 8) + 8 * v5), 0LL);
      if ( v8 < 0 )
        goto LABEL_12;
      ObfDereferenceObject((PVOID)v7);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5) = 0LL;
LABEL_12:
    if ( ((v8 + 1072103405) & 0xFFFFFFFC) == 0 && v8 != -1072103404 )
    {
      v8 = 0;
      if ( a2 )
        *a2 = 1;
    }
    if ( v2 >= 0 && v8 < 0 )
      v2 = v8;
    goto LABEL_19;
  }
  return (unsigned int)v2;
}
