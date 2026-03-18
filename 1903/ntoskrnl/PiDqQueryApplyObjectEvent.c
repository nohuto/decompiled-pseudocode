/*
 * XREFs of PiDqQueryApplyObjectEvent @ 0x140713A14
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x1407136D0 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x1400028D0 (RtlLookupElementGenericTableAvl.c)
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1405B58C4 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqQueryUnlock @ 0x1405B66FC (PiDqQueryUnlock.c)
 *     PiDqQueryLock @ 0x1405B6724 (PiDqQueryLock.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x1405B7618 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryAppendActionEntry @ 0x1405B76A4 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryEvaluateFilter @ 0x1405BAFF8 (PiDqQueryEvaluateFilter.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1405BBB44 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1406E9EA8 (PiDqQueryAddObjectToResultSet.c)
 *     PiDqQueryMakeInconsistent @ 0x1408659E8 (PiDqQueryMakeInconsistent.c)
 *     PiDqSameUserHive @ 0x140865A04 (PiDqSameUserHive.c)
 */

char __fastcall PiDqQueryApplyObjectEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int AddObjectToResultSet; // r12d
  char v8; // r13
  char v9; // r14
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // eax
  unsigned int v13; // r12d
  unsigned int v14; // r15d
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned int v18; // r15d
  __int64 v19; // rcx
  unsigned int v20; // r12d
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // rdx
  bool v24; // r15
  char v25; // cl
  bool v26; // si
  int v27; // r14d
  int v28; // r12d
  __int64 v29; // rcx
  const wchar_t *v30; // rcx
  const wchar_t *v31; // rdx
  __int64 v32; // rcx
  const wchar_t *v33; // rcx
  const wchar_t *v34; // rdx
  __int64 v35; // r8
  int v36; // ecx
  unsigned int v37; // r13d
  unsigned int v38; // r12d
  __int64 v39; // r15
  __int64 v40; // rsi
  char v41; // al
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // r15d
  __int64 v45; // r14
  const wchar_t *i; // rsi
  __int64 v47; // rax
  int v48; // eax
  const wchar_t *j; // r14
  __int64 v50; // rax
  int v51; // ecx
  const wchar_t *v52; // rsi
  __int64 v53; // rdx
  int v55; // [rsp+30h] [rbp-10h]
  __int64 *Buffer; // [rsp+88h] [rbp+48h] BYREF
  char v57; // [rsp+90h] [rbp+50h] BYREF
  bool v58; // [rsp+98h] [rbp+58h]

  v4 = *(_DWORD *)(a2 + 4);
  v55 = 0;
  v58 = 0;
  AddObjectToResultSet = 0;
  LOBYTE(Buffer) = 0;
  v8 = 0;
  v57 = 0;
  v9 = 0;
  LOBYTE(a4) = 0;
  if ( (v4 & 3) != 0 || (v4 & 8) == 0 && !*(_DWORD *)(a2 + 76) )
    goto LABEL_25;
  if ( (v4 & 4) != 0 )
  {
    v55 = PiDqSameUserHive(a1 + 32, a2 + 24, &v57, a4);
    if ( v55 < 0 )
      goto LABEL_139;
    LOBYTE(a4) = v57;
  }
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_DWORD *)(v10 + 40) & 4;
  if ( (*(_DWORD *)(v10 + 40) & 2) != 0 )
  {
    if ( v11 )
    {
      v44 = 0;
      if ( *(_DWORD *)(a2 + 76) )
      {
        while ( 1 )
        {
          v45 = 32LL * v44;
          if ( *(_DWORD *)(v45 + a2 + 100) != 1 || (_BYTE)a4 )
          {
            if ( !*(_QWORD *)(v45 + a2 + 104) )
              goto LABEL_44;
            for ( i = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL); *i; i += v47 + 1 )
            {
              if ( !wcsicmp(*(const wchar_t **)(v45 + a2 + 104), i) )
                goto LABEL_44;
              v47 = -1LL;
              do
                ++v47;
              while ( i[v47] );
            }
          }
          if ( ++v44 >= *(_DWORD *)(a2 + 76) )
            break;
          LOBYTE(a4) = v57;
        }
      }
    }
    else
    {
LABEL_44:
      v8 = 1;
    }
  }
  else
  {
    v12 = *(_DWORD *)(v10 + 64);
    if ( v11 )
    {
      v37 = 0;
      if ( v12 )
      {
        while ( 1 )
        {
          v38 = 0;
          v39 = *(_QWORD *)(v10 + 72) + 32LL * v37;
          if ( *(_DWORD *)(a2 + 76) )
          {
            do
            {
              v40 = 32LL * v38;
              if ( *(_DWORD *)(v39 + 16) != *(_DWORD *)(v40 + a2 + 96) )
                goto LABEL_70;
              v42 = *(_QWORD *)(v40 + a2 + 80);
              v43 = *(_QWORD *)v39 - v42;
              if ( *(_QWORD *)v39 == v42 )
                v43 = *(_QWORD *)(v39 + 8) - *(_QWORD *)(v40 + a2 + 88);
              if ( !v43 && (v48 = *(_DWORD *)(v40 + a2 + 100), *(_DWORD *)(v39 + 20) == v48) && (v48 != 1 || (_BYTE)a4) )
              {
                if ( !*(_QWORD *)(v40 + a2 + 104) )
                  goto LABEL_44;
                for ( j = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL); ; j += v50 + 1 )
                {
                  if ( !*j )
                  {
                    v41 = (char)Buffer;
                    goto LABEL_110;
                  }
                  if ( !wcsicmp(*(const wchar_t **)(v40 + a2 + 104), j) )
                    break;
                  v50 = -1LL;
                  do
                    ++v50;
                  while ( j[v50] );
                }
                v41 = 1;
                LOBYTE(Buffer) = 1;
LABEL_110:
                if ( v41 )
                  goto LABEL_75;
              }
              else
              {
LABEL_70:
                v41 = (char)Buffer;
              }
              LOBYTE(a4) = v57;
              ++v38;
            }
            while ( v38 < *(_DWORD *)(a2 + 76) );
            if ( v41 )
              break;
          }
          v10 = *(_QWORD *)(a1 + 24);
          if ( ++v37 >= *(_DWORD *)(v10 + 64) )
            break;
          LOBYTE(a4) = v57;
        }
LABEL_75:
        v8 = (char)Buffer;
      }
      else
      {
        v8 = 0;
      }
    }
    else
    {
      v13 = 0;
      if ( v12 )
      {
        do
        {
          v14 = 0;
          v15 = *(_QWORD *)(v10 + 72) + 32LL * v13;
          if ( *(_DWORD *)(a2 + 76) )
          {
            while ( 1 )
            {
              v16 = 32LL * v14;
              if ( *(_DWORD *)(v15 + 16) == *(_DWORD *)(v16 + a2 + 96) )
              {
                v29 = *(_QWORD *)v15 - *(_QWORD *)(v16 + a2 + 80);
                if ( *(_QWORD *)v15 == *(_QWORD *)(v16 + a2 + 80) )
                  v29 = *(_QWORD *)(v15 + 8) - *(_QWORD *)(v16 + a2 + 88);
                if ( !v29 && *(_DWORD *)(v15 + 20) == *(_DWORD *)(v16 + a2 + 100) )
                {
                  v30 = *(const wchar_t **)(v15 + 24);
                  v31 = *(const wchar_t **)(v16 + a2 + 104);
                  if ( (v30 == v31 || v30 && v31 && !wcsicmp(v30, v31)) && (*(_DWORD *)(v16 + a2 + 100) != 1 || v57) )
                    break;
                }
              }
              if ( ++v14 >= *(_DWORD *)(a2 + 76) )
                goto LABEL_11;
            }
            v8 = 1;
          }
LABEL_11:
          v10 = *(_QWORD *)(a1 + 24);
          ++v13;
        }
        while ( v13 < *(_DWORD *)(v10 + 64) );
      }
    }
  }
  v17 = *(_QWORD *)(a1 + 24);
  if ( !*(_DWORD *)(v17 + 20) && (LODWORD(v17) = *(_DWORD *)(a2 + 4), (v17 & 8) != 0) )
  {
    v9 = 1;
  }
  else
  {
    v18 = 0;
    v9 = 0;
    do
    {
      if ( v18 >= *(_DWORD *)(a2 + 76) )
        break;
      v19 = *(_QWORD *)(a1 + 24);
      v20 = 0;
      v21 = 32LL * v18;
      if ( *(_DWORD *)(v19 + 80) )
      {
        while ( 1 )
        {
          v22 = *(_QWORD *)(v19 + 88);
          v23 = 56LL * v20;
          LODWORD(v17) = *(_DWORD *)(v21 + a2 + 96);
          if ( *(_DWORD *)(v23 + v22 + 24) == (_DWORD)v17 )
          {
            v32 = *(_QWORD *)(v23 + v22 + 8) - *(_QWORD *)(v21 + a2 + 80);
            if ( !v32 )
              v32 = *(_QWORD *)(v23 + v22 + 16) - *(_QWORD *)(v21 + a2 + 88);
            if ( !v32 )
            {
              LODWORD(v17) = *(_DWORD *)(v21 + a2 + 100);
              if ( *(_DWORD *)(v23 + v22 + 28) == (_DWORD)v17 )
              {
                v33 = *(const wchar_t **)(v23 + v22 + 32);
                v34 = *(const wchar_t **)(v21 + a2 + 104);
                if ( v33 == v34 || v33 && v34 && (LODWORD(v17) = wcsicmp(v33, v34), !(_DWORD)v17) )
                {
                  if ( *(_DWORD *)(v21 + a2 + 100) != 1 || v57 )
                    break;
                }
              }
            }
          }
          v19 = *(_QWORD *)(a1 + 24);
          if ( ++v20 >= *(_DWORD *)(v19 + 80) )
            goto LABEL_19;
        }
        v9 = 1;
      }
LABEL_19:
      ++v18;
    }
    while ( !v9 );
  }
  AddObjectToResultSet = v55;
  if ( v8 || v9 )
  {
LABEL_25:
    PiDqQueryLock(a1);
    Buffer = *(__int64 **)(a2 + 8);
    v24 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer) != 0LL;
    PiDqQueryUnlock(a1);
    LODWORD(v17) = *(_DWORD *)(a2 + 4);
    if ( (v17 & 2) != 0 )
    {
      if ( !v24 )
      {
        v26 = 0;
        v27 = 0;
        goto LABEL_32;
      }
      goto LABEL_82;
    }
    if ( (v17 & 1) == 0 && !v9 )
    {
      v25 = v24;
      goto LABEL_29;
    }
    v35 = *(_QWORD *)(a1 + 24);
    v36 = *(_DWORD *)(v35 + 20);
    if ( v36 )
    {
      v51 = v36 - 1;
      if ( v51 )
      {
        if ( v51 != 1 )
          goto LABEL_30;
        v52 = *(const wchar_t **)(v35 + 32);
        v25 = 0;
        LOBYTE(Buffer) = 0;
        if ( !*v52 )
          goto LABEL_30;
        LOBYTE(v17) = 0;
        while ( !(_BYTE)v17 )
        {
          v25 = wcsicmp(v52, *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL)) == 0;
          v53 = -1LL;
          LOBYTE(v17) = v25;
          LOBYTE(Buffer) = v25;
          do
            ++v53;
          while ( v52[v53] );
          v52 += v53 + 1;
          if ( !*v52 )
            goto LABEL_55;
        }
LABEL_56:
        v17 = *(_QWORD *)(a1 + 24);
        if ( !*(_DWORD *)(v17 + 20) )
        {
          LODWORD(v17) = PiPnpRtlApplyMandatoryFilters(
                           *(__int64 *)&PiPnpRtlCtx,
                           *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL),
                           *(_DWORD *)(*(_QWORD *)(a2 + 8) + 28LL),
                           0LL,
                           (struct _SECURITY_SUBJECT_CONTEXT *)(a1 + 32),
                           &Buffer);
          AddObjectToResultSet = v17;
          if ( (_DWORD)v17 == -1073741772 || (_DWORD)v17 == -1073741275 )
          {
            v25 = 0;
            AddObjectToResultSet = 0;
            LOBYTE(Buffer) = 0;
          }
          else
          {
            v25 = (char)Buffer;
          }
          if ( AddObjectToResultSet < 0 )
            goto LABEL_139;
        }
        if ( !v25 )
          goto LABEL_30;
        v17 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(v17 + 88) )
        {
          LODWORD(v17) = PiDqQueryEvaluateFilter((_QWORD *)a1, *(void **)(*(_QWORD *)(a2 + 8) + 16LL), (bool *)&Buffer);
          AddObjectToResultSet = v17;
          if ( (_DWORD)v17 == -1073741772 )
          {
            v25 = 0;
            AddObjectToResultSet = 0;
          }
          else
          {
            v25 = (char)Buffer;
          }
          if ( AddObjectToResultSet < 0 )
            goto LABEL_139;
        }
