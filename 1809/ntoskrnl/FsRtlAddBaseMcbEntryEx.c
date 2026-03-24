/*
 * XREFs of FsRtlAddBaseMcbEntryEx @ 0x1401109A0
 * Callers:
 *     FsRtlAddLargeMcbEntry @ 0x140110380 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlAddBaseMcbEntry @ 0x140110980 (FsRtlAddBaseMcbEntry.c)
 * Callees:
 *     FsRtlAddEntry @ 0x140110F6C (FsRtlAddEntry.c)
 *     FsRtlFindLargeIndex @ 0x140111084 (FsRtlFindLargeIndex.c)
 *     FsRtlRemoveLargeEntry @ 0x140111114 (FsRtlRemoveLargeEntry.c)
 *     EvaluateCurrentState @ 0x1401B3694 (EvaluateCurrentState.c)
 */

NTSTATUS __stdcall FsRtlAddBaseMcbEntryEx(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  int v9; // esi
  signed int v10; // r8d
  ULONG PairCount; // r12d
  signed int v12; // r9d
  _DWORD *Mapping; // r14
  unsigned int v14; // eax
  unsigned int v15; // ebx
  int v16; // r8d
  unsigned int v17; // r9d
  int v18; // ecx
  int v19; // edx
  __int64 v20; // rax
  int v21; // ecx
  int v22; // eax
  ULONG v23; // ebx
  _DWORD *v24; // r14
  unsigned int v25; // ebx
  __int64 v26; // r12
  _DWORD *v27; // r9
  unsigned int v28; // r8d
  unsigned int v29; // edx
  unsigned int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // r8d
  int v35; // eax
  unsigned int v36; // eax
  int v37; // ecx
  int v38; // eax
  __int64 v39; // rcx
  int v40; // r8d
  _DWORD *v41; // rdx
  int v42; // ecx
  unsigned int v43; // edx
  int v44; // ecx
  int v45; // ecx
  __int64 v46; // rcx
  int v47; // r8d
  _DWORD *v48; // rdx
  int v49; // eax
  _DWORD *v50; // r8
  __int64 v51; // rcx
  int v52; // r9d
  int v53; // edx
  int v54; // edx
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  int v59; // [rsp+20h] [rbp-38h]
  ULONG v60; // [rsp+24h] [rbp-34h]
  unsigned int v61; // [rsp+60h] [rbp+8h] BYREF

  if ( (unsigned int)EvaluateCurrentState(&reg_FeatureDescriptors_a) && (Vbn < 0 || Lbn < 0 || SectorCount <= 0) )
    return -1073741811;
  v9 = 0;
  v10 = 0;
  PairCount = Mcb->PairCount;
  v60 = PairCount;
  v12 = PairCount - 1;
  if ( (int)(PairCount - 1) < 0 )
    goto LABEL_36;
  while ( 1 )
  {
    Mapping = Mcb->Mapping;
    v14 = (v12 + v10) / 2;
    v15 = v14;
    if ( !v14 || (unsigned int)Vbn >= Mapping[2 * v14 - 2] )
      break;
    v12 = v14 - 1;
LABEL_12:
    if ( v10 > v12 )
      goto LABEL_36;
  }
  if ( (unsigned int)Vbn > Mapping[2 * v14] - 1 )
  {
    v10 = v14 + 1;
    goto LABEL_12;
  }
  v16 = Mapping[2 * v14 + 1];
  v17 = SectorCount + Vbn - 1;
  if ( v16 == -1 )
  {
    if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, v17, &v61) )
      goto LABEL_36;
    v20 = v61 - 1;
    if ( v15 != (_DWORD)v20 )
      goto LABEL_36;
    v21 = 0;
    if ( v61 )
      v21 = Mapping[2 * v20];
    if ( Mapping[2 * v61 + 1] == (_DWORD)Lbn + v21 - (_DWORD)Vbn )
    {
      if ( v61 )
        v22 = Mapping[2 * v20];
      else
        v22 = 0;
      LODWORD(SectorCount) = v22 - Vbn;
      goto LABEL_36;
    }
    return -1073741823;
  }
  if ( v14 )
    v18 = Mapping[2 * v14 - 2];
  else
    v18 = 0;
  if ( (_DWORD)Lbn != (_DWORD)Vbn + v16 - v18 )
    return -1073741823;
  v19 = Mapping[2 * v14];
  if ( v17 <= v19 - 1 )
    return 0;
  if ( v14 < PairCount )
  {
    LODWORD(Vbn) = Mapping[2 * v14];
    if ( v14 == -1 )
      LODWORD(Vbn) = 0;
  }
  else
  {
    LODWORD(Vbn) = 0;
  }
  if ( v14 )
    v19 -= Mapping[2 * v14 - 2];
  LODWORD(Lbn) = v16 + v19;
  LODWORD(SectorCount) = v17 - Vbn + 1;
