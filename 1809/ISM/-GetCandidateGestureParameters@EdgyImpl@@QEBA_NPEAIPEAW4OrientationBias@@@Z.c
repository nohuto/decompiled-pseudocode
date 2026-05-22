/*
 * XREFs of ?GetCandidateGestureParameters@EdgyImpl@@QEBA_NPEAIPEAW4OrientationBias@@@Z @ 0x1800CE42C
 * Callers:
 *     ?ConfigureRecognizer@EdgyProcessorTarget@@AEAAJXZ @ 0x1800CD840 (-ConfigureRecognizer@EdgyProcessorTarget@@AEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1800CB5A0 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 */

char __fastcall EdgyImpl::GetCandidateGestureParameters(EdgyImpl *this, unsigned int *a2, enum OrientationBias *a3)
{
  unsigned int *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // r12
  int v6; // r13d
  int v7; // r15d
  __int64 v8; // rdi
  const unsigned __int16 *v9; // rdx
  int Edge; // ebp
  _WORD *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r14
  _QWORD *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // edx
  int v18; // eax
  __int64 v19; // rdx
  int v20; // ecx
  bool v21; // al
  bool v22; // zf
  char v23; // al
  __int64 v25; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  EdgyImpl *v27; // [rsp+70h] [rbp+8h]

  v27 = this;
  v3 = a2;
  v4 = **(_QWORD **)this;
  v5 = *(_QWORD *)(*(_QWORD *)this + 8LL);
  if ( v4 == v5 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_DWORD *)(v4 + 32);
    v8 = *((_QWORD *)this + 3);
    if ( v7 )
    {
      v11 = (_WORD *)v4;
      if ( *(_QWORD *)(v4 + 24) >= 8uLL )
        v11 = *(_WORD **)v4;
      if ( v11
        && *v11
        && (v12 = *(_QWORD *)(v8 + 72), Edge = 0, v25 = 0LL, (int)((*(_QWORD *)(v8 + 80) - v12) / 104) > 0) )
      {
        v13 = 0LL;
        while ( 1 )
        {
          v14 = (_QWORD *)(v13 + v12 + 8);
          if ( v14[3] >= 8uLL )
            v14 = (_QWORD *)*v14;
          v15 = _o__wcsicmp(v14);
          v12 = *(_QWORD *)(v8 + 72);
          if ( !v15 )
            break;
          ++v25;
          ++Edge;
          v13 += 104LL;
          if ( Edge >= (int)((*(_QWORD *)(v8 + 80) - v12) / 104) )
            goto LABEL_17;
        }
        v19 = 104 * v25;
        v20 = *(_DWORD *)(104 * v25 + v12 + 64);
        if ( v20 && v20 == v7 )
          goto LABEL_32;
        v21 = 0;
        if ( *(_QWORD *)(v19 + v12 + 24) )
          v21 = *(_QWORD *)(v19 + v12 + 40) != 0LL;
        v22 = !v21;
        v23 = 0;
        if ( !v22 )
LABEL_32:
          v23 = 1;
        if ( !v23 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x235,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edges.cpp",
            0LL);
          JUMPOUT(0x1800CE60ELL);
        }
      }
      else
      {
LABEL_17:
        Edge = -1;
      }
      v3 = a2;
    }
    else
    {
      v9 = (const unsigned __int16 *)v4;
      if ( *(_QWORD *)(v4 + 24) >= 8uLL )
        v9 = *(const unsigned __int16 **)v4;
      Edge = Edges::FindEdge((Edges *)(v8 + 72), v9);
    }
    if ( Edge >= 0 )
    {
      v16 = *(_QWORD *)(v8 + 72) + 104LL * Edge;
      v17 = *(_DWORD *)(v16 + 92);
      v18 = *(_DWORD *)(v16 + 96);
      if ( v17 )
      {
        if ( v18 )
        {
          *v3 |= v17;
          if ( !v6 )
            *(_DWORD *)a3 = v18;
          ++v6;
        }
      }
    }
    v4 += 40LL;
    if ( v4 == v5 )
      return 1;
    this = v27;
  }
}
