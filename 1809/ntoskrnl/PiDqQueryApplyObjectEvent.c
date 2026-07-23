/*
 * XREFs of PiDqQueryApplyObjectEvent @ 0x1406F8B18
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x1406F8780 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140006BF0 (RtlLookupElementGenericTableAvl.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     PiDqQueryFreeActiveData @ 0x140591124 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x14059272C (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryAppendActionEntry @ 0x1405927B8 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryEvaluateFilter @ 0x14059652C (PiDqQueryEvaluateFilter.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140596FCC (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1406CABBC (PiDqQueryAddObjectToResultSet.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1406CD350 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiDqSameUserHive @ 0x14082C42C (PiDqSameUserHive.c)
 */

char __fastcall PiDqQueryApplyObjectEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int AddObjectToResultSet; // r13d
  char v8; // si
  char v9; // r10
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // eax
  unsigned int v13; // r12d
  unsigned int v14; // r15d
  __int64 v15; // rsi
  __int64 v16; // rdi
  char v17; // r13
  __int64 v18; // rax
  unsigned int v19; // r15d
  __int64 v20; // rcx
  unsigned int v21; // r12d
  __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // rdx
  bool v25; // zf
  struct _KTHREAD *CurrentThread; // rax
  bool v27; // r12
  char v28; // cl
  bool v29; // di
  int v30; // esi
  struct _KTHREAD *v31; // rax
  __int64 v32; // rcx
  const wchar_t *v33; // rcx
  const wchar_t *v34; // rdx
  __int64 v35; // r8
  int v36; // ecx
  __int64 v37; // rcx
  const wchar_t *v38; // rcx
  const wchar_t *v39; // rdx
  unsigned int v40; // r13d
  unsigned int v41; // r12d
  __int64 v42; // r15
  __int64 v43; // rdi
  __int64 v44; // rcx
  int v45; // eax
  struct _KTHREAD *v46; // rax
  struct _KTHREAD *v47; // rax
  unsigned int v48; // r15d
  __int64 v49; // rsi
  const wchar_t *i; // rdi
  __int64 v51; // rax
  const wchar_t *v52; // rsi
  __int64 v53; // rax
  int v54; // ecx
  const wchar_t *v55; // rdi
  __int64 v56; // rdx
  struct _KTHREAD *v57; // rax
  __int64 Buffer; // [rsp+38h] [rbp-18h] BYREF
  __int64 *v60; // [rsp+40h] [rbp-10h] BYREF
  char v61; // [rsp+98h] [rbp+48h]
  __int64 v62; // [rsp+A0h] [rbp+50h] BYREF
  char v63; // [rsp+A8h] [rbp+58h] BYREF

  v4 = *(_DWORD *)(a2 + 4);
  LODWORD(v62) = 0;
  v61 = 0;
  AddObjectToResultSet = 0;
  v63 = 0;
  LOBYTE(a4) = 0;
  v8 = 0;
  v9 = 0;
  if ( (v4 & 3) != 0 || (v4 & 8) == 0 && !*(_DWORD *)(a2 + 76) )
    goto LABEL_27;
  if ( (v4 & 4) != 0 )
  {
    LODWORD(v62) = PiDqSameUserHive(a1 + 32, a2 + 24, &v63, a4);
    if ( (int)v62 < 0 )
      goto LABEL_138;
    v9 = v63;
    LOBYTE(a4) = 0;
  }
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_DWORD *)(v10 + 40) & 4;
  if ( (*(_DWORD *)(v10 + 40) & 2) != 0 )
  {
    if ( !v11 )
    {
LABEL_47:
      v17 = 1;
      v61 = 1;
      goto LABEL_13;
    }
    v48 = 0;
    if ( *(_DWORD *)(a2 + 76) )
    {
      while ( 1 )
      {
        v49 = 32LL * v48;
        if ( *(_DWORD *)(v49 + a2 + 100) != 1 || v9 )
        {
          if ( !*(_QWORD *)(v49 + a2 + 104) )
            goto LABEL_47;
          for ( i = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL); *i; i += v51 + 1 )
          {
            if ( !wcsicmp(*(const wchar_t **)(v49 + a2 + 104), i) )
              goto LABEL_47;
            v51 = -1LL;
            do
              ++v51;
            while ( i[v51] );
          }
        }
        if ( ++v48 >= *(_DWORD *)(a2 + 76) )
          break;
        v9 = v63;
      }
    }
    goto LABEL_38;
  }
  v12 = *(_DWORD *)(v10 + 64);
  if ( v11 )
  {
    v40 = 0;
    if ( v12 )
    {
      while ( 1 )
      {
        v41 = 0;
        v42 = *(_QWORD *)(v10 + 72) + 32LL * v40;
        if ( *(_DWORD *)(a2 + 76) )
          break;
LABEL_74:
        v10 = *(_QWORD *)(a1 + 24);
        if ( ++v40 >= *(_DWORD *)(v10 + 64) )
          goto LABEL_38;
        v9 = v63;
      }
      while ( 1 )
      {
        v43 = 32LL * v41;
        if ( *(_DWORD *)(v42 + 16) == *(_DWORD *)(v43 + a2 + 96) )
        {
          v44 = *(_QWORD *)v42 - *(_QWORD *)(v43 + a2 + 80);
          if ( *(_QWORD *)v42 == *(_QWORD *)(v43 + a2 + 80) )
            v44 = *(_QWORD *)(v42 + 8) - *(_QWORD *)(v43 + a2 + 88);
          if ( !v44 )
          {
            v45 = *(_DWORD *)(v43 + a2 + 100);
            if ( *(_DWORD *)(v42 + 20) == v45 && (v45 != 1 || v9) )
            {
              if ( !*(_QWORD *)(v43 + a2 + 104) )
                goto LABEL_47;
              v52 = *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 56LL);
              if ( *v52 )
              {
                while ( wcsicmp(*(const wchar_t **)(v43 + a2 + 104), v52) )
                {
                  v53 = -1LL;
                  do
                    ++v53;
                  while ( v52[v53] );
                  v52 += v53 + 1;
                  if ( !*v52 )
                  {
                    LOBYTE(a4) = v61;
                    goto LABEL_110;
                  }
                }
                LOBYTE(a4) = 1;
                v61 = 1;
              }
LABEL_110:
              if ( (_BYTE)a4 )
                break;
            }
          }
        }
        v9 = v63;
        if ( ++v41 >= *(_DWORD *)(a2 + 76) )
          goto LABEL_74;
      }
    }
    goto LABEL_38;
  }
  v13 = 0;
  if ( !v12 )
  {
LABEL_38:
    v17 = v61;
    goto LABEL_13;
  }
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
          v32 = *(_QWORD *)v15 - *(_QWORD *)(v16 + a2 + 80);
          if ( *(_QWORD *)v15 == *(_QWORD *)(v16 + a2 + 80) )
            v32 = *(_QWORD *)(v15 + 8) - *(_QWORD *)(v16 + a2 + 88);
          if ( !v32 && *(_DWORD *)(v15 + 20) == *(_DWORD *)(v16 + a2 + 100) )
          {
            v33 = *(const wchar_t **)(v15 + 24);
            v34 = *(const wchar_t **)(v16 + a2 + 104);
            if ( (v33 == v34 || v33 && v34 && !wcsicmp(v33, v34)) && (*(_DWORD *)(v16 + a2 + 100) != 1 || v63) )
              break;
          }
        }
        if ( ++v14 >= *(_DWORD *)(a2 + 76) )
          goto LABEL_11;
      }
      v17 = 1;
      v61 = 1;
    }
    else
    {
LABEL_11:
      v17 = v61;
    }
    v10 = *(_QWORD *)(a1 + 24);
    ++v13;
  }
  while ( v13 < *(_DWORD *)(v10 + 64) );
