/*
 * XREFs of ?GetCandidateEdgyDetectedInfo@EdgyConnection@@QEAA_NPEBUCandidateIdentity@@PEAUCandidateEdgyDetectedInfo@@@Z @ 0x1800FFE9C
 * Callers:
 *     ?GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z @ 0x180104590 (-GetCandidateEdgyDetectedInfo@EdgyImpl@@QEAA_NPEAUCandidateEdgyDetectedInfo@@@Z.c)
 * Callees:
 *     ?FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z @ 0x1801018B0 (-FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z.c)
 */

char __fastcall EdgyConnection::GetCandidateEdgyDetectedInfo(
        EdgyConnection *this,
        const struct CandidateIdentity *a2,
        struct CandidateEdgyDetectedInfo *a3)
{
  Edges *v3; // r14
  char v4; // bl
  int Edge; // eax
  __int64 v8; // rdx
  char v9; // al
  _QWORD *v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  char v14; // r8
  char v15; // cl
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx

  v3 = (EdgyConnection *)((char *)this + 72);
  v4 = 0;
  *((_QWORD *)a3 + 2) = 0LL;
  *((_QWORD *)a3 + 3) = 0LL;
  Edge = Edges::FindEdge((EdgyConnection *)((char *)this + 72), a2);
  if ( Edge < 0
    || (v8 = 104LL * Edge,
        *((_QWORD *)a3 + 2) = *(_QWORD *)(v8 + *(_QWORD *)v3 + 40),
        *((_DWORD *)a3 + 6) = *(_DWORD *)(v8 + *(_QWORD *)v3 + 68),
        v9 = 1,
        *((_DWORD *)a3 + 7) = *(_DWORD *)(v8 + *(_QWORD *)v3 + 48),
        !*((_QWORD *)a3 + 2)) )
  {
    v9 = 0;
  }
  *(_BYTE *)a3 = v9;
  v10 = (_QWORD *)((char *)a3 + 72);
  *((_QWORD *)a3 + 4) = 0LL;
  if ( a3 != (struct CandidateEdgyDetectedInfo *)-72LL )
    *v10 = 0LL;
  v11 = Edges::FindEdge(v3, a2);
  if ( v11 < 0 )
  {
    v14 = 0;
  }
  else
  {
    v12 = 104LL * v11;
    v13 = *(_QWORD *)v3;
    *((_OWORD *)a3 + 2) = *(_OWORD *)(v12 + *(_QWORD *)v3 + 52);
    *((_OWORD *)a3 + 3) = *(_OWORD *)(v12 + v13 + 68);
    *((_QWORD *)a3 + 8) = *(_QWORD *)(v12 + v13 + 84);
    if ( a3 != (struct CandidateEdgyDetectedInfo *)-72LL )
      *v10 = *(_QWORD *)(v12 + *(_QWORD *)v3);
    v14 = 1;
  }
  *((_BYTE *)a3 + 1) = v14;
  *((_QWORD *)a3 + 1) = 0LL;
  if ( *((_QWORD *)a3 + 2) )
  {
    v15 = v14;
    if ( *((_DWORD *)a3 + 6) != 1 )
      goto LABEL_26;
    v16 = *((_DWORD *)a3 + 7);
    if ( !v16 )
      return 0;
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          if ( v19 != 1 || *v10 )
            goto LABEL_26;
        }
      }
      *((_QWORD *)a3 + 1) = -1LL;
      *((_BYTE *)a3 + 1) = 0;
    }
    else
    {
      *((_BYTE *)a3 + 1) = 0;
    }
  }
  else
  {
    if ( !*((_QWORD *)a2 + 2) )
    {
      v15 = *v10 != 0LL ? v14 : 0;
      *((_BYTE *)a3 + 1) = v15;
      goto LABEL_26;
    }
    *(_WORD *)a3 = 0;
  }
  v15 = 0;
LABEL_26:
  if ( *(_BYTE *)a3 || v15 )
    return 1;
  return v4;
}
