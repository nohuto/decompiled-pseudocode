/*
 * XREFs of ?FindEdgeWithInteraction@Edges@@AEBAHPEBGI@Z @ 0x18010196C
 * Callers:
 *     ?FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z @ 0x1801018B0 (-FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z @ 0x180101FB8 (-IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z.c)
 *     ?IsEdge@Edge@@QEBA_NPEBG@Z @ 0x180101FE4 (-IsEdge@Edge@@QEBA_NPEBG@Z.c)
 */

__int64 __fastcall Edges::FindEdgeWithInteraction(Edges *this, const unsigned __int16 *a2, int a3)
{
  int i; // ebx
  __int64 v7; // rcx
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 && a2 && *a2 )
  {
    for ( i = 0; i < (int)((*((_QWORD *)this + 1) - *(_QWORD *)this) / 104LL); ++i )
    {
      if ( Edge::IsEdge((Edge *)(*(_QWORD *)this + 104LL * i), a2) )
      {
        v7 = *(_QWORD *)this + 104LL * i;
        if ( (!*(_DWORD *)(v7 + 64) || *(_DWORD *)(v7 + 64) != a3) && !(unsigned __int8)Edge::IsClientPresent(v7, 1LL) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            598LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edges.cpp",
            v8);
          __debugbreak();
        }
        return (unsigned int)i;
      }
    }
  }
  return 0xFFFFFFFFLL;
}
