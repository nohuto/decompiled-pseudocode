/*
 * XREFs of FsRtlRemoveBaseMcbEntry @ 0x14010B660
 * Callers:
 *     FsRtlRemoveLargeMcbEntry @ 0x140282440 (FsRtlRemoveLargeMcbEntry.c)
 * Callees:
 *     FsRtlFindLargeIndex @ 0x14010BFC0 (FsRtlFindLargeIndex.c)
 *     FsRtlAddEntry @ 0x14010C048 (FsRtlAddEntry.c)
 *     FsRtlRemoveLargeEntry @ 0x14010C160 (FsRtlRemoveLargeEntry.c)
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
  ULONG v12; // r8d
  __int64 v13; // r9
  int v14; // r10d
  __int64 v15; // rdx
  __int64 v16; // r8
  ULONG PairCount; // eax
  int v19; // r10d
  int v20; // ecx
  __int64 v21; // rax
  _DWORD *v22; // rdx
  __int64 v23; // rax
  int v24; // r8d
  __int64 v25; // r9
  int v26; // r10d
  int v27; // r10d
  int v28; // ecx
  int v29; // r15d
  LONGLONG v30; // r13
  int v31; // r8d
  __int64 v32; // rsi
  unsigned int v33; // r15d
  ULONG v34; // eax
  int v35; // ecx
  __int64 v36; // r10
  _DWORD *v37; // rdx
  int v38; // r8d
  int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rbx
  int v42; // ecx
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
        v21 = *((unsigned int *)Mcb->Mapping + 2 * v43 - 2);
      else
        v21 = 0LL;
      v22 = Mcb->Mapping;
      if ( v21 == v4 )
      {
        if ( v22[2 * v43 + 1] == -1 )
          return 1;
        if ( v43 )
        {
          v23 = v43 - 1;
          v24 = v22[2 * v23 + 1];
          v25 = v23;
          if ( v24 == -1 )
            goto LABEL_80;
          if ( (_DWORD)v23 )
            LODWORD(v23) = v22[2 * v43 - 4];
          if ( !(v22[2 * v25] + v24 - (_DWORD)v23) )
          {
LABEL_80:
            v22[2 * v25] += v3;
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
      v29 = v22[2 * v43];
      v30 = v4 + v3;
      v31 = v22[2 * v43 + 1];
      v32 = v43;
      if ( (unsigned int)(v29 - 1) >= v4 + v3 )
      {
        if ( v31 != -1 )
        {
          if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v43, 2LL) )
            return 0;
          v36 = (unsigned int)(v6 + 1);
          *((_DWORD *)Mcb->Mapping + 2 * v6 + 1) = *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v6 + 2) + 1);
          *((_DWORD *)Mcb->Mapping + 2 * v6) = v4;
          *((_DWORD *)Mcb->Mapping + 2 * v36 + 1) = -1;
          *((_DWORD *)Mcb->Mapping + 2 * v36) = v4 + v3;
          v37 = Mcb->Mapping;
          if ( (_DWORD)v6 )
            v38 = v37[2 * (unsigned int)(v6 - 1)];
          else
            v38 = 0;
          if ( (_DWORD)v6 == -1 )
            v39 = 0;
          else
            v39 = v37[2 * v6];
          v37[2 * (unsigned int)(v6 + 2) + 1] += v37[2 * v6] + v37[2 * v36] - v39 - v38;
        }
        v3 = 0LL;
        v4 = v30;
      }
      else
      {
        v33 = v29 - v4;
        if ( v31 != -1 )
        {
          v34 = Mcb->PairCount - 1;
          if ( v43 == v34 )
          {
            v22[2 * v43] -= v33;
          }
          else if ( v43 >= v34 || (v40 = v43 + 1, v41 = v40, v22[2 * v40 + 1] == -1) )
          {
            v22[2 * v43] -= v33;
          }
          else
          {
            if ( !(unsigned __int8)FsRtlAddEntry(Mcb, (unsigned int)v40, 1LL) )
              return 0;
            *((_DWORD *)Mcb->Mapping + 2 * v41 + 1) = -1;
            *((_DWORD *)Mcb->Mapping + 2 * v41) = *((_DWORD *)Mcb->Mapping + 2 * v32);
            *((_DWORD *)Mcb->Mapping + 2 * v32) -= v33;
          }
        }
        v4 += v33;
        v3 -= v33;
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
        v28 = v43 == 1 ? 0 : Mapping[2 * v43 - 4];
        if ( v14 + Mapping[2 * v13] - v28 )
          goto LABEL_51;
      }
      v15 = (unsigned int)v13;
    }
    else
    {
      if ( !v43
        || (v19 = Mapping[2 * v43 - 1], v19 != -1)
        && (v43 != 1 ? (v20 = Mapping[2 * v43 - 4]) : (v20 = 0), v19 + Mapping[2 * v43 - 2] - v20) )
      {
        if ( v43 < v12 && Mapping[2 * v43 + 3] != -1 )
        {
          Mapping[2 * v43 + 1] = -1;
          goto LABEL_17;
        }
        if ( !v43 )
          goto LABEL_85;
      }
      v26 = Mapping[2 * v43 - 1];
      if ( v26 != -1 )
      {
        v35 = v43 == 1 ? 0 : Mapping[2 * v43 - 4];
        if ( v26 + Mapping[2 * v43 - 2] - v35 )
        {
LABEL_85:
          if ( v43 >= v12 || Mapping[2 * v43 + 3] == -1 )
          {
LABEL_51:
            v16 = 1LL;
            v15 = v43;
            goto LABEL_16;
          }
          if ( !v43 )
            goto LABEL_45;
        }
      }
      v27 = Mapping[2 * v43 - 1];
      if ( v27 == -1 || (v43 != 1 ? (v42 = Mapping[2 * v43 - 4]) : (v42 = 0), !(v27 + Mapping[2 * v43 - 2] - v42)) )
      {
LABEL_45:
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
