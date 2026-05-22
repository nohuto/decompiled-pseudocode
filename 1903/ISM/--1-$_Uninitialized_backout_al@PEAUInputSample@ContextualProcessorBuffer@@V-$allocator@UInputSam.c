/*
 * XREFs of ??1?$_Uninitialized_backout_al@PEAUInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAA@XZ @ 0x1800F9F3C
 * Callers:
 *     _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::_Emplace_reallocate_ContextualProcessorBuffer::InputSample__::_1_::dtor$38 @ 0x1800F9D39 (_std--vector_ContextualProcessorBuffer--InputSample_std--allocator_ContextualProces_ea_1800F9D39.c)
 *     _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::_Emplace_reallocate_ContextualProcessorBuffer::InputSample__::_1_::dtor$60 @ 0x1800F9D61 (_std--vector_ContextualProcessorBuffer--InputSample_std--allocator_ContextualProces_ea_1800F9D61.c)
 *     _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::_Emplace_reallocate_ContextualProcessorBuffer::InputSample__::_1_::dtor$82 @ 0x1800F9D89 (_std--vector_ContextualProcessorBuffer--InputSample_std--allocator_ContextualProces_ea_1800F9D89.c)
 * Callees:
 *     ??1InputSample@ContextualProcessorBuffer@@QEAA@XZ @ 0x1800F9FE0 (--1InputSample@ContextualProcessorBuffer@@QEAA@XZ.c)
 */

void __fastcall std::_Uninitialized_backout_al<ContextualProcessorBuffer::InputSample *>::~_Uninitialized_backout_al<ContextualProcessorBuffer::InputSample *>(
        ContextualProcessorBuffer::InputSample **a1)
{
  ContextualProcessorBuffer::InputSample *v1; // rdi
  ContextualProcessorBuffer::InputSample *i; // rbx

  v1 = a1[1];
  for ( i = *a1; i != v1; i = (ContextualProcessorBuffer::InputSample *)((char *)i + 80) )
    ContextualProcessorBuffer::InputSample::~InputSample(i);
}
