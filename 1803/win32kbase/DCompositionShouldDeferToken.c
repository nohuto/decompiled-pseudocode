/*
 * XREFs of DCompositionShouldDeferToken @ 0x1C0047700
 * Callers:
 *     <none>
 * Callees:
 *     ?FindObject@?$CGenericTable@_KVCBatch@DirectComposition@@$0GFHDEDEE@$0A@@DirectComposition@@QEAAPEAVCBatch@2@_K@Z @ 0x1C0047830 (-FindObject@-$CGenericTable@_KVCBatch@DirectComposition@@$0GFHDEDEE@$0A@@DirectComposition@@QEAA.c)
 */

__int64 __fastcall DCompositionShouldDeferToken(__int64 a1, __int64 a2)
{
  struct _ERESOURCE *v2; // rbx
  unsigned __int8 v5; // si
  __int64 v6; // rcx
  __int64 Object; // rax

  v2 = DirectComposition::CSynchronizationManager::s_pSyncTableLock;
  v5 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v2, 1u);
  Object = DirectComposition::CGenericTable<unsigned __int64,DirectComposition::CBatch,1702052676,0>::FindObject(v6, a2);
  if ( Object && (*(_BYTE *)(Object + 32) & 2) == 0 && (*(int *)(Object + 48) > 0 || *(_QWORD *)(Object + 56) != a1) )
    v5 = 1;
  ExReleaseResourceLite(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
  KeLeaveCriticalRegion();
  return v5;
}
