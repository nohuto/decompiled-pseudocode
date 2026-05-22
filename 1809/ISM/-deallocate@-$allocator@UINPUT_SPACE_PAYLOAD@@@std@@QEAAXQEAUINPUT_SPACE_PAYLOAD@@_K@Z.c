/*
 * XREFs of ?deallocate@?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@QEAAXQEAUINPUT_SPACE_PAYLOAD@@_K@Z @ 0x180005544
 * Callers:
 *     _std::vector_InputProvider_std::allocator_InputProvider___::_Emplace_reallocate_InputProvider__::_1_::catch$8 @ 0x180130A53 (_std--vector_InputProvider_std--allocator_InputProvider___--_Emplace_reallocate_InputProvider__-.c)
 *     _std::vector_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo____std::allocator_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo_______::_Emplace_reallocate_std::vector_HidChannelValueInfo_std::allocator_HidChannelValueInfo______::_1_::catch$0 @ 0x180131C44 (_std--vector_std--vector_HidChannelValueInfo_std--allocator_HidChannelValueInfo____std--allocato.c)
 *     _std::vector_INPUT_SPACE_PAYLOAD_std::allocator_INPUT_SPACE_PAYLOAD___::_Emplace_reallocate_INPUT_SPACE_PAYLOAD_const_&___ptr64__::_1_::catch$0 @ 0x180132E09 (_std--vector_INPUT_SPACE_PAYLOAD_std--allocator_INPUT_SPACE_PAYLOAD___--_Emplace_reallocate_INPU.c)
 *     _std::vector_ContextualProcessorBuffer::ContextualProcessorMetadata_std::allocator_ContextualProcessorBuffer::ContextualProcessorMetadata___::_Emplace_reallocate_ContextualProcessorBuffer::ContextualProcessorMetadata_const_&___ptr64__::_1_::catch$7 @ 0x180133E3E (_std--vector_ContextualProcessorBuffer--ContextualProcessorMetadata_std--allocator_ContextualPro.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<INPUT_SPACE_PAYLOAD>::deallocate(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  v4 = 24 * a3;
  if ( (unsigned __int64)(24 * a3) >= 0x1000 )
  {
    v5 = *(a2 - 1);
    v4 += 39LL;
    if ( (unsigned __int64)a2 - v5 - 8 > 0x1F )
    {
      _o__invalid_parameter_noinfo_noreturn(v5, v4);
      JUMPOUT(0x180005586LL);
    }
    a2 = (_QWORD *)*(a2 - 1);
  }
  operator delete(a2, (const struct std::nothrow_t *)v4);
}
