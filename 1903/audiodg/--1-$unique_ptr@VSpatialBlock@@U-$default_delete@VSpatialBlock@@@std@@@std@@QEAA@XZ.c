/*
 * XREFs of ??1?$unique_ptr@VSpatialBlock@@U?$default_delete@VSpatialBlock@@@std@@@std@@QEAA@XZ @ 0x14005B264
 * Callers:
 *     _std::make_unique_SpatialBlock_0__::_1_::dtor$1 @ 0x14005B0F4 (_std--make_unique_SpatialBlock_0__--_1_--dtor$1.c)
 *     _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::dtor$1 @ 0x14005CBA2 (_CSpatialCrossProcessBaseEndpoint--InitializeCPMemory_--_1_--dtor$1.c)
 *     _CSpatialCrossProcessBaseEndpoint::MapCPMemory_::_1_::dtor$3 @ 0x14005CF08 (_CSpatialCrossProcessBaseEndpoint--MapCPMemory_--_1_--dtor$3.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<SpatialBlock>::~unique_ptr<SpatialBlock>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
