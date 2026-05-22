/*
 * XREFs of ??1?$unordered_map@KUVelocityData@DragNDropProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@4@@std@@QEAA@XZ @ 0x1800230E0
 * Callers:
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$3 @ 0x18012EBC6 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$3.c)
 *     _DragNDropProcessor::DragNDropProcessor_::_1_::dtor$7 @ 0x18012EC24 (_DragNDropProcessor--DragNDropProcessor_--_1_--dtor$7.c)
 *     _DragNDropProcessorLegacy::DragNDropProcessorLegacy_::_1_::dtor$7 @ 0x180133FFC (_DragNDropProcessorLegacy--DragNDropProcessorLegacy_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::unordered_map<unsigned long,DragNDropProcessor::VelocityData>::~unordered_map<unsigned long,DragNDropProcessor::VelocityData>(
        __int64 a1)
{
  return std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::~_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>(a1);
}
