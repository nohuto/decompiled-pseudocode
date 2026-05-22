/*
 * XREFs of ?GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAPEAVEdgyControllerClientProxy@@PEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAW4EdgyExperienceRunState@5678@@Z @ 0x1800CBEF4
 * Callers:
 *     ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x1800CE334 (-GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z.c)
 * Callees:
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1800CB5A0 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?FindEdgeWithInteraction@Edges@@AEBAHPEBGI@Z @ 0x1800CB66C (-FindEdgeWithInteraction@Edges@@AEBAHPEBGI@Z.c)
 */

bool __fastcall Edges::GetCandidateConfiguration(
        Edges *this,
        const struct CandidateIdentity *a2,
        struct EdgyControllerClientProxy **a3,
        enum Windows::UI::Internal::Input::EdgyInputRouting *a4,
        enum Windows::UI::Internal::Input::EdgyExperienceRunState *a5)
{
  int v8; // r8d
  int EdgeWithInteraction; // eax
  __int64 v10; // rdx
  bool result; // al

  *a3 = 0LL;
  *(_DWORD *)a4 = 0;
  *(_DWORD *)a5 = 0;
  v8 = *((_DWORD *)a2 + 8);
  if ( v8 )
  {
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      a2 = *(const struct CandidateIdentity **)a2;
    EdgeWithInteraction = Edges::FindEdgeWithInteraction(this, (const unsigned __int16 *)a2, v8);
  }
  else
  {
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      a2 = *(const struct CandidateIdentity **)a2;
    EdgeWithInteraction = Edges::FindEdge(this, (const unsigned __int16 *)a2);
  }
  if ( EdgeWithInteraction < 0 )
    return 0;
  v10 = 104LL * EdgeWithInteraction;
  *a3 = *(struct EdgyControllerClientProxy **)(v10 + *(_QWORD *)this + 40);
  *(_DWORD *)a4 = *(_DWORD *)(v10 + *(_QWORD *)this + 68);
  result = 1;
  *(_DWORD *)a5 = *(_DWORD *)(v10 + *(_QWORD *)this + 48);
  return result;
}
