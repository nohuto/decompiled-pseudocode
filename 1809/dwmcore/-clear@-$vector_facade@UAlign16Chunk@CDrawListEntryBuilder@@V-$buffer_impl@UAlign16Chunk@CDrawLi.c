/*
 * XREFs of ?clear@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800B3F0C
 * Callers:
 *     ?ResetAccumulationBuffers@CDrawListEntryBuilder@@AEAAXXZ @ 0x180028AB4 (-ResetAccumulationBuffers@CDrawListEntryBuilder@@AEAAXXZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800B3CBC (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EEA04 (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( (__int64)(a1[1] - *a1) >> 4 )
    return detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             0LL);
  return result;
}
