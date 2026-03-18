/*
 * XREFs of CmpCleanupRollbackPacket @ 0x1405AFF78
 * Callers:
 *     CmpTryToRundownHive @ 0x14000FCAC (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x1406923B0 (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x1407E88F0 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x1407EDB14 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1407EF43C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1407EF8CC (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x1408013CC (CmRestoreKey.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140804618 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     CmpTransDereferenceTransaction @ 0x1406940B4 (CmpTransDereferenceTransaction.c)
 */

void __fastcall CmpCleanupRollbackPacket(__int64 a1)
{
  __int64 i; // rdi
  struct _PRIVILEGE_SET *v3; // rcx
  void *v4; // rcx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)a1; i = (unsigned int)(i + 1) )
  {
    v4 = *(void **)(*(_QWORD *)(a1 + 8) + 8 * i);
    if ( v4 )
    {
      if ( ((unsigned __int8)v4 & 1) != 0 )
        CmpTransDereferenceTransaction();
      else
        ObfDereferenceObject(v4);
    }
  }
  v3 = *(struct _PRIVILEGE_SET **)(a1 + 8);
  if ( v3 )
    CmSiFreeMemory(v3);
}
