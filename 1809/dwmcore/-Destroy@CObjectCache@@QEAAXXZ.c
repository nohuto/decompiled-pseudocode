/*
 * XREFs of ?Destroy@CObjectCache@@QEAAXXZ @ 0x1801E1FF4
 * Callers:
 *     ??1CThreadContext@@AEAA@XZ @ 0x1801E1F18 (--1CThreadContext@@AEAA@XZ.c)
 *     ?DestroyObjectCaches@CThreadContext@@SAXXZ @ 0x1801E2034 (-DestroyObjectCaches@CThreadContext@@SAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CObjectCache::Destroy(CObjectCache *this)
{
  _QWORD *v1; // rdi
  void *v3; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 1);
  while ( v1 )
  {
    v3 = v1;
    v1 = (_QWORD *)*v1;
    WPF::ProcessHeapImpl::Free(v3);
  }
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 1) = 0LL;
}
