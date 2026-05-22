/*
 * XREFs of ?deallocate@?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@QEAAXQEAUDeviceDisplayMapping@DWMInputRouter@@_K@Z @ 0x18001FE20
 * Callers:
 *     _std::vector_InputSite::AttachedInputObjectEntry_std::allocator_InputSite::AttachedInputObjectEntry___::_Emplace_reallocate_InputSite::AttachedInputObjectEntry__::_1_::catch$8 @ 0x18012EB11 (_std--vector_InputSite--AttachedInputObjectEntry_std--allocator_InputSite--AttachedInputObjectEn.c)
 *     _std::vector_std::pair_unsigned_long_InputRedirectionTarget_____ptr64__std::allocator_std::pair_unsigned_long_InputRedirectionTarget_____ptr64_____::_Emplace_reallocate_int_&___ptr64_InputRedirectionTarget_____ptr64__::_1_::catch$0 @ 0x1801307D8 (_std--vector_std--pair_unsigned_long_InputRedirectionTarget_____ptr64__std--allocator_std--pair_.c)
 *     _std::vector_DWMInputRouter::DeviceDisplayMapping_std::allocator_DWMInputRouter::DeviceDisplayMapping___::_Emplace_reallocate_DWMInputRouter::DeviceDisplayMapping__::_1_::catch$8 @ 0x18013244F (_std--vector_DWMInputRouter--DeviceDisplayMapping_std--allocator_DWMInputRouter--DeviceDisplayMa.c)
 *     _std::vector_SPATIAL_NODE_ID_std::allocator_SPATIAL_NODE_ID___::_Emplace_reallocate_SPATIAL_NODE_ID_const_&___ptr64__::_1_::catch$0 @ 0x180132C02 (_std--vector_SPATIAL_NODE_ID_std--allocator_SPATIAL_NODE_ID___--_Emplace_reallocate_SPATIAL_NODE.c)
 *     _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::_Emplace_reallocate_ContextualProcessorBuffer::InputSample__::_1_::catch$16 @ 0x180133E04 (_std--vector_ContextualProcessorBuffer--InputSample_std--allocator_ContextualProcessorBuffer--In.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<DWMInputRouter::DeviceDisplayMapping>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  const struct std::nothrow_t *v3; // r8
  void *v4; // rax
  __int64 v5; // rcx

  v3 = (const struct std::nothrow_t *)(16 * a3);
  v4 = a2;
  if ( (unsigned __int64)v3 >= 0x1000 )
  {
    v5 = *((_QWORD *)a2 - 1);
    v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
    if ( (unsigned __int64)a2 - v5 - 8 > 0x1F )
    {
      _o__invalid_parameter_noinfo_noreturn(v5, a2);
      JUMPOUT(0x18001FE61LL);
    }
    v4 = (void *)*((_QWORD *)a2 - 1);
  }
  operator delete(v4, v3);
}
