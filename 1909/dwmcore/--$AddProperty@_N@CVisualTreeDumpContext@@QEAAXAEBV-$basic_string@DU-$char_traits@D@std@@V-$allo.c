/*
 * XREFs of ??$AddProperty@_N@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x1801C0838
 * Callers:
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801C1400 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1800D3924 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18016A700 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ??$_UIntegral_to_buff@DI@std@@YAPEADPEADI@Z @ 0x1801738D4 (--$_UIntegral_to_buff@DI@std@@YAPEADPEADI@Z.c)
 *     ??$emplace_back@UProperty@CTreeDumpNodeData@@@?$vector@UProperty@CTreeDumpNodeData@@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@QEAAAEAUProperty@CTreeDumpNodeData@@$$QEAU23@@Z @ 0x180173954 (--$emplace_back@UProperty@CTreeDumpNodeData@@@-$vector@UProperty@CTreeDumpNodeData@@V-$allocator.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180173AEC (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

void __fastcall CVisualTreeDumpContext::AddProperty<bool>(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int128 v7; // xmm0
  __int64 v8; // rbx
  __int128 *p_Src; // rdi
  __int64 v10; // rsi
  __int128 v11; // xmm0
  __int64 v12; // rbx
  __int128 v13; // [rsp+20h] [rbp-49h] BYREF
  __m128i v14; // [rsp+30h] [rbp-39h]
  __int128 v15; // [rsp+40h] [rbp-29h] BYREF
  __int64 v16; // [rsp+50h] [rbp-19h]
  __int64 v17; // [rsp+58h] [rbp-11h]
  __int128 Src; // [rsp+60h] [rbp-9h] BYREF
  __m128i si128; // [rsp+70h] [rbp+7h]
  _BYTE v20[3]; // [rsp+95h] [rbp+2Ch] BYREF

  LOBYTE(Src) = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v5 = std::_UIntegral_to_buff<char,unsigned int>((__int64)v20, a3);
  LOBYTE(v13) = 0;
  v14 = si128;
  if ( (_BYTE *)v5 != v20 )
    std::string::assign((void **)&v13, (const void *)v5, (size_t)&v20[-v5]);
  std::string::operator=(&Src, (__int64)&v13);
  std::string::_Tidy_deallocate((__int64)&v13);
  v6 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  if ( v6 >= 0x10 )
  {
    v8 = v6 | 0xF;
    if ( (v6 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v8 + 1);
    memcpy_0((void *)v13, a2, v6 + 1);
    v14.m128i_i64[1] = v8;
  }
  else
  {
    v7 = *(_OWORD *)a2;
    v14.m128i_i64[1] = 15LL;
    v13 = v7;
  }
  p_Src = &Src;
  v14.m128i_i64[0] = v6;
  v10 = si128.m128i_i64[0];
  if ( si128.m128i_i64[1] >= 0x10uLL )
    p_Src = (__int128 *)Src;
  if ( si128.m128i_i64[0] >= 0x10uLL )
  {
    v12 = si128.m128i_i64[0] | 0xF;
    if ( (si128.m128i_i64[0] | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12 + 1);
    memcpy_0((void *)v15, p_Src, v10 + 1);
    v17 = v12;
  }
  else
  {
    v11 = *p_Src;
    v17 = 15LL;
    v15 = v11;
  }
  v16 = v10;
  std::vector<CTreeDumpNodeData::Property>::emplace_back<CTreeDumpNodeData::Property>(a1 + 64, (__int64)&v13);
  std::string::_Tidy_deallocate((__int64)&v15);
  std::string::_Tidy_deallocate((__int64)&v13);
  std::string::_Tidy_deallocate((__int64)&Src);
}
