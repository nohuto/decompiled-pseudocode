/*
 * XREFs of ?ResetAccumulationBuffers@CDrawListEntryBuilder@@AEAAXXZ @ 0x1800377F4
 * Callers:
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x18003772C (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE18C (-clear_region@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE2FC (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 */

void __fastcall CDrawListEntryBuilder::ResetAccumulationBuffers(CDrawListEntryBuilder *this)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)((char *)this + 192);
  if ( (__int64)(v2[1] - *v2) >> 4 )
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
      v2,
      0LL);
  if ( (__int64)(*((_QWORD *)this + 149) - *((_QWORD *)this + 148)) >> 4 )
    detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 1184,
      0LL);
  if ( (__int64)(*((_QWORD *)this + 274) - *((_QWORD *)this + 273)) >> 1 )
    detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 2184,
      0LL);
  *((_DWORD *)this + 544) = 0;
  *((_DWORD *)this + 568) = 0;
}
