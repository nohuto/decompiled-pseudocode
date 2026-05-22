/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialInteractionSnapshot@Holographic@Internal@Windows@@@std@@PEAX@2@XZ @ 0x1800A4048
 * Callers:
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x1800A49E8 (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

_QWORD *std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Windows::Internal::Holographic::SpatialInteractionSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialInteractionSnapshot>>,0>>::_Buyheadnode()
{
  _QWORD *result; // rax

  result = operator new(0xE0uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
