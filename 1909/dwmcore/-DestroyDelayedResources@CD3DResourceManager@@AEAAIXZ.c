/*
 * XREFs of ?DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18002BDB4
 * Callers:
 *     ?DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x18002C034 (-DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x18002C140 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x18004F410 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180074920 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x18002353C (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
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
      CD3DResourceManager::DestroyResource(this, (struct CD3DResource ***)&v4[-3]);
      ++v1;
      v4 = Next;
    }
    while ( Next );
  }
  return v1;
}
