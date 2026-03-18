/*
 * XREFs of ??$AddProperty@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@Z @ 0x18017261C
 * Callers:
 *     ?DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z @ 0x180173C88 (-DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1800D3924 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18016A4C4 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$emplace_back@UProperty@CTreeDumpNodeData@@@?$vector@UProperty@CTreeDumpNodeData@@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@QEAAAEAUProperty@CTreeDumpNodeData@@$$QEAU23@@Z @ 0x180173954 (--$emplace_back@UProperty@CTreeDumpNodeData@@@-$vector@UProperty@CTreeDumpNodeData@@V-$allocator.c)
 */

void __fastcall CVisualTreeDumpContext::AddProperty<std::string>(__int64 a1, _QWORD *a2, void *a3)
{
  unsigned __int64 v6; // rsi
  __int128 v7; // xmm0
  __int64 v8; // rbx
  void **v9; // rdi
  __int64 v10; // rsi
  __int128 v11; // xmm0
  __int64 v12; // rbx
  void *Src[2]; // [rsp+20h] [rbp-49h] BYREF
  __m128i si128; // [rsp+30h] [rbp-39h]
  __int128 v15; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int64 v16; // [rsp+50h] [rbp-19h]
  __int64 v17; // [rsp+58h] [rbp-11h]
  __int128 v18; // [rsp+60h] [rbp-9h] BYREF
  __int64 v19; // [rsp+70h] [rbp+7h]
  __int64 v20; // [rsp+78h] [rbp+Fh]

  LOBYTE(Src[0]) = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  std::string::operator=(Src, a3);
  v6 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  if ( v6 >= 0x10 )
  {
    v8 = v6 | 0xF;
    if ( (v6 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(v8 + 1);
    memcpy_0((void *)v15, a2, v6 + 1);
    v17 = v8;
  }
  else
  {
    v7 = *(_OWORD *)a2;
    v17 = 15LL;
    v15 = v7;
  }
  v9 = Src;
  v16 = v6;
  v10 = si128.m128i_i64[0];
  if ( si128.m128i_i64[1] >= 0x10uLL )
    v9 = (void **)Src[0];
  if ( si128.m128i_i64[0] >= 0x10uLL )
  {
    v12 = si128.m128i_i64[0] | 0xF;
    if ( (si128.m128i_i64[0] | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v18 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12 + 1);
    memcpy_0((void *)v18, v9, v10 + 1);
    v20 = v12;
  }
  else
  {
    v11 = *(_OWORD *)v9;
    v20 = 15LL;
    v18 = v11;
  }
  v19 = v10;
  std::vector<CTreeDumpNodeData::Property>::emplace_back<CTreeDumpNodeData::Property>(a1 + 64, &v15);
  std::string::_Tidy_deallocate((__int64)&v18);
  std::string::_Tidy_deallocate((__int64)&v15);
  std::string::_Tidy_deallocate((__int64)Src);
  std::string::_Tidy_deallocate((__int64)a3);
}
