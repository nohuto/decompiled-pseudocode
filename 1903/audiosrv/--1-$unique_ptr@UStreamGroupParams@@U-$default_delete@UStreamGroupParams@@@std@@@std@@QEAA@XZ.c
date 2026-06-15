/*
 * XREFs of ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x1800F5720
 * Callers:
 *     _BuildDeviceGraphForStream_::_1_::dtor$0 @ 0x180072760 (_BuildDeviceGraphForStream_--_1_--dtor$0.c)
 *     _DeriveStreamGroupParametersForStream_::_1_::dtor$3 @ 0x1800728A0 (_DeriveStreamGroupParametersForStream_--_1_--dtor$3.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$11 @ 0x1800F7E0C (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$11.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>(LPVOID **a1)
{
  LPVOID *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    operator delete(v1[7], (const struct std::nothrow_t *)0x10);
    v1[7] = 0LL;
    CoTaskMemFree(v1[2]);
    v1[2] = 0LL;
    CoTaskMemFree(*v1);
    *v1 = 0LL;
    operator delete(v1, (const struct std::nothrow_t *)0x40);
  }
}