LABEL_29:
        if ( v25 )
        {
          if ( v24 )
          {
            v27 = 2;
            v26 = v8 != 0;
          }
          else
          {
            v27 = 1;
            PiDqQueryLock(a1);
            AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, *(_QWORD *)(a2 + 8));
            LOBYTE(v17) = (unsigned __int8)PiDqQueryUnlock(a1);
            v26 = 1;
          }
          goto LABEL_32;
        }
LABEL_30:
        if ( !v24 )
        {
          v26 = v58;
          v27 = 0;
LABEL_32:
          if ( AddObjectToResultSet >= 0 )
          {
            if ( !v26 )
              return v17;
            v28 = PiDqQueryActionQueueEntryCreate(v27, *(_QWORD *)(a2 + 8), (volatile signed __int32 *)a2, &Buffer);
            if ( v28 >= 0 )
            {
              PiDqQueryLock(a1);
              PiDqQueryAppendActionEntry(a1, Buffer);
              LOBYTE(v17) = (unsigned __int8)PiDqQueryUnlock(a1);
              return v17;
            }
          }
LABEL_139:
          PiDqQueryLock(a1);
          PiDqQueryMakeInconsistent(a1);
          LOBYTE(v17) = (unsigned __int8)PiDqQueryUnlock(a1);
          return v17;
        }
LABEL_82:
        v27 = 3;
        v26 = 1;
        PiDqQueryLock(a1);
        PiDqQueryDeleteObjectFromResultSet(a1, *(void **)(a2 + 8));
        LOBYTE(v17) = (unsigned __int8)PiDqQueryUnlock(a1);
        goto LABEL_32;
      }
      v25 = wcsicmp(*(const wchar_t **)(v35 + 24), *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL)) == 0;
    }
    else
    {
      v25 = 1;
    }
    LOBYTE(v17) = v25;
    LOBYTE(Buffer) = v25;
LABEL_55:
    if ( !(_BYTE)v17 )
      goto LABEL_30;
    goto LABEL_56;
  }
  return v17;
}
