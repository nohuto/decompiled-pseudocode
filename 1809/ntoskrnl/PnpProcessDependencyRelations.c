/*
 * XREFs of PnpProcessDependencyRelations @ 0x1406EDB30
 * Callers:
 *     PnpProcessRelation @ 0x1406ED92C (PnpProcessRelation.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x140007294 (PipIsDevNodeDNStarted.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x14059CEB4 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14059E8F4 (PnpAcquireDependencyRelationsLock.c)
 *     PiGetDependentList @ 0x1406EC8C4 (PiGetDependentList.c)
 *     PnpProcessRelation @ 0x1406ED92C (PnpProcessRelation.c)
 *     PiEnumerateDependentListEntry @ 0x140824D18 (PiEnumerateDependentListEntry.c)
 */

__int64 __fastcall PnpProcessDependencyRelations(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        ULONG_PTR a5)
{
  __int64 v5; // rbx
  int v9; // edi
  __int64 *DependentList; // rsi
  __int64 *v11; // rbx
  ULONG_PTR BugCheckParameter3; // rbp
  __int64 v14; // rcx
  int v15; // eax
  bool v16; // zf
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  char v18; // [rsp+70h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  v9 = 0;
  PnpAcquireDependencyRelationsLock(0);
  DependentList = PiGetDependentList(v5);
  v11 = (__int64 *)*DependentList;
  if ( (__int64 *)*DependentList != DependentList )
  {
    BugCheckParameter3 = a5;
    do
    {
      PiEnumerateDependentListEntry(v11, &v17, &v18);
      v11 = (__int64 *)*v11;
      if ( v17 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL);
        v15 = *(_DWORD *)(v14 + 300);
        if ( v15 < 782 || v15 > 783 )
          v16 = !PipIsDevNodeDNStarted(v14);
        else
          v16 = ((*(_DWORD *)(v14 + 304) - 786) & 0xFFFFFFFD) == 0;
        if ( !v16 )
          v9 = PnpProcessRelation(v14, a2, a3, a4, BugCheckParameter3);
        if ( v9 < 0 )
          break;
      }
    }
    while ( v11 != DependentList );
  }
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  return (unsigned int)v9;
}
