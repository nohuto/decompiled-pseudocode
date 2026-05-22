/*
 * XREFs of ?GetCandidate@Edges@@QEAA_NPEBV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@PEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@Windows@@PEAPEAUCandidateIdentity@@@Z @ 0x180101A48
 * Callers:
 *     ?HasCandidates@EdgyImpl@@QEAA_NXZ @ 0x180104664 (-HasCandidates@EdgyImpl@@QEAA_NXZ.c)
 *     ?SelectCandidate@EdgyImpl@@QEAA_NPEBUD2D_VECTOR_2F@@@Z @ 0x18010480C (-SelectCandidate@EdgyImpl@@QEAA_NPEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180088814 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z @ 0x1801018B0 (-FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z.c)
 *     ?GetRunState@Edge@@QEBA?AW4EdgyExperienceRunState@Input@Internal@UI@Windows@@XZ @ 0x180101CD4 (-GetRunState@Edge@@QEBA-AW4EdgyExperienceRunState@Input@Internal@UI@Windows@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Edges::GetCandidate(
        Edges *this,
        const struct CandidateIdentity **a2,
        float *a3,
        _DWORD *a4,
        _QWORD *a5)
{
  const struct CandidateIdentity *v9; // rdi
  const struct CandidateIdentity *v10; // r14
  int Edge; // eax
  __int64 v12; // rdx
  float v13; // xmm1_4
  float v14; // xmm1_4
  _DWORD *v16; // [rsp+80h] [rbp+28h]

  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0LL;
  if ( !a2 )
    return 0;
  v9 = *a2;
  v10 = a2[1];
  if ( *a2 == v10 )
    return 0;
  while ( 1 )
  {
    Edge = Edges::FindEdge(this, v9);
    if ( Edge >= 0 )
    {
      if ( !a3 )
        break;
      v12 = 104LL * Edge;
      v13 = *(float *)(v12 + *(_QWORD *)this + 56);
      if ( v13 > 0.0 && *a3 > 0.0 )
        break;
      if ( v13 < 0.0 && *a3 < 0.0 )
        break;
      v14 = *(float *)(v12 + *(_QWORD *)this + 60);
      if ( v14 > 0.0 && a3[1] > 0.0 )
        break;
      if ( v14 < 0.0 && a3[1] < 0.0 )
        break;
    }
    v9 = (const struct CandidateIdentity *)((char *)v9 + 40);
    if ( v9 == v10 )
      return 0;
  }
  if ( a4 )
    *a4 = Edge::GetRunState(*(_QWORD *)this + 104LL * Edge);
  if ( a5 )
  {
    v16 = operator new(0x28uLL);
    std::wstring::wstring((__int64)v16);
    v16[8] = *((_DWORD *)v9 + 8);
    *a5 = v16;
  }
  return 1;
}
