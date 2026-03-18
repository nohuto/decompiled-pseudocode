/*
 * XREFs of CmpCleanupRollbackPacket @ 0x1406627FC
 * Callers:
 *     CmpTryToRundownHive @ 0x1400993CC (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x14069AC04 (CmpPerformUnloadKey.c)
 *     CmpSaveBootControlSet @ 0x140823590 (CmpSaveBootControlSet.c)
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140829C7C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14082A0E0 (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x14083A914 (CmRestoreKey.c)
 *     CmpCommitRenameKeyUoW @ 0x14083C9BC (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14083DEB0 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     CmpTransDereferenceTransaction @ 0x1406335B0 (CmpTransDereferenceTransaction.c)
 */

void __fastcall CmpCleanupRollbackPacket(__int64 a1)
{
  __int64 i; // rdi
  struct _PRIVILEGE_SET *v3; // rcx
  __int64 v4; // rcx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)a1; i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i);
    if ( v4 )
    {
      if ( (v4 & 1) != 0 )
        CmpTransDereferenceTransaction(v4);
      else
        ObfDereferenceObject((PVOID)v4);
    }
  }
  v3 = *(struct _PRIVILEGE_SET **)(a1 + 8);
  if ( v3 )
    CmSiFreeMemory(v3);
}