LABEL_36:
  v23 = PairCount;
  v61 = PairCount;
  if ( !PairCount || (v24 = Mcb->Mapping, v24[2 * PairCount - 2] <= (unsigned int)Vbn) )
  {
LABEL_113:
    if ( v23
      && (v50 = Mcb->Mapping, v51 = v23 - 1, v52 = v50[2 * v51], v52 == (_DWORD)Vbn)
      && ((v53 = v50[2 * v51 + 1], v53 != -1)
        ? (v23 != 1 ? (v55 = v50[2 * v23 - 4]) : (v55 = 0), v54 = v52 + v53 - v55)
        : (v54 = 0),
          v54 == (_DWORD)Lbn) )
    {
      v50[2 * PairCount - 2] += SectorCount;
    }
    else
    {
      if ( !(_DWORD)Vbn )
        goto LABEL_136;
      if ( v23 )
        v9 = *((_DWORD *)Mcb->Mapping + 2 * v23 - 2);
      if ( v9 == (_DWORD)Vbn )
      {
LABEL_136:
        if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v23, 1LL) )
          return -1073741670;
        v57 = v23;
      }
      else
      {
        if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v23, 2LL) )
          return -1073741670;
        v56 = 8LL * v23;
        *(_DWORD *)((char *)Mcb->Mapping + v56 + 4) = -1;
        *(_DWORD *)((char *)Mcb->Mapping + v56) = Vbn;
        v57 = v23 + 1;
      }
      v58 = 8 * v57;
      *(_DWORD *)((char *)Mcb->Mapping + v58 + 4) = Lbn;
      *(_DWORD *)((char *)Mcb->Mapping + v58) = Vbn + SectorCount;
    }
    return 0;
  }
  if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, (unsigned int)Vbn, &v61) )
  {
    v23 = v61;
    goto LABEL_113;
  }
  v25 = v61;
  v59 = Vbn + SectorCount;
  v26 = 8LL * v61;
  v27 = &v24[(unsigned __int64)v26 / 4];
  v28 = Vbn + SectorCount - 1;
  if ( v24[(unsigned __int64)v26 / 4 + 1] != -1 || v61 && v24[2 * v61 - 2] > (unsigned int)Vbn )
    return -1073741823;
  v29 = *v27 - 1;
  if ( v28 > v29 )
    return -1073741823;
  if ( v61 )
    v30 = v24[2 * v61 - 2];
  else
    v30 = 0;
  if ( v30 >= (unsigned int)Vbn || v28 >= v29 )
  {
    if ( v61 )
      v32 = v24[2 * v61 - 2];
    else
      v32 = 0;
    if ( v32 == (_DWORD)Vbn && v28 < v29 )
    {
      if ( v61 )
      {
        v33 = v61 - 1;
        v34 = v24[2 * v33 + 1];
        if ( v34 != -1 )
        {
          if ( v61 == 1 )
            v35 = 0;
          else
            v35 = v24[2 * v61 - 4];
          v9 = v34 + v24[2 * v33] - v35;
        }
      }
      if ( v9 == (_DWORD)Lbn )
      {
        if ( v61 )
        {
          v24[2 * v61 - 2] += SectorCount;
        }
        else
        {
          if ( !(unsigned __int8)FsRtlAddEntry(Mcb, 0LL, 1LL) )
            return -1073741670;
          *((_DWORD *)Mcb->Mapping + 1) = Lbn;
          *(_DWORD *)Mcb->Mapping = SectorCount;
        }
      }
      else
      {
        if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v61, 1LL) )
          return -1073741670;
        *(_DWORD *)((char *)Mcb->Mapping + v26 + 4) = Lbn;
        *(_DWORD *)((char *)Mcb->Mapping + v26) = v59;
      }
      return 0;
    }
    if ( v61 )
      v36 = v24[2 * v61 - 2];
    else
      v36 = 0;
    if ( v36 < (unsigned int)Vbn && v28 == v29 )
    {
      if ( v61 < v60 - 1 )
        v37 = v24[2 * v61 + 3];
      else
        v37 = -1;
      if ( v37 == (_DWORD)Lbn + (_DWORD)SectorCount )
      {
        *v27 = Vbn;
        *((_DWORD *)Mcb->Mapping + 2 * v25 + 3) = Lbn;
      }
      else
      {
        if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v61, 1LL) )
          return -1073741670;
        *(_DWORD *)((char *)Mcb->Mapping + v26 + 4) = -1;
        *(_DWORD *)((char *)Mcb->Mapping + v26) = Vbn;
        *((_DWORD *)Mcb->Mapping + 2 * v25 + 3) = Lbn;
      }
      return 0;
    }
    if ( v61 )
    {
      v39 = v61 - 1;
      v40 = v24[2 * v39 + 1];
      v41 = &v24[2 * v39];
      if ( v40 == -1 )
      {
        v38 = 0;
      }
      else
      {
        if ( v61 == 1 )
          v42 = 0;
        else
          v42 = v24[2 * v61 - 4];
        v38 = v40 + *v41 - v42;
      }
    }
    else
    {
      v38 = 0;
    }
    v43 = v60 - 1;
    if ( v38 == (_DWORD)Lbn )
    {
      v44 = v61 < v43 ? v24[2 * v61 + 3] : -1;
      if ( v44 == (_DWORD)Lbn + (_DWORD)SectorCount )
      {
        if ( v61 )
        {
          v24[2 * v61 - 2] = v24[2 * v61 + 2];
          FsRtlRemoveLargeEntry(Mcb, v25, 2LL);
        }
        else
        {
          v24[3] = Lbn;
          FsRtlRemoveLargeEntry(Mcb, 0LL, 1LL);
        }
        return 0;
      }
    }
    if ( v61 < v43 )
      v45 = v24[2 * v61 + 3];
    else
      v45 = -1;
    if ( v45 == (_DWORD)Lbn + (_DWORD)SectorCount )
    {
      v24[2 * v61 + 3] = Lbn;
    }
    else
    {
      if ( !v61 )
        goto LABEL_110;
      v46 = v61 - 1;
      v47 = v24[2 * v46 + 1];
      v48 = &v24[2 * v46];
      if ( v47 != -1 )
      {
        if ( v61 == 1 )
          v49 = 0;
        else
          v49 = v24[2 * v61 - 4];
        v9 = v47 + *v48 - v49;
      }
      if ( v9 != (_DWORD)Lbn )
      {
LABEL_110:
        v27[1] = Lbn;
        return 0;
      }
      *v48 = *v27;
    }
    FsRtlRemoveLargeEntry(Mcb, v25, 1LL);
    return 0;
  }
  if ( (unsigned __int8)FsRtlAddEntry(Mcb, v61, 2LL) )
  {
    v31 = v25 + 1;
    *(_DWORD *)((char *)Mcb->Mapping + v26 + 4) = -1;
    *(_DWORD *)((char *)Mcb->Mapping + v26) = Vbn;
    *((_DWORD *)Mcb->Mapping + 2 * v31 + 1) = Lbn;
    *((_DWORD *)Mcb->Mapping + 2 * v31) = v59;
    return 0;
  }
  return -1073741670;
}
