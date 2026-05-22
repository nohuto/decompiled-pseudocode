/*
 * XREFs of ?OnSwipe@EdgyProcessorTarget@@AEAA?AW4State@1@_NH@Z @ 0x180103C4C
 * Callers:
 *     ?OnFlick@EdgyProcessorTarget@@AEAAJXZ @ 0x1801039AC (-OnFlick@EdgyProcessorTarget@@AEAAJXZ.c)
 *     ?OnHorizontalDrag@EdgyProcessorTarget@@AEAAJXZ @ 0x180103B54 (-OnHorizontalDrag@EdgyProcessorTarget@@AEAAJXZ.c)
 *     ?OnVerticalDrag@EdgyProcessorTarget@@AEAAJXZ @ 0x180103EF4 (-OnVerticalDrag@EdgyProcessorTarget@@AEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SelectCandidate@EdgyImpl@@QEAA_NPEBUD2D_VECTOR_2F@@@Z @ 0x180104A3C (-SelectCandidate@EdgyImpl@@QEAA_NPEBUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnSwipe(__int64 a1, char a2, int a3)
{
  unsigned int v3; // ebx
  const char *v5; // r9
  __int128 v6; // xmm1
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct D2D_VECTOR_2F v9; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v9 = 0LL;
  if ( a3 )
  {
    if ( a2 )
      v9.x = (float)a3;
    else
      v9.y = (float)a3;
    if ( EdgyImpl::SelectCandidate((EdgyImpl *)(*(_QWORD *)(a1 + 120) + 80LL), &v9) )
    {
      if ( *(_DWORD *)(a1 + 48) == -1 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          817LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
          v5);
        __debugbreak();
      }
      v3 = 2;
      v6 = *(_OWORD *)(a1 + 64);
      *(_OWORD *)(a1 + 80) = *(_OWORD *)(a1 + 48);
      *(_OWORD *)(a1 + 96) = v6;
    }
  }
  return v3;
}
