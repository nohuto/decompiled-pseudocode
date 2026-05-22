/*
 * XREFs of ?_Buy@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAA_N_K@Z @ 0x180037CF0
 * Callers:
 *     ??$_Range_construct_or_tidy@PEBU?$pair@G_N@std@@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXPEBU?$pair@G_N@1@0Uforward_iterator_tag@1@@Z @ 0x180037C64 (--$_Range_construct_or_tidy@PEBU-$pair@G_N@std@@@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@.c)
 *     ?Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@PEAPEAV1@@Z @ 0x180038890 (-Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair.c)
 *     ??4?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800C6D5C (--4-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800C6EA8 (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Range_construct_or_tidy@PEBW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@AEAAXPEBW4_Button@@0Uforward_iterator_tag@1@@Z @ 0x1800C7200 (--$_Range_construct_or_tidy@PEBW4_Button@@@-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@st.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

char __fastcall std::vector<enum _Button>::_Buy(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rbx
  char result; // al
  unsigned __int64 v5; // rsi
  size_t v6; // rcx
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v2 = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( !a2 )
    return 0;
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v5 = 4 * a2;
  if ( 4 * a2 < 0x1000 )
  {
    if ( v5 )
      v2 = operator new(4 * a2);
  }
  else
  {
    v6 = v5 + 39;
    if ( v5 + 39 < v5 )
      v6 = -1LL;
    v7 = operator new(v6);
    if ( !v7 )
    {
      _o__invalid_parameter_noinfo_noreturn(v9, v8);
      __debugbreak();
    }
    v2 = (_QWORD *)(((unsigned __int64)v7 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v2 - 1) = v7;
  }
  *a1 = v2;
  a1[1] = v2;
  result = 1;
  a1[2] = v5 + *a1;
  return result;
}
