/*
 * XREFs of ?GetRunState@Edge@@QEBA?AW4EdgyExperienceRunState@Input@Internal@UI@Windows@@XZ @ 0x1800CAF70
 * Callers:
 *     ?HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z @ 0x1800CAFCC (-HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z.c)
 *     ?GetCandidate@Edges@@QEAA_NPEBV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@PEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@Windows@@PEAPEAUCandidateIdentity@@@Z @ 0x1800CBB94 (-GetCandidate@Edges@@QEAA_NPEBV-$vector@UCandidateIdentity@@V-$allocator@UCandidateIdentity@@@st.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Edge::GetRunState(__int64 a1)
{
  __int64 v1; // rdx
  bool v2; // al
  unsigned int v4; // eax

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  if ( v1 )
    v2 = *(_QWORD *)(a1 + 40) != 0LL;
  if ( v2 )
    return *(unsigned int *)(a1 + 48);
  v4 = 0;
  if ( v1 )
  {
    LOBYTE(v4) = *(_QWORD *)(a1 + 40) != 0LL;
    if ( *(_DWORD *)(a1 + 64) )
      v4 = 2;
  }
  if ( (unsigned __int8)(v4 >> 1) || !*(_DWORD *)(a1 + 52) )
    return 0LL;
  else
    return 4LL;
}
