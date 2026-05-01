/*
 * XREFs of ??$_Range_construct_or_tidy@PEBU?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAXPEBU?$pair@PEBGPEBG@1@0Uforward_iterator_tag@1@@Z @ 0x1801E60A4
 * Callers:
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@PEBGPEBG@std@@@1@AEBV?$allocator@U?$pair@PEBGPEBG@std@@@1@@Z @ 0x1801E6130 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@V-$initialize.c)
 * Callees:
 *     ?_Buy@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAA_N_K@Z @ 0x18016742C (-_Buy@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@AEAA_N_K@Z.c)
 */

char __fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Range_construct_or_tidy<std::pair<unsigned short const *,unsigned short const *> const *>(
        _QWORD *a1,
        _OWORD *a2,
        _OWORD *a3)
{
  _OWORD *v4; // rbx
  _OWORD *v6; // rax

  v4 = a2;
  LOBYTE(v6) = std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Buy(a1, a3 - a2);
  if ( (_BYTE)v6 )
  {
    v6 = (_OWORD *)*a1;
    while ( v4 != a3 )
      *v6++ = *v4++;
    a1[1] = v6;
  }
  return (char)v6;
}
