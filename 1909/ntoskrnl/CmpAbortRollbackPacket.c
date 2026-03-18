/*
 * XREFs of CmpAbortRollbackPacket @ 0x1406BACDC
 * Callers:
 *     CmpTryToRundownHive @ 0x1401129E0 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x1406B91E4 (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x140822C90 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x14082937C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1408297E0 (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x140839F74 (CmRestoreKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     CmpTransDereferenceTransaction @ 0x140636BA0 (CmpTransDereferenceTransaction.c)
 *     CmpRollbackLightWeightTransaction @ 0x1406E34C0 (CmpRollbackLightWeightTransaction.c)
 */

__int64 __fastcall CmpAbortRollbackPacket(__int64 a1)
{
  int v2; // esi
  unsigned int v3; // r14d
  __int64 v5; // rbx
  NTSTATUS v6; // edi

  v2 = 0;
  v3 = 0;
  if ( *(_DWORD *)a1 )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * v3);
      if ( v5 )
        break;
LABEL_16:
      if ( ++v3 >= *(_DWORD *)a1 )
        return (unsigned int)v2;
    }
    if ( (v5 & 1) != 0 )
    {
      v6 = CmpRollbackLightWeightTransaction(v5 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( v6 < 0 )
        goto LABEL_10;
      CmpTransDereferenceTransaction(v5);
    }
    else
    {
      v6 = TmRollbackEnlistment(*(PKENLISTMENT *)(*(_QWORD *)(a1 + 8) + 8LL * v3), 0LL);
      if ( v6 < 0 )
        goto LABEL_10;
      ObfDereferenceObject((PVOID)v5);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * v3) = 0LL;
LABEL_10:
    if ( ((v6 + 1072103405) & 0xFFFFFFFC) == 0 && v6 != -1072103404 )
      v6 = 0;
    if ( v2 >= 0 && v6 < 0 )
      v2 = v6;
    goto LABEL_16;
  }
  return (unsigned int)v2;
}
