/*
 * XREFs of ?SaveTextureFromSource@CDebugTreeDumper@@AEAAJPEAUID3D11Texture2D@@IPEAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180175648
 * Callers:
 *     ?DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z @ 0x1801753D8 (-DumpBitmapRealization@CDebugTreeDumper@@AEAAJPEAVIBitmapRealization@@PEAX@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800459EC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180045A60 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18015A2F8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@0@Z @ 0x180173BC4 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ??$_UIntegral_to_buff@G_K@std@@YAPEAGPEAG_K@Z @ 0x18017505C (--$_UIntegral_to_buff@G_K@std@@YAPEAGPEAG_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180175DE8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x1801764F4 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z.c)
 *     ?DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18021C000 (-DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 */

__int64 __fastcall CDebugTreeDumper::SaveTextureFromSource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        signed __int64 a4,
        char *a5)
{
  _WORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // ebx
  __int128 Src; // [rsp+20h] [rbp-91h] BYREF
  __int128 v17; // [rsp+30h] [rbp-81h]
  char v18[16]; // [rsp+40h] [rbp-71h] BYREF
  __m128i si128; // [rsp+50h] [rbp-61h]
  _OWORD v20[2]; // [rsp+60h] [rbp-51h] BYREF
  void *v21[9]; // [rsp+80h] [rbp-31h] BYREF
  _WORD v22[3]; // [rsp+CAh] [rbp+19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+57h]

  if ( a4 >= 0 )
  {
    v7 = std::_UIntegral_to_buff<unsigned short,unsigned __int64>(v22, a4);
  }
  else
  {
    v7 = std::_UIntegral_to_buff<unsigned short,unsigned __int64>(v22, -a4) - 1;
    *v7 = 45;
  }
  *(_WORD *)v18 = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( v7 != v22 )
    std::wstring::assign(v18, v7, v22 - v7);
  v8 = std::wstring::insert(v18);
  v17 = 0LL;
  Src = *(_OWORD *)v8;
  v17 = *(_OWORD *)(v8 + 16);
  *(_QWORD *)(v8 + 16) = 0LL;
  *(_QWORD *)(v8 + 24) = 7LL;
  *(_WORD *)v8 = 0;
  v9 = std::wstring::append(&Src);
  v10 = *(_OWORD *)v9;
  v11 = *(_OWORD *)(v9 + 16);
  *(_QWORD *)(v9 + 16) = 0LL;
  *(_QWORD *)(v9 + 24) = 7LL;
  v20[0] = v10;
  *(_WORD *)v9 = 0;
  v20[1] = v11;
  std::wstring::_Tidy_deallocate(&Src);
  std::wstring::_Tidy_deallocate(v18);
  std::wstring::operator=(a5, (unsigned __int64 *)v20);
  std::operator+<unsigned short>(v21, a1 + 64, (__int64)v20);
  v13 = DebugSaveTexture(a2, v12, v21);
  v14 = v13;
  if ( v13 >= 0 )
    v14 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCF,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\debugtreedumper.cpp",
      (const char *)(unsigned int)v13);
  std::wstring::_Tidy_deallocate(v21);
  std::wstring::_Tidy_deallocate(v20);
  return v14;
}
