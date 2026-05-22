/*
 * XREFs of ?_Buy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAA_N_K@Z @ 0x180011BDC
 * Callers:
 *     ??$_Assign_range@PEAUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXPEAUINPUT_SPACE_PAYLOAD@@0Uforward_iterator_tag@1@@Z @ 0x180011ACC (--$_Assign_range@PEAUINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SP.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

char __fastcall std::vector<INPUT_SPACE_PAYLOAD>::_Buy(_QWORD *a1, unsigned __int64 a2)
{
  char result; // al
  __int64 v4; // rbx
  _QWORD *v5; // rax

  result = 0;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("vector<T> too long");
    v4 = 24 * a2;
    v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(24 * a2);
    *a1 = v5;
    a1[1] = v5;
    result = 1;
    a1[2] = v4 + *a1;
  }
  return result;
}
