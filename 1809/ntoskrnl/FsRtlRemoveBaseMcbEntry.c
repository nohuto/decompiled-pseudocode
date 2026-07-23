/*
 * XREFs of FsRtlRemoveBaseMcbEntry @ 0x1401105B0
 * Callers:
 *     FsRtlRemoveLargeMcbEntry @ 0x14026EE20 (FsRtlRemoveLargeMcbEntry.c)
 * Callees:
 *     FsRtlAddEntry @ 0x140110FE0 (FsRtlAddEntry.c)
 *     FsRtlFindLargeIndex @ 0x1401110F8 (FsRtlFindLargeIndex.c)
 *     FsRtlRemoveLargeEntry @ 0x140111188 (FsRtlRemoveLargeEntry.c)
 */

BOOLEAN __stdcall FsRtlRemoveBaseMcbEntry(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG SectorCount)
{
  LONGLONG v3; // rbp
  LONGLONG v4; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *Mapping; // rdx
  int v9; // r8d
  int v10; // eax
  __int64 v11; // rax
  ULONG v12; // r9d
  __int64 v13; // r9
  int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // r8
  ULONG PairCount; // eax
  __int64 v19; // rax
  int v20; // r8d
  int v21; // r8d
  __int64 v22; // rax
  int v23; // r8d
  __int64 v24; // rax
  _DWORD *v25; // rdx
  __int64 v26; // rax
  int v27; // r8d
  __int64 v28; // r9
  int v29; // eax
  int v30; // r15d
  LONGLONG v31; // r13
  int v32; // r8d
  __int64 v33; // rsi
  unsigned int v34; // r15d
  ULONG v35; // eax
  int v36; // eax
  __int64 v37; // r10
  _DWORD *v38; // rdx
  int v39; // r8d
  int v40; // ecx
  __int64 v41; // rcx
  __int64 v42; // rbx
  ULONG v43; // [rsp+50h] [rbp+8h] BYREF

  v3 = SectorCount;
  v4 = Vbn;
  if ( !Vbn )
  {
    PairCount = Mcb->PairCount;
    if ( PairCount )
    {
      if ( SectorCount >= *((unsigned int *)Mcb->Mapping + 2 * PairCount - 2) )
      {
        Mcb->PairCount = 0;
        return 1;
      }
    }
  }
  if ( SectorCount > 0 )
  {
    while ( 1 )
    {
      if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, (unsigned int)v4, &v43) )
        return 1;
      v6 = v43;
      v7 = v43 ? *((unsigned int *)Mcb->Mapping + 2 * v43 - 2) : 0LL;
      if ( v7 == v4 )
      {
        Mapping = Mcb->Mapping;
        v9 = Mapping[2 * v43];
        if ( (unsigned int)(v9 - 1) < v4 + v3 )
          break;
      }
      if ( v43 )
        v24 = *((unsigned int *)Mcb->Mapping + 2 * v43 - 2);
      else
        v24 = 0LL;
      v25 = Mcb->Mapping;
      if ( v24 == v4 )
      {
        if ( v25[2 * v43 + 1] == -1 )
          return 1;
        if ( v43 )
        {
          v26 = v43 - 1;
          v27 = v25[2 * v26 + 1];
          v28 = v26;
          if ( v27 == -1 )
            goto LABEL_46;
          if ( (_DWORD)v26 )
            LODWORD(v26) = v25[2 * v43 - 4];
          if ( !(v25[2 * v28] + v27 - (_DWORD)v26) )
          {
LABEL_46:
            v25[2 * v28] += v3;
            *((_DWORD *)Mcb->Mapping + 2 * v6 + 1) += v3;
            return 1;
          }
        }
        if ( (unsigned __int8)FsRtlAddEntry(Mcb, v43, 1LL) )
        {
          *((_DWORD *)Mcb->Mapping + 2 * v6 + 1) = -1;
          *((_DWORD *)Mcb->Mapping + 2 * v6) = v4 + v3;
          *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v6 + 1) + 1) += v3;
          return 1;
        }
        return 0;
      }
      v30 = v25[2 * v43];
      v31 = v4 + v3;
      v32 = v25[2 * v43 + 1];
      v33 = v43;
      if ( (unsigned int)(v30 - 1) >= v4 + v3 )
      {
        if ( v32 != -1 )
        {
          if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v43, 2LL) )
            return 0;
          v37 = (unsigned int)(v6 + 1);
          *((_DWORD *)Mcb->Mapping + 2 * v6 + 1) = *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v6 + 2) + 1);
          *((_DWORD *)Mcb->Mapping + 2 * v6) = v4;
          *((_DWORD *)Mcb->Mapping + 2 * v37 + 1) = -1;
          *((_DWORD *)Mcb->Mapping + 2 * v37) = v4 + v3;
          v38 = Mcb->Mapping;
          if ( (_DWORD)v6 )
            v39 = v38[2 * (unsigned int)(v6 - 1)];
          else
            v39 = 0;
          if ( (_DWORD)v6 == -1 )
            v40 = 0;
          else
            v40 = v38[2 * v6];
          v38[2 * (unsigned int)(v6 + 2) + 1] += v38[2 * v6] + v38[2 * v37] - v40 - v39;
        }
        v3 = 0LL;
        v4 = v31;
      }
      else
      {
        v34 = v30 - v4;
        if ( v32 != -1 )
        {
          v35 = Mcb->PairCount - 1;
          if ( v43 == v35 )
          {
            v25[2 * v43] -= v34;
          }
          else if ( v43 >= v35 || (v41 = v43 + 1, v42 = v41, v25[2 * v41 + 1] == -1) )
          {
            v25[2 * v43] -= v34;
          }
          else
          {
            if ( !(unsigned __int8)FsRtlAddEntry(Mcb, (unsigned int)v41, 1LL) )
              return 0;
            *((_DWORD *)Mcb->Mapping + 2 * v42 + 1) = -1;
            *((_DWORD *)Mcb->Mapping + 2 * v42) = *((_DWORD *)Mcb->Mapping + 2 * v33);
            *((_DWORD *)Mcb->Mapping + 2 * v33) -= v34;
          }
        }
        v4 += v34;
        v3 -= v34;
      }
