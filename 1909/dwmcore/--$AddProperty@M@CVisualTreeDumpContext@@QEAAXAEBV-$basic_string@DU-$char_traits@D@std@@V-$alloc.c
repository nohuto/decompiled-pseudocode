/*
 * XREFs of ??$AddProperty@M@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z @ 0x1801750E8
 * Callers:
 *     ?DebugDump@CColorBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180175BD0 (-DebugDump@CColorBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801C1400 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CSurfaceBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801FA770 (-DebugDump@CSurfaceBrush@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1800D3924 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     ??$emplace_back@UProperty@CTreeDumpNodeData@@@?$vector@UProperty@CTreeDumpNodeData@@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@QEAAAEAUProperty@CTreeDumpNodeData@@$$QEAU23@@Z @ 0x180173954 (--$emplace_back@UProperty@CTreeDumpNodeData@@@-$vector@UProperty@CTreeDumpNodeData@@V-$allocator.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180173AEC (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Floating_to_string@M@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PEBDM@Z @ 0x180175254 (--$_Floating_to_string@M@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@PEB.c)
 */

void __fastcall CVisualTreeDumpContext::AddProperty<float>(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rsi
  __int128 v5; // xmm0
  __int64 v6; // rbx
  __int128 *p_Src; // rdi
  __int64 v8; // rsi
  __int128 v9; // xmm0
  __int64 v10; // rbx
  __int128 v11; // [rsp+20h] [rbp-39h] BYREF
  unsigned __int64 v12; // [rsp+30h] [rbp-29h]
  __int64 v13; // [rsp+38h] [rbp-21h]
  __int128 v14; // [rsp+40h] [rbp-19h] BYREF
  __int64 v15; // [rsp+50h] [rbp-9h]
  __int64 v16; // [rsp+58h] [rbp-1h]
  __int128 Src; // [rsp+60h] [rbp+7h] BYREF
  __m128i si128; // [rsp+70h] [rbp+17h]

  LOBYTE(Src) = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  std::_Floating_to_string<float>(&v11);
  std::string::operator=(&Src, (__int64)&v11);
  std::string::_Tidy_deallocate((__int64)&v11);
  v4 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  if ( v4 >= 0x10 )
  {
    v6 = v4 | 0xF;
    if ( (v4 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
      v6 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(v6 + 1);
    memcpy_0((void *)v11, a2, v4 + 1);
    v13 = v6;
  }
  else
  {
    v5 = *(_OWORD *)a2;
    v13 = 15LL;
    v11 = v5;
  }
  p_Src = &Src;
  v12 = v4;
  v8 = si128.m128i_i64[0];
  if ( si128.m128i_i64[1] >= 0x10uLL )
    p_Src = (__int128 *)Src;
  if ( si128.m128i_i64[0] >= 0x10uLL )
  {
    v10 = si128.m128i_i64[0] | 0xF;
    if ( (si128.m128i_i64[0] | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v10 + 1);
    memcpy_0((void *)v14, p_Src, v8 + 1);
    v16 = v10;
  }
  else
  {
    v9 = *p_Src;
    v16 = 15LL;
    v14 = v9;
  }
  v15 = v8;
  std::vector<CTreeDumpNodeData::Property>::emplace_back<CTreeDumpNodeData::Property>(a1 + 64, (__int64)&v11);
  std::string::_Tidy_deallocate((__int64)&v14);
  std::string::_Tidy_deallocate((__int64)&v11);
  std::string::_Tidy_deallocate((__int64)&Src);
}
