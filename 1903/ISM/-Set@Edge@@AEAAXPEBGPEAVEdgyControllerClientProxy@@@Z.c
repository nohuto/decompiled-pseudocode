/*
 * XREFs of ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180102688
 * Callers:
 *     ??0Edge@@QEAA@PEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801016FC (--0Edge@@QEAA@PEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180101918 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800674EC (-InternalRelease@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18006F4D4 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?IsEdge@Edge@@QEBA_NPEBG@Z @ 0x180102214 (-IsEdge@Edge@@QEBA_NPEBG@Z.c)
 */

void __fastcall Edge::Set(Edge *this, const unsigned __int16 *a2, struct EdgyControllerClientProxy *a3)
{
  unsigned __int64 v5; // r8
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 3) )
  {
    if ( !Edge::IsEdge(this, a2) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        69LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edges.cpp",
        v6);
      __debugbreak();
    }
  }
  else
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
    std::wstring::assign((char *)this + 8, a2, v5);
  }
  if ( *((_QWORD *)this + 5) )
  {
    if ( !a3 || a3 != *((struct EdgyControllerClientProxy **)this + 5) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        79LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edges.cpp",
        v6);
      JUMPOUT(0x180102733LL);
    }
  }
  else if ( a3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)a3 + 6);
    v8 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = a3;
    Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalRelease(&v8);
  }
}