LABEL_13:
  v18 = *(_QWORD *)(a1 + 24);
  if ( !*(_DWORD *)(v18 + 20) && (LODWORD(v18) = *(_DWORD *)(a2 + 4), (v18 & 8) != 0) )
  {
    v8 = 1;
  }
  else
  {
    v19 = 0;
    v8 = 0;
    do
    {
      if ( v19 >= *(_DWORD *)(a2 + 76) )
        break;
      v20 = *(_QWORD *)(a1 + 24);
      v21 = 0;
      v22 = 32LL * v19;
      if ( *(_DWORD *)(v20 + 80) )
      {
        while ( 1 )
        {
          v23 = *(_QWORD *)(v20 + 88);
          v24 = 56LL * v21;
          LODWORD(v18) = *(_DWORD *)(v22 + a2 + 96);
          if ( *(_DWORD *)(v24 + v23 + 24) == (_DWORD)v18 )
          {
            v37 = *(_QWORD *)(v24 + v23 + 8) - *(_QWORD *)(v22 + a2 + 80);
            if ( !v37 )
              v37 = *(_QWORD *)(v24 + v23 + 16) - *(_QWORD *)(v22 + a2 + 88);
            if ( !v37 )
            {
              LODWORD(v18) = *(_DWORD *)(v22 + a2 + 100);
              if ( *(_DWORD *)(v24 + v23 + 28) == (_DWORD)v18 )
              {
                v38 = *(const wchar_t **)(v24 + v23 + 32);
                v39 = *(const wchar_t **)(v22 + a2 + 104);
                if ( v38 == v39 || v38 && v39 && (LODWORD(v18) = wcsicmp(v38, v39), !(_DWORD)v18) )
                {
                  if ( *(_DWORD *)(v22 + a2 + 100) != 1 || v63 )
                    break;
                }
              }
            }
          }
          v20 = *(_QWORD *)(a1 + 24);
          if ( ++v21 >= *(_DWORD *)(v20 + 80) )
            goto LABEL_20;
        }
        v8 = 1;
      }
LABEL_20:
      ++v19;
    }
    while ( !v8 );
  }
  v25 = v17 == 0;
  AddObjectToResultSet = v62;
  if ( v25 && !v8 )
  {
LABEL_25:
    if ( AddObjectToResultSet >= 0 )
      return v18;
    goto LABEL_138;
  }
