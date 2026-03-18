/*
 * XREFs of ?DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x1800B1074
 * Callers:
 *     ?DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x180024174 (-DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x180024280 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180097A30 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x1800B4020 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 * Callees:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1800B1CAC (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 */

__int64 __fastcall CD3DResourceManager::DestroyDelayedResources(CD3DResourceManager *this)
{
  unsigned int v1; // edi
  union _SLIST_HEADER *i; // rcx
  PSLIST_ENTRY v4; // rax
  struct _SLIST_ENTRY *Next; // rbx

  v1 = 0;
  for ( i = (union _SLIST_HEADER *)((char *)this + 16); ; i = (union _SLIST_HEADER *)((char *)this + 16) )
  {
    v4 = InterlockedFlushSList(i);
    if ( !v4 )
      break;
    do
    {
      Next = v4->Next;
      CD3DResourceManager::DestroyResource(this, (struct CD3DResource *)&v4[-3]);
      ++v1;
      v4 = Next;
    }
    while ( Next );
  }
  return v1;
}
