/*
 * XREFs of ?GetCandidate@Edges@@QEAA_NPEBV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@PEBUD2D_VECTOR_2F@@PEAW4EdgyExperienceRunState@Input@Internal@UI@Windows@@PEAPEAUCandidateIdentity@@@Z @ 0x1800CBB94
 * Callers:
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800CD2A0 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProc.c)
 *     ?OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x1800CD788 (-OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z.c)
 *     ?OnSwipe@EdgyProcessorTarget@@AEAA?AW4State@1@_NH@Z @ 0x1800CDE30 (-OnSwipe@EdgyProcessorTarget@@AEAA-AW4State@1@_NH@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18004B594 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetRunState@Edge@@QEBA?AW4EdgyExperienceRunState@Input@Internal@UI@Windows@@XZ @ 0x1800CAF70 (-GetRunState@Edge@@QEBA-AW4EdgyExperienceRunState@Input@Internal@UI@Windows@@XZ.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1800CB5A0 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Edges::GetCandidate(Edges *this, __int64 *a2, float *a3, _DWORD *a4, _QWORD *a5)
{
  Edges *v7; // r9
  __int64 v9; // rdi
  __int64 v10; // rbx
  int v11; // r13d
  const unsigned __int16 *v12; // rdx
  int Edge; // esi
  const unsigned __int16 *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rbp
  _QWORD *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  float v20; // xmm1_4
  float v21; // xmm1_4
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // r8d
  char v26; // al
  char v27; // al
  bool v28; // zf
  char v29; // al
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v32; // [rsp+88h] [rbp+10h]
  __int64 v33; // [rsp+A0h] [rbp+28h]
  _DWORD *v34; // [rsp+A0h] [rbp+28h]

  v7 = this;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0LL;
  if ( !a2 )
    return 0;
  v9 = *a2;
  v10 = a2[1];
  v32 = v10;
  if ( *a2 == v10 )
    return 0;
  while ( 1 )
  {
    v11 = *(_DWORD *)(v9 + 32);
    if ( v11 )
    {
      v14 = (const unsigned __int16 *)v9;
      if ( *(_QWORD *)(v9 + 24) >= 8uLL )
        v14 = *(const unsigned __int16 **)v9;
      if ( v14
        && *v14
        && (Edge = 0, v33 = 0LL, v15 = *(_QWORD *)v7, (int)((*((_QWORD *)v7 + 1) - *(_QWORD *)v7) / 104LL) > 0) )
      {
        v16 = 0LL;
        while ( 1 )
        {
          v17 = (_QWORD *)(v15 + v16 + 8);
          if ( v17[3] >= 8uLL )
            v17 = (_QWORD *)*v17;
          v18 = _o__wcsicmp(v17);
          v7 = this;
          if ( !v18 )
            break;
          ++Edge;
          ++v33;
          v16 += 104LL;
          v15 = *(_QWORD *)this;
          if ( Edge >= (int)((*((_QWORD *)this + 1) - *(_QWORD *)this) / 104LL) )
            goto LABEL_21;
        }
        v23 = 104 * v33;
        v24 = *(_QWORD *)this;
        v25 = *(_DWORD *)(104 * v33 + *(_QWORD *)this + 64);
        if ( !v25 || (v26 = 1, v25 != v11) )
          v26 = 0;
        if ( v26 )
          goto LABEL_43;
        v27 = 0;
        if ( *(_QWORD *)(v23 + v24 + 24) )
        {
          v27 = *(_QWORD *)(v23 + v24 + 40) != 0LL;
          if ( v25 )
            v27 |= 2u;
        }
        v28 = (v27 & 1) == 0;
        v29 = 0;
        if ( !v28 )
LABEL_43:
          v29 = 1;
        if ( !v29 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x235,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edges.cpp",
            (const char *)this);
          JUMPOUT(0x1800CBE49LL);
        }
      }
      else
      {
LABEL_21:
        Edge = -1;
      }
      v10 = v32;
    }
    else
    {
      v12 = (const unsigned __int16 *)v9;
      if ( *(_QWORD *)(v9 + 24) >= 8uLL )
        v12 = *(const unsigned __int16 **)v9;
      Edge = Edges::FindEdge(v7, v12);
      v7 = this;
    }
    if ( Edge >= 0 )
    {
      if ( !a3 )
        break;
      v19 = 104LL * Edge;
      v20 = *(float *)(v19 + *(_QWORD *)v7 + 56);
      if ( v20 > 0.0 && *a3 > 0.0 )
        break;
      if ( v20 < 0.0 && *a3 < 0.0 )
        break;
      v21 = *(float *)(v19 + *(_QWORD *)v7 + 60);
      if ( v21 > 0.0 && a3[1] > 0.0 )
        break;
      if ( v21 < 0.0 && a3[1] < 0.0 )
        break;
    }
    v9 += 40LL;
    if ( v9 == v10 )
      return 0;
  }
  if ( a4 )
    *a4 = Edge::GetRunState(*(_QWORD *)v7 + 104LL * Edge);
  if ( a5 )
  {
    v34 = operator new(0x28uLL);
    std::wstring::wstring(v34, v9);
    v34[8] = *(_DWORD *)(v9 + 32);
    *a5 = v34;
  }
  return 1;
}
