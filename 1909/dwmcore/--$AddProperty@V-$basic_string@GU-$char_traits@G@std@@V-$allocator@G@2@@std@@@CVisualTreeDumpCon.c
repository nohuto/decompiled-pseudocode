/*
 * XREFs of ??$AddProperty@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180172778
 * Callers:
 *     ?DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z @ 0x180173C88 (-DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18004CB8C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1800D3924 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     ??$emplace_back@UProperty@CTreeDumpNodeData@@@?$vector@UProperty@CTreeDumpNodeData@@V?$allocator@UProperty@CTreeDumpNodeData@@@std@@@std@@QEAAAEAUProperty@CTreeDumpNodeData@@$$QEAU23@@Z @ 0x180173954 (--$emplace_back@UProperty@CTreeDumpNodeData@@@-$vector@UProperty@CTreeDumpNodeData@@V-$allocator.c)
 *     ??0?$wstring_convert@V?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1801739CC (--0-$wstring_convert@V-$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@.c)
 *     ??1?$wstring_convert@V?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@UEAA@XZ @ 0x180173A6C (--1-$wstring_convert@V-$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180173AEC (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Construct_lv_contents@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXAEBV12@@Z @ 0x180174294 (-_Construct_lv_contents@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXAEBV12.c)
 *     ?to_bytes@?$wstring_convert@V?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBG0@Z @ 0x180174E70 (-to_bytes@-$wstring_convert@V-$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$alloc.c)
 */

__int64 __fastcall CVisualTreeDumpContext::AddProperty<std::wstring>(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // r8
  unsigned __int64 v7; // rsi
  __int128 v8; // xmm0
  __int64 v9; // rbx
  __int64 v10; // rdi
  void **v11; // rsi
  __int128 v12; // xmm0
  __int64 v13; // rbx
  __int128 v15; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v16; // [rsp+30h] [rbp-D0h]
  __int64 v17; // [rsp+38h] [rbp-C8h]
  __int128 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h]
  __int64 v20; // [rsp+58h] [rbp-A8h]
  _QWORD v21[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h]
  unsigned __int64 v23; // [rsp+78h] [rbp-88h]
  void *Src[2]; // [rsp+80h] [rbp-80h] BYREF
  __m128i si128; // [rsp+90h] [rbp-70h]
  _BYTE v26[128]; // [rsp+A0h] [rbp-60h] BYREF

  LOBYTE(Src[0]) = 0;
  v22 = 0LL;
  v23 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  std::wstring::_Construct_lv_contents(v21, a3);
  std::wstring_convert<std::codecvt_utf8_utf16<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::wstring_convert<std::codecvt_utf8_utf16<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>(v26);
  v6 = v21;
  if ( v23 >= 8 )
    v6 = (_QWORD *)v21[0];
  std::wstring_convert<std::codecvt_utf8_utf16<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::to_bytes(
    v26,
    &v15,
    v6,
    (char *)v6 + 2 * v22);
  std::string::operator=(Src, &v15);
  std::string::_Tidy_deallocate((__int64)&v15);
  std::wstring_convert<std::codecvt_utf8_utf16<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::~wstring_convert<std::codecvt_utf8_utf16<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>(v26);
  std::wstring::_Tidy_deallocate(v21);
  v7 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  if ( v7 >= 0x10 )
  {
    v9 = v7 | 0xF;
    if ( (v7 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
      v9 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(v9 + 1);
    memcpy_0((void *)v15, a2, v7 + 1);
    v17 = v9;
  }
  else
  {
    v8 = *(_OWORD *)a2;
    v17 = 15LL;
    v15 = v8;
  }
  v10 = si128.m128i_i64[0];
  v16 = v7;
  v11 = Src;
  if ( si128.m128i_i64[1] >= 0x10uLL )
    v11 = (void **)Src[0];
  if ( si128.m128i_i64[0] >= 0x10uLL )
  {
    v13 = si128.m128i_i64[0] | 0xF;
    if ( (si128.m128i_i64[0] | 0xFuLL) > 0x7FFFFFFFFFFFFFFFLL )
      v13 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v18 = std::_Allocate<16,std::_Default_allocate_traits,0>(v13 + 1);
    memcpy_0((void *)v18, v11, v10 + 1);
    v20 = v13;
  }
  else
  {
    v12 = *(_OWORD *)v11;
    v20 = 15LL;
    v18 = v12;
  }
  v19 = v10;
  std::vector<CTreeDumpNodeData::Property>::emplace_back<CTreeDumpNodeData::Property>(a1 + 64, &v15);
  std::string::_Tidy_deallocate((__int64)&v18);
  std::string::_Tidy_deallocate((__int64)&v15);
  std::string::_Tidy_deallocate((__int64)Src);
  return std::wstring::_Tidy_deallocate(a3);
}
