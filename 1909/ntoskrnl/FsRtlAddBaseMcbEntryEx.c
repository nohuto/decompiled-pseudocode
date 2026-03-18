/*
 * XREFs of FsRtlAddBaseMcbEntryEx @ 0x14010BAE0
 * Callers:
 *     FsRtlAddLargeMcbEntry @ 0x14010B4C0 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlAddBaseMcbEntry @ 0x14010BAC0 (FsRtlAddBaseMcbEntry.c)
 * Callees:
 *     FsRtlFindLargeIndex @ 0x14010BFC0 (FsRtlFindLargeIndex.c)
 *     FsRtlAddEntry @ 0x14010C048 (FsRtlAddEntry.c)
 *     FsRtlRemoveLargeEntry @ 0x14010C160 (FsRtlRemoveLargeEntry.c)
 */

NTSTATUS __stdcall FsRtlAddBaseMcbEntryEx(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  int v4; // r14d
  int v5; // r15d
  unsigned int v6; // ebp
  int v8; // ebx
  ULONG PairCount; // r13d
  ULONG v10; // edi
  __int64 v11; // rdx
  _DWORD *Mapping; // rdi
  unsigned int v14; // r9d
  int v15; // r8d
  int v16; // ecx
  int v17; // edx
  __int64 v18; // r11
  __int64 v19; // rdi
  unsigned int v20; // r8d
  int v21; // r9d
  unsigned int v22; // edx
  unsigned int v23; // eax
  int v24; // eax
  int v25; // edx
  int v26; // eax
  int v27; // edx
  int v28; // eax
  _DWORD *v29; // r8
  __int64 v30; // rcx
  int v31; // r9d
  int v32; // edx
  int v33; // eax
  int v34; // edx
  int v35; // r11d
  __int64 v36; // rax
  __int64 v37; // rcx
  unsigned int v38; // edx
  unsigned int v39; // eax
  int v40; // edx
  int v41; // eax
  int v42; // edx
  ULONG v43; // r8d
  int v44; // ecx
  int v45; // ecx
  __int64 v46; // rax
  int v47; // r8d
  __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // r8
  __int64 v51; // rdx
  int v52; // ecx
  unsigned int v53; // edx
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  ULONG v57; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v58; // [rsp+68h] [rbp+10h]

  v4 = Lbn;
  v5 = SectorCount;
  v6 = Vbn;
  v8 = 0;
  if ( (unsigned __int8)FsRtlFindLargeIndex(Mcb, Vbn, &v57) )
  {
    Mapping = Mcb->Mapping;
    v14 = v5 + v6 - 1;
    v15 = Mapping[2 * v57 + 1];
    if ( v15 == -1 )
    {
      if ( (unsigned __int8)FsRtlFindLargeIndex(Mcb, v14, &v57) )
      {
        v36 = v57 - 1;
        if ( v35 == (_DWORD)v36 )
        {
          v55 = 0;
          if ( v57 )
            v55 = Mapping[2 * v36];
          if ( Mapping[2 * v57 + 1] != v4 + v55 - v6 )
            return -1073741823;
          if ( v57 )
            v56 = Mapping[2 * v36];
          else
            v56 = 0;
          v5 = v56 - v6;
        }
      }
    }
    else
    {
      if ( v57 )
        v16 = Mapping[2 * v57 - 2];
      else
        v16 = 0;
      if ( v4 != v6 + v15 - v16 )
        return -1073741823;
      v17 = Mapping[2 * v57];
      if ( v14 <= v17 - 1 )
        return 0;
      if ( v57 < Mcb->PairCount )
        v6 = v57 != -1 ? v17 : 0;
      else
        v6 = 0;
      if ( v57 )
        v54 = Mapping[2 * v57 - 2];
      else
        v54 = 0;
      v4 = v15 + v17 - v54;
      v5 = v14 - v6 + 1;
    }
  }
  PairCount = Mcb->PairCount;
  v10 = PairCount;
  v57 = PairCount;
  if ( !PairCount || *((_DWORD *)Mcb->Mapping + 2 * PairCount - 2) <= v6 )
  {
LABEL_3:
    if ( v10 )
    {
      v29 = Mcb->Mapping;
      v30 = v10 - 1;
      v31 = v29[2 * v30];
      if ( v31 == v6 )
      {
        v32 = v29[2 * v30 + 1];
        if ( v32 == -1 )
        {
          v34 = 0;
        }
        else
        {
          v33 = v10 == 1 ? 0 : v29[2 * v10 - 4];
          v34 = v31 + v32 - v33;
        }
        if ( v34 == v4 )
        {
          v29[2 * PairCount - 2] += v5;
          return 0;
        }
      }
    }
    if ( !v6 || (!v10 ? (v28 = 0) : (v28 = *((_DWORD *)Mcb->Mapping + 2 * v10 - 2)), v28 == v6) )
    {
      if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v10, 1LL) )
        return -1073741670;
      v11 = v10;
    }
    else
    {
      if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v10, 2LL) )
        return -1073741670;
      v11 = v10 + 1;
      *((_DWORD *)Mcb->Mapping + 2 * v10 + 1) = -1;
      *((_DWORD *)Mcb->Mapping + 2 * v10) = v6;
    }
    *((_DWORD *)Mcb->Mapping + 2 * v11 + 1) = v4;
    *((_DWORD *)Mcb->Mapping + 2 * v11) = v5 + v6;
    return 0;
  }
  if ( !(unsigned __int8)FsRtlFindLargeIndex(Mcb, v6, &v57) )
  {
    v10 = v57;
    goto LABEL_3;
  }
  v19 = v57;
  v58 = v5 + v6;
  v20 = v5 + v6 - 1;
  if ( *(_DWORD *)(v18 + 8LL * v57 + 4) == -1 && (!v57 || *(_DWORD *)(v18 + 8LL * (v57 - 1)) <= v6) )
  {
    v21 = *(_DWORD *)(v18 + 8LL * v57);
    v22 = v21 - 1;
    if ( v20 <= v21 - 1 )
    {
      if ( v57 )
        v23 = *(_DWORD *)(v18 + 8LL * (v57 - 1));
      else
        v23 = 0;
      if ( v23 < v6 && v20 < v22 )
      {
        if ( (unsigned __int8)FsRtlAddEntry(Mcb, v57, 2LL) )
        {
          v37 = (unsigned int)(v19 + 1);
          v38 = v58;
          *((_DWORD *)Mcb->Mapping + 2 * v19 + 1) = -1;
          *((_DWORD *)Mcb->Mapping + 2 * v19) = v6;
          *((_DWORD *)Mcb->Mapping + 2 * v37 + 1) = v4;
          *((_DWORD *)Mcb->Mapping + 2 * v37) = v38;
          return 0;
        }
        return -1073741670;
      }
      if ( v57 )
        v24 = *(_DWORD *)(v18 + 8LL * (v57 - 1));
      else
        v24 = 0;
      if ( v20 < v22 && v24 == v6 )
      {
        if ( !v57 || (v25 = *(_DWORD *)(v18 + 8LL * (v57 - 1) + 4), v25 == -1) )
        {
          v27 = 0;
        }
        else
        {
          if ( v57 == 1 )
            v26 = 0;
          else
            v26 = *(_DWORD *)(v18 + 8LL * (v57 - 2));
          v27 = *(_DWORD *)(v18 + 8LL * (v57 - 1)) + v25 - v26;
        }
        if ( v27 == v4 )
        {
          if ( v57 )
          {
            *(_DWORD *)(v18 + 8LL * (v57 - 1)) += v5;
            return 0;
          }
          if ( (unsigned __int8)FsRtlAddEntry(Mcb, 0LL, 1LL) )
          {
            *((_DWORD *)Mcb->Mapping + 1) = v4;
            *(_DWORD *)Mcb->Mapping = v5;
            return 0;
          }
        }
        else if ( (unsigned __int8)FsRtlAddEntry(Mcb, v57, 1LL) )
        {
          v53 = v58;
          *((_DWORD *)Mcb->Mapping + 2 * v19 + 1) = v4;
          *((_DWORD *)Mcb->Mapping + 2 * v19) = v53;
          return 0;
        }
        return -1073741670;
      }
      if ( v57 )
        v39 = *(_DWORD *)(v18 + 8LL * (v57 - 1));
      else
        v39 = 0;
      if ( v39 < v6 && v20 == v22 )
      {
        if ( v57 >= PairCount - 1 )
          v52 = -1;
        else
          v52 = *(_DWORD *)(v18 + 8LL * (v57 + 1) + 4);
        if ( v52 == v5 + v4 )
        {
          *(_DWORD *)(v18 + 8LL * v57) = v6;
        }
        else
        {
          if ( !(unsigned __int8)FsRtlAddEntry(Mcb, v57, 1LL) )
            return -1073741670;
          *((_DWORD *)Mcb->Mapping + 2 * v19 + 1) = -1;
          *((_DWORD *)Mcb->Mapping + 2 * v19) = v6;
        }
        *((_DWORD *)Mcb->Mapping + 2 * (unsigned int)(v19 + 1) + 1) = v4;
        return 0;
      }
      if ( !v57 || (v40 = *(_DWORD *)(v18 + 8LL * (v57 - 1) + 4), v40 == -1) )
      {
        v42 = 0;
      }
      else
      {
        if ( v57 == 1 )
          v41 = 0;
        else
          v41 = *(_DWORD *)(v18 + 8LL * (v57 - 2));
        v42 = *(_DWORD *)(v18 + 8LL * (v57 - 1)) + v40 - v41;
      }
      v43 = PairCount - 1;
      if ( v42 == v4 && (v57 >= v43 ? (v44 = -1) : (v44 = *(_DWORD *)(v18 + 8LL * (v57 + 1) + 4)), v44 == v5 + v4) )
      {
        if ( !v57 )
        {
          v51 = 0LL;
          *(_DWORD *)(v18 + 12) = v4;
          v50 = 1LL;
          goto LABEL_80;
        }
        v50 = 2LL;
        *(_DWORD *)(v18 + 8LL * (v57 - 1)) = *(_DWORD *)(v18 + 8LL * (v57 + 1));
      }
      else
      {
        if ( v57 >= v43 )
          v45 = -1;
        else
          v45 = *(_DWORD *)(v18 + 8LL * (v57 + 1) + 4);
        if ( v45 == v5 + v4 )
        {
          *(_DWORD *)(v18 + 8LL * (v57 + 1) + 4) = v4;
        }
        else
        {
          if ( !v57 )
            goto LABEL_85;
          v46 = v57 - 1;
          v47 = *(_DWORD *)(v18 + 8 * v46 + 4);
          v48 = v46;
          if ( v47 != -1 )
          {
            if ( (_DWORD)v46 )
              v49 = *(_DWORD *)(v18 + 8LL * (v57 - 2));
            else
              v49 = 0;
            v8 = *(_DWORD *)(v18 + 8 * v48) + v47 - v49;
          }
          if ( v8 != v4 )
          {
LABEL_85:
            *(_DWORD *)(v18 + 8LL * v57 + 4) = v4;
            return 0;
          }
          *(_DWORD *)(v18 + 8 * v48) = v21;
        }
        v50 = 1LL;
      }
      v51 = (unsigned int)v19;
LABEL_80:
      FsRtlRemoveLargeEntry(Mcb, v51, v50);
      return 0;
    }
  }
  return -1073741823;
}
