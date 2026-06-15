/*
 * XREFs of _CSpatialCrossProcessBaseEndpoint::MapCPMemory_::_1_::dtor$3 @ 0x14005CF08
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::MapCPMemory_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  std::unique_ptr<SpatialBlock>::~unique_ptr<SpatialBlock>((void **)(a2 + 168));
}
