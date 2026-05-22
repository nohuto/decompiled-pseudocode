/*
 * XREFs of ?_Destroy@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAXPEAUInputSample@ContextualProcessorBuffer@@0@Z @ 0x1800FB490
 * Callers:
 *     _std::vector_ContextualProcessorBuffer::InputSample_std::allocator_ContextualProcessorBuffer::InputSample___::_Emplace_reallocate_ContextualProcessorBuffer::InputSample__::_1_::catch$103 @ 0x1800F9B81 (_std--vector_ContextualProcessorBuffer--InputSample_std--allocator_ContextualProces_ea_1800F9B81.c)
 * Callees:
 *     ??1InputSample@ContextualProcessorBuffer@@QEAA@XZ @ 0x1800F9DB0 (--1InputSample@ContextualProcessorBuffer@@QEAA@XZ.c)
 */

void __fastcall std::vector<ContextualProcessorBuffer::InputSample>::_Destroy(
        __int64 a1,
        ContextualProcessorBuffer::InputSample *a2,
        ContextualProcessorBuffer::InputSample *a3)
{
  ContextualProcessorBuffer::InputSample *v4; // rbx

  if ( a2 != a3 )
  {
    v4 = a2;
    do
    {
      ContextualProcessorBuffer::InputSample::~InputSample(v4);
      v4 = (ContextualProcessorBuffer::InputSample *)((char *)v4 + 80);
    }
    while ( v4 != a3 );
  }
}