LABEL_17:
      if ( v3 <= 0 )
        return 1;
    }
    if ( v43 )
      v10 = Mapping[2 * v43 - 2];
    else
      v10 = 0;
    v11 = (unsigned int)(v9 - v10);
    v4 += v11;
    v3 -= v11;
    if ( Mapping[2 * v43 + 1] == -1 )
      goto LABEL_17;
    v12 = Mcb->PairCount - 1;
    if ( v43 == v12 )
    {
      if ( !v43 )
        goto LABEL_51;
      v13 = v43 - 1;
      v14 = Mapping[2 * v13 + 1];
      if ( v14 != -1 )
      {
        v29 = v43 == 1 ? 0 : Mapping[2 * v43 - 4];
        if ( Mapping[2 * v13] + v14 - v29 )
          goto LABEL_51;
      }
      v15 = (unsigned int)v13;
    }
    else
    {
      if ( !v43 )
        goto LABEL_60;
      v19 = v43 - 1;
      v20 = Mapping[2 * v19 + 1];
      if ( v20 != -1 )
      {
        if ( v43 != 1 )
          LODWORD(v19) = Mapping[2 * v43 - 4];
        if ( Mapping[2 * v43 - 2] + v20 - (_DWORD)v19 )
        {
LABEL_60:
          if ( v43 < v12 && Mapping[2 * v43 + 3] != -1 )
          {
            Mapping[2 * v43 + 1] = -1;
            goto LABEL_17;
          }
          if ( !v43 )
            goto LABEL_86;
        }
      }
      v21 = Mapping[2 * v43 - 1];
      if ( v21 != -1 )
      {
        v36 = v43 == 1 ? 0 : Mapping[2 * v43 - 4];
        if ( Mapping[2 * v43 - 2] + v21 - v36 )
        {
LABEL_86:
          if ( v43 >= v12 || Mapping[2 * v43 + 3] == -1 )
          {
LABEL_51:
            v16 = 1LL;
            v15 = v43;
            goto LABEL_16;
          }
          if ( !v43 )
            goto LABEL_27;
        }
      }
      v22 = v43 - 1;
      v23 = Mapping[2 * v22 + 1];
      if ( v23 == -1 )
        goto LABEL_27;
      if ( v43 != 1 )
        LODWORD(v22) = Mapping[2 * v43 - 4];
      if ( !(Mapping[2 * v43 - 2] + v23 - (_DWORD)v22) )
      {
LABEL_27:
        if ( v43 < v12 && Mapping[2 * v43 + 3] != -1 )
        {
          Mapping[2 * v43 + 1] = -1;
          v16 = 1LL;
          v15 = (unsigned int)(v6 - 1);
          goto LABEL_16;
        }
      }
      v15 = v43 - 1;
    }
    v16 = 2LL;
LABEL_16:
    FsRtlRemoveLargeEntry(Mcb, v15, v16);
    goto LABEL_17;
  }
  return 1;
}