LABEL_27:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
  Buffer = *(_QWORD *)(a2 + 8);
  v27 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer) != 0LL;
  ExReleasePushLockEx(a1 + 64, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  LODWORD(v18) = *(_DWORD *)(a2 + 4);
  if ( (v18 & 2) != 0 )
  {
    if ( !v27 )
    {
      v29 = 0;
      v30 = 0;
      goto LABEL_34;
    }
    goto LABEL_85;
  }
  if ( (v18 & 1) == 0 && !v8 )
  {
    v28 = v27;
    goto LABEL_31;
  }
  v35 = *(_QWORD *)(a1 + 24);
  v36 = *(_DWORD *)(v35 + 20);
  if ( !v36 )
  {
    v28 = 1;
LABEL_50:
    LOBYTE(v18) = v28;
    LOBYTE(v62) = v28;
LABEL_51:
    if ( !(_BYTE)v18 )
      goto LABEL_32;
    goto LABEL_52;
  }
  v54 = v36 - 1;
  if ( !v54 )
  {
    v28 = wcsicmp(*(const wchar_t **)(v35 + 24), *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL)) == 0;
    goto LABEL_50;
  }
  if ( v54 != 1 )
    goto LABEL_32;
  v55 = *(const wchar_t **)(v35 + 32);
  v28 = 0;
  LOBYTE(v62) = 0;
  if ( !*v55 )
    goto LABEL_32;
  LOBYTE(v18) = 0;
  while ( !(_BYTE)v18 )
  {
    v28 = wcsicmp(v55, *(const wchar_t **)(*(_QWORD *)(a2 + 8) + 16LL)) == 0;
    v56 = -1LL;
    LOBYTE(v18) = v28;
    LOBYTE(v62) = v28;
    do
      ++v56;
    while ( v55[v56] );
    v55 += v56 + 1;
    if ( !*v55 )
      goto LABEL_51;
  }
