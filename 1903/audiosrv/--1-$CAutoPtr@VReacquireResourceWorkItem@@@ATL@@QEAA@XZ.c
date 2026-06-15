/*
 * XREFs of ??1?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@QEAA@XZ @ 0x1800FF34C
 * Callers:
 *     _CConstraintModelResourceManager::AddWorkItemToQueue_::_1_::dtor$1 @ 0x1800FF9EF (_CConstraintModelResourceManager--AddWorkItemToQueue_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoPtr<ReacquireResourceWorkItem>::~CAutoPtr<ReacquireResourceWorkItem>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    operator delete(v2, (const struct std::nothrow_t *)0x18);
  *a1 = 0LL;
}
