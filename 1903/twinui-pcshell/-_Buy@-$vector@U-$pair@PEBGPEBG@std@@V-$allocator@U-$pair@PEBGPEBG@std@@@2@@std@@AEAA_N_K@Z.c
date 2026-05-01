/*
 * XREFs of ?_Buy@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAA_N_K@Z @ 0x18016742C
 * Callers:
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180162EF0 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Range_construct_or_tidy@PEBU?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAXPEBU?$pair@PEBGPEBG@1@0Uforward_iterator_tag@1@@Z @ 0x1801E60A4 (--$_Range_construct_or_tidy@PEBU-$pair@PEBGPEBG@std@@@-$vector@U-$pair@PEBGPEBG@std@@V-$allocato.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039948 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

char __fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Buy(
        _QWORD *a1,
        unsigned __int64 a2)
{
  char result; // al
  __int64 v4; // rdi
  _QWORD *v5; // rax

  result = 0;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v4 = 16 * a2;
    v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(16 * a2);
    *a1 = v5;
    a1[1] = v5;
    result = 1;
    a1[2] = v4 + *a1;
  }
  return result;
}
