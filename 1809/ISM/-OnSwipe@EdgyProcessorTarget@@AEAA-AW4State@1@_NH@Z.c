/*
 * XREFs of ?OnSwipe@EdgyProcessorTarget@@AEAA?AW4State@1@_NH@Z @ 0x1800CDE30
 * Callers:
 *     ?OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z @ 0x1800CDA00 (-OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z.c)
 *     ?OnFlick@EdgyProcessorTarget@@AEAAJXZ @ 0x1800CDD5C (-OnFlick@EdgyProcessorTarget@@AEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetCandidate@Edges@@QEAA_NPEBV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@PEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@Windows@@PEAPEAUCandidateIdentity@@@Z @ 0x1800CBB94 (-GetCandidate@Edges@@QEAA_NPEBV-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@st.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnSwipe(__int64 a1, char a2, int a3)
{
  unsigned int v3; // edi
  __int64 v5; // rsi
  const char *v6; // r9
  __int128 v7; // xmm1
  __int64 v9[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v12 = 0LL;
  if ( a3 )
  {
    if ( a2 )
      *(float *)&v12 = (float)a3;
    else
      *((float *)&v12 + 1) = (float)a3;
    v5 = *(_QWORD *)(a1 + 120);
    v9[0] = 0LL;
    if ( Edges::GetCandidate((Edges *)(*(_QWORD *)(v5 + 104) + 72LL), *(__int64 **)(v5 + 80), (float *)&v12, &v11, v9) )
    {
      *(_QWORD *)(v5 + 88) = v9[0];
      if ( *(_DWORD *)(a1 + 48) == -1 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x327,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
          v6);
        JUMPOUT(0x1800CDEE8LL);
      }
      v3 = 2;
      v7 = *(_OWORD *)(a1 + 64);
      *(_OWORD *)(a1 + 80) = *(_OWORD *)(a1 + 48);
      *(_OWORD *)(a1 + 96) = v7;
    }
  }
  return v3;
}
