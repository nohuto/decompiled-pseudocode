/*
 * XREFs of ?_Change_array@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUInputSample@ContextualProcessorBuffer@@_K1@Z @ 0x1800FB518
 * Callers:
 *     ??$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUInputSample@ContextualProcessorBuffer@@QEAU23@$$QEAU23@@Z @ 0x1800F9A64 (--$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@-$vector@UInputSample@Contextual.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1InputSample@ContextualProcessorBuffer@@QEAA@XZ @ 0x1800F9FE0 (--1InputSample@ContextualProcessorBuffer@@QEAA@XZ.c)
 */

__int64 __fastcall std::vector<ContextualProcessorBuffer::InputSample>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  ContextualProcessorBuffer::InputSample *v4; // rbx
  ContextualProcessorBuffer::InputSample *v9; // rsi
  __int64 result; // rax

  v4 = *(ContextualProcessorBuffer::InputSample **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(ContextualProcessorBuffer::InputSample **)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        ContextualProcessorBuffer::InputSample::~InputSample(v4);
        v4 = (ContextualProcessorBuffer::InputSample *)((char *)v4 + 80);
      }
      while ( v4 != v9 );
      v4 = *(ContextualProcessorBuffer::InputSample **)a1;
    }
    std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)(80 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v4) / 80LL)));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 80 * a3;
  result = a2 + 80 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
