/*
 * XREFs of ?_Xrange@?$vector@KV?$allocator@K@std@@@std@@CAXXZ @ 0x180032EF0
 * Callers:
 *     ?GetRelatedProcesses@ApplicationSpecificEndpointInfo@@UEAAJPEA_KPEAPEAK@Z @ 0x1800312E0 (-GetRelatedProcesses@ApplicationSpecificEndpointInfo@@UEAAJPEA_KPEAPEAK@Z.c)
 * Callees:
 *     <none>
 */

void __noreturn std::vector<unsigned long>::_Xrange()
{
  std::_Xout_of_range("invalid vector<T> subscript");
  JUMPOUT(0x180032F01LL);
}
