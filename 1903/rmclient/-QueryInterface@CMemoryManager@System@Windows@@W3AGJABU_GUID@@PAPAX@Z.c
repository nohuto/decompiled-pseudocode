/*
 * XREFs of ?QueryInterface@CMemoryManager@System@Windows@@W3AGJABU_GUID@@PAPAX@Z @ 0x1000D390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __userpurge Windows::System::CMemoryManager::QueryInterface@<eax>(
        const struct _GUID *a1@<edi>,
        int a2,
        const struct _GUID *a3,
        void **a4)
{
  return Windows::System::CMemoryManager::QueryInterface(a1, (Windows::System::CMemoryManager *)(a2 - 4), a3, a4);
}
