/*
 * XREFs of ?FindEdgeWithInteraction@Edges@@AEBAHPEBGI@Z @ 0x1800CB66C
 * Callers:
 *     ?GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAUEdgyConfiguration@@PEAPEAX@Z @ 0x1800CBE50 (-GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAUEdgyConfiguration@@PEAPEAX@Z.c)
 *     ?GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAPEAVEdgyControllerClientProxy@@PEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAW4EdgyExperienceRunState@5678@@Z @ 0x1800CBEF4 (-GetCandidateConfiguration@Edges@@QEAA_NPEBUCandidateIdentity@@PEAPEAVEdgyControllerClientProxy@.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Edges::FindEdgeWithInteraction(Edges *this, const unsigned __int16 *a2, int a3)
{
  __int64 v5; // r8
  unsigned int v6; // edi
  __int64 i; // r14
  _QWORD *v8; // rcx
  int v9; // eax
  const char *v10; // r9
  __int64 v12; // rdx
  int v13; // ecx
  bool v14; // al
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a3 )
    return 0xFFFFFFFFLL;
  if ( !a2 )
    return 0xFFFFFFFFLL;
  if ( !*a2 )
    return 0xFFFFFFFFLL;
  v5 = *(_QWORD *)this;
  v6 = 0;
  if ( (int)((*((_QWORD *)this + 1) - *(_QWORD *)this) / 104LL) <= 0 )
    return 0xFFFFFFFFLL;
  for ( i = 0LL; ; i += 104LL )
  {
    v8 = (_QWORD *)(i + v5 + 8);
    if ( v8[3] >= 8uLL )
      v8 = (_QWORD *)*v8;
    v9 = _o__wcsicmp(v8);
    v5 = *(_QWORD *)this;
    if ( !v9 )
      break;
    if ( (int)++v6 >= (int)((*((_QWORD *)this + 1) - v5) / 104) )
      return 0xFFFFFFFFLL;
  }
  v12 = 104LL * (int)v6;
  v13 = *(_DWORD *)(v12 + v5 + 64);
  if ( !v13 || v13 != a3 )
  {
    v14 = 0;
    if ( *(_QWORD *)(v12 + v5 + 24) )
      v14 = *(_QWORD *)(v12 + v5 + 40) != 0LL;
    if ( !v14 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x235,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edges.cpp",
        v10);
      JUMPOUT(0x1800CB78CLL);
    }
  }
  return v6;
}
