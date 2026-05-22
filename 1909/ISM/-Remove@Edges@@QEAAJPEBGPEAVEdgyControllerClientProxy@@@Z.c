/*
 * XREFs of ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801022D4
 * Callers:
 *     ?OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ @ 0x18006EB30 (-OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180025270 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800672AC (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18006F254 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1801018E0 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z @ 0x180101FB8 (-IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z.c)
 *     ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x1801027C4 (-erase@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 */

__int64 __fastcall Edges::Remove(Edges *this, const unsigned __int16 *a2, struct EdgyControllerClientProxy *a3)
{
  int Edge; // eax
  __int64 v6; // rsi
  __int64 v7; // rcx
  const char *v8; // r9
  _WORD *v9; // rdx
  _BYTE v11[8]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v12[4]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  Edge = Edges::FindEdge(this, a2);
  if ( Edge < 0 )
    return 2147942487LL;
  v6 = 104LL * Edge;
  if ( Edge::IsClientPresent(v6 + *(_QWORD *)this, 2) )
  {
    Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease((__int64 *)(v7 + 40));
  }
  else
  {
    if ( !a3 || a3 != *(struct EdgyControllerClientProxy **)(v7 + 40) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        393LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edges.cpp",
        v8);
      __debugbreak();
    }
    v9 = (_WORD *)(v7 + 8);
    if ( *(_QWORD *)(v7 + 32) >= 8uLL )
      v9 = *(_WORD **)v9;
    std::wstring::wstring(v12, v9);
    std::vector<Edge>::erase(this, v11, v6 + *(_QWORD *)this);
    std::wstring::_Tidy_deallocate((__int64)v12);
  }
  return 0LL;
}