LABEL_52:
  v18 = *(_QWORD *)(a1 + 24);
  if ( !*(_DWORD *)(v18 + 20) )
  {
    LODWORD(v18) = PiPnpRtlApplyMandatoryFilters(
                     *(__int64 *)&PiPnpRtlCtx,
                     *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL),
                     *(_DWORD *)(*(_QWORD *)(a2 + 8) + 28LL),
                     0LL,
                     (struct _SECURITY_SUBJECT_CONTEXT *)(a1 + 32),
                     &v62);
    AddObjectToResultSet = v18;
    if ( (_DWORD)v18 == -1073741772 || (_DWORD)v18 == -1073741275 )
    {
      v28 = 0;
      AddObjectToResultSet = 0;
      LOBYTE(v62) = 0;
    }
    else
    {
      v28 = v62;
    }
    if ( AddObjectToResultSet < 0 )
      goto LABEL_138;
  }
  if ( !v28 )
    goto LABEL_32;
  v18 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(v18 + 88) )
  {
    LODWORD(v18) = PiDqQueryEvaluateFilter((_QWORD *)a1, *(void **)(*(_QWORD *)(a2 + 8) + 16LL), (bool *)&v62);
    AddObjectToResultSet = v18;
    if ( (_DWORD)v18 == -1073741772 )
    {
      v28 = 0;
      AddObjectToResultSet = 0;
    }
    else
    {
      v28 = v62;
    }
    if ( AddObjectToResultSet < 0 )
      goto LABEL_138;
  }
LABEL_31:
  if ( v28 )
  {
    if ( v27 )
    {
      v30 = 2;
      v29 = v61 != 0;
    }
    else
    {
      v47 = KeGetCurrentThread();
      v30 = 1;
      --v47->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
      AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, *(_QWORD *)(a2 + 8));
      ExReleasePushLockEx(a1 + 64, 0LL);
      LOBYTE(v18) = (unsigned __int8)KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v29 = 1;
    }
    goto LABEL_34;
  }
LABEL_32:
  if ( v27 )
  {
LABEL_85:
    v46 = KeGetCurrentThread();
    v30 = 3;
    v29 = 1;
    --v46->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
    PiDqQueryDeleteObjectFromResultSet(a1, *(unsigned int **)(a2 + 8));
    ExReleasePushLockEx(a1 + 64, 0LL);
    LOBYTE(v18) = (unsigned __int8)KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    goto LABEL_34;
  }
  v29 = 0;
  v30 = 0;
LABEL_34:
  if ( AddObjectToResultSet >= 0 )
  {
    if ( !v29 )
      goto LABEL_25;
    AddObjectToResultSet = PiDqQueryActionQueueEntryCreate(
                             v30,
                             *(_QWORD *)(a2 + 8),
                             (volatile signed __int32 *)a2,
                             &v60);
    if ( AddObjectToResultSet >= 0 )
    {
      v31 = KeGetCurrentThread();
      --v31->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
      PiDqQueryAppendActionEntry(a1, v60);
      ExReleasePushLockEx(a1 + 64, 0LL);
      LOBYTE(v18) = (unsigned __int8)KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      goto LABEL_25;
    }
  }
LABEL_138:
  v57 = KeGetCurrentThread();
  --v57->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
  *(_DWORD *)(a1 + 216) |= 1u;
  PiDqQueryFreeActiveData(a1);
  ExReleasePushLockEx(a1 + 64, 0LL);
  LOBYTE(v18) = (unsigned __int8)KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v18;
}
