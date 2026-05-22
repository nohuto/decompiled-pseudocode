/*
 * XREFs of ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x18013CED8
 * Callers:
 *     ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18013D3EC (-LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x18013C8A0 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x18013C930 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18013C930.c)
 *     ??$_Floating_to_string@M@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PEBDM@Z @ 0x18013CA58 (--$_Floating_to_string@M@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@PEB.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ISMTracing::GetVector3AsString(__int64 a1, float *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  void *v7; // rdx
  _QWORD *v8; // rax
  void *v10[2]; // [rsp+38h] [rbp-79h] BYREF
  __m128i v11; // [rsp+48h] [rbp-69h]
  void *v12[2]; // [rsp+58h] [rbp-59h] BYREF
  __m128i v13; // [rsp+68h] [rbp-49h]
  void *v14; // [rsp+78h] [rbp-39h] BYREF
  __m128i si128; // [rsp+88h] [rbp-29h]
  void *v16; // [rsp+98h] [rbp-19h] BYREF
  __m128i v17; // [rsp+A8h] [rbp-9h]
  void *v18; // [rsp+B8h] [rbp+7h] BYREF
  __m128i v19; // [rsp+C8h] [rbp+17h]
  void *v20[3]; // [rsp+D8h] [rbp+27h] BYREF
  unsigned __int64 v21; // [rsp+F0h] [rbp+3Fh]

  std::_Floating_to_string<float>(v20, (__int64)a2, a2[2]);
  std::_Floating_to_string<float>(v12, v4, a2[1]);
  std::_Floating_to_string<float>(v10, v5, *a2);
  v6 = (_QWORD *)std::operator+<char>((__int64)&v18, v10);
  v7 = (void *)std::operator+<char>((__int64)&v16, v6, v12);
  v8 = (_QWORD *)std::operator+<char>((__int64)&v14, v7);
  std::operator+<char>(a1, v8, v20);
  if ( si128.m128i_i64[1] >= 0x10uLL )
    std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)(si128.m128i_i64[1] + 1));
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOBYTE(v14) = 0;
  if ( v17.m128i_i64[1] >= 0x10uLL )
    std::_Deallocate<16,0>(v16, (const struct std::nothrow_t *)(v17.m128i_i64[1] + 1));
  v17 = _mm_load_si128((const __m128i *)&_xmm);
  LOBYTE(v16) = 0;
  if ( v19.m128i_i64[1] >= 0x10uLL )
    std::_Deallocate<16,0>(v18, (const struct std::nothrow_t *)(v19.m128i_i64[1] + 1));
  v19 = _mm_load_si128((const __m128i *)&_xmm);
  LOBYTE(v18) = 0;
  if ( v11.m128i_i64[1] >= 0x10uLL )
    std::_Deallocate<16,0>(v10[0], (const struct std::nothrow_t *)(v11.m128i_i64[1] + 1));
  v11 = _mm_load_si128((const __m128i *)&_xmm);
  LOBYTE(v10[0]) = 0;
  if ( v13.m128i_i64[1] >= 0x10uLL )
    std::_Deallocate<16,0>(v12[0], (const struct std::nothrow_t *)(v13.m128i_i64[1] + 1));
  v13 = _mm_load_si128((const __m128i *)&_xmm);
  LOBYTE(v12[0]) = 0;
  if ( v21 >= 0x10 )
    std::_Deallocate<16,0>(v20[0], (const struct std::nothrow_t *)(v21 + 1));
  return a1;
}
