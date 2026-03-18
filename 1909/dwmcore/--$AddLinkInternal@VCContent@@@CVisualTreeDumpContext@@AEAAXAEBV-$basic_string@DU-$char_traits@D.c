/*
 * XREFs of ??$AddLinkInternal@VCContent@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCContent@@_N@Z @ 0x1801C072C
 * Callers:
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801C1400 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1800D3924 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     ??$_Emplace_reallocate@ULink@CTreeDumpNodeData@@@?$vector@ULink@CTreeDumpNodeData@@V?$allocator@ULink@CTreeDumpNodeData@@@std@@@std@@QEAAPEAULink@CTreeDumpNodeData@@QEAU23@$$QEAU23@@Z @ 0x180172D2C (--$_Emplace_reallocate@ULink@CTreeDumpNodeData@@@-$vector@ULink@CTreeDumpNodeData@@V-$allocator@.c)
 *     ??$RegisterNodeForVisit@VCContent@@@CDebugTreeDumper@@QEAAXPEAVCContent@@_N@Z @ 0x1801C09CC (--$RegisterNodeForVisit@VCContent@@@CDebugTreeDumper@@QEAAXPEAVCContent@@_N@Z.c)
 */

void __fastcall CVisualTreeDumpContext::AddLinkInternal<CContent>(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r15
  __int128 *v5; // rdi
  __int128 v7; // xmm0
  __int64 v8; // rbx
  __int64 v9; // rdx
  __m128i si128; // xmm1
  __m128i v11; // xmm0
  __int128 v12; // [rsp+20h] [rbp-30h] BYREF
  __m128i v13; // [rsp+30h] [rbp-20h]
  __int64 v14; // [rsp+40h] [rbp-10h]

  v4 = *(_QWORD *)(a2 + 16);
  v5 = (__int128 *)a2;
  if ( *(_QWORD *)(a2 + 24) >= 0x10uLL )
    v5 = *(__int128 **)a2;
  if ( v4 >= 0x10 )
  {
    v8 = v4 | 0xF;
    if ( (v4 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v8 + 1);
    memcpy_0((void *)v12, v5, v4 + 1);
    v7 = v12;
    v13.m128i_i64[1] = v8;
  }
  else
  {
    v7 = *v5;
    v13.m128i_i64[1] = 15LL;
    v12 = v7;
  }
  v9 = a1[6];
  v13.m128i_i64[0] = v4;
  v14 = a3;
  if ( a1[7] == v9 )
  {
    std::vector<CTreeDumpNodeData::Link>::_Emplace_reallocate<CTreeDumpNodeData::Link>(a1 + 5, v9, (__int64)&v12);
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    *(_OWORD *)v9 = v7;
    LOBYTE(v12) = 0;
    v11 = v13;
    v13 = si128;
    *(__m128i *)(v9 + 16) = v11;
    *(_QWORD *)(v9 + 32) = a3;
    a1[6] += 40LL;
  }
  std::string::_Tidy_deallocate((__int64)&v12);
  if ( a3 )
    CDebugTreeDumper::RegisterNodeForVisit<CContent>(a1[14], a3);
}
