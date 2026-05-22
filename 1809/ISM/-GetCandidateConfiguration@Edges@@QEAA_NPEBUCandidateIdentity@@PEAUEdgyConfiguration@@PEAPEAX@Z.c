/*
 * XREFs of ?GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAUEdgyConfiguration@@PEAPEAX@Z @ 0x1800CBE50
 * Callers:
 *     ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x1800CE334 (-GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z.c)
 * Callees:
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1800CB5A0 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?FindEdgeWithInteraction@Edges@@AEBAHPEBGI@Z @ 0x1800CB66C (-FindEdgeWithInteraction@Edges@@AEBAHPEBGI@Z.c)
 */

char __fastcall Edges::GetCandidateConfiguration(
        Edges *this,
        const struct CandidateIdentity *a2,
        struct EdgyConfiguration *a3,
        void **a4)
{
  int v7; // r8d
  int EdgeWithInteraction; // eax
  __int64 v9; // rcx
  __int64 v10; // rax

  *(_QWORD *)a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v7 = *((_DWORD *)a2 + 8);
  if ( v7 )
  {
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      a2 = *(const struct CandidateIdentity **)a2;
    EdgeWithInteraction = Edges::FindEdgeWithInteraction(this, (const unsigned __int16 *)a2, v7);
  }
  else
  {
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      a2 = *(const struct CandidateIdentity **)a2;
    EdgeWithInteraction = Edges::FindEdge(this, (const unsigned __int16 *)a2);
  }
  if ( EdgeWithInteraction < 0 )
    return 0;
  v9 = 104LL * EdgeWithInteraction;
  v10 = *(_QWORD *)this;
  *(_OWORD *)a3 = *(_OWORD *)(v9 + *(_QWORD *)this + 52);
  *((_OWORD *)a3 + 1) = *(_OWORD *)(v9 + v10 + 68);
  *((_QWORD *)a3 + 4) = *(_QWORD *)(v9 + v10 + 84);
  if ( a4 )
    *a4 = *(void **)(v9 + *(_QWORD *)this);
  return 1;
}
