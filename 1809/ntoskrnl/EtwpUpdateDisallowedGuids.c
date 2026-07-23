/*
 * XREFs of EtwpUpdateDisallowedGuids @ 0x1408C43DC
 * Callers:
 *     EtwpUpdateDisallowList @ 0x1408B6AD0 (EtwpUpdateDisallowList.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpDisallowedGuidAddition @ 0x1408B6364 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1408B6618 (EtwpDisallowedGuidRemoval.c)
 */

__int64 __fastcall EtwpUpdateDisallowedGuids(
        __int64 a1,
        unsigned __int16 a2,
        const void *a3,
        __int64 a4,
        PRKMUTEX Mutexa,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // ebx
  char *PoolWithTag; // rax
  char *v13; // r15
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int16 v17; // ax
  char *v18; // rsi
  char *v19; // r12
  char *v20; // r14
  char *v21; // r13
  _QWORD *v22; // rax
  _QWORD *v23; // rdi
  PVOID *v24; // rax
  _OWORD *v25; // rax
  PVOID *v26; // rax
  PVOID *v27; // rax
  PVOID *v28; // rcx
  _OWORD *v29; // rax
  PVOID *v30; // rax
  volatile signed __int64 *v31; // rdi
  void *v32; // r14
  PVOID *v33; // rax
  _QWORD *v34; // rsi
  void *v35; // rdi
  _DWORD *v36; // rcx
  void **v37; // rax
  PVOID *v38; // rax
  _QWORD *v39; // rsi
  _QWORD *v40; // rax
  _QWORD *v41; // rdi
  _QWORD *v42; // rcx
  PVOID *v43; // rax
  _QWORD *v44; // rdi
  __int64 v45; // rax
  _QWORD *v46; // rcx
  _QWORD *v47; // rdx
  PVOID *v48; // rax
  _QWORD *v49; // rsi
  _DWORD **v50; // rdi
  _DWORD *v51; // rcx
  void **v52; // rax
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  PVOID *p_P; // [rsp+38h] [rbp-18h]
  PVOID v55; // [rsp+40h] [rbp-10h] BYREF
  PVOID *v56; // [rsp+48h] [rbp-8h]
  int v59; // [rsp+A8h] [rbp+58h]
  struct _KMUTANT *Mutex; // [rsp+B0h] [rbp+60h]

  v7 = 0;
  if ( a2 > 0x200u )
    return 3221225485LL;
  p_P = &P;
  P = &P;
  v56 = &v55;
  v55 = &v55;
  if ( a2 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 16LL * a2, 0x64777445u);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_50:
      v7 = -1073741670;
      goto LABEL_51;
    }
    memmove(PoolWithTag, a3, 16LL * a2);
    qsort(v13, a2, 0x10uLL, (int (__cdecl *)(const void *, const void *))EtwpCompareGuid);
    v14 = 0;
    if ( a2 != 1 )
    {
      while ( 1 )
      {
        v15 = 16LL * v14;
        v16 = *(_QWORD *)&v13[v15] - *(_QWORD *)&v13[v15 + 16];
        if ( !v16 )
          v16 = *(_QWORD *)&v13[v15 + 8] - *(_QWORD *)&v13[v15 + 24];
        if ( !v16 )
          break;
        if ( ++v14 >= (unsigned int)a2 - 1 )
          goto LABEL_13;
      }
      ExFreePoolWithTag(v13, 0);
      v7 = -1073741811;
LABEL_51:
      v38 = (PVOID *)P;
      v39 = P;
      while ( v38 != &P )
      {
        v40 = (_QWORD *)*v39;
        v41 = v39;
        v39 = v40;
        if ( (_QWORD *)v40[1] != v41 )
          goto LABEL_66;
        v42 = (_QWORD *)v41[1];
        if ( (_QWORD *)*v42 != v41 )
          goto LABEL_66;
        *v42 = v40;
        v40[1] = v42;
        ExFreePoolWithTag((PVOID)v41[2], 0);
        ExFreePoolWithTag(v41, 0);
        v38 = (PVOID *)P;
      }
      v43 = (PVOID *)v55;
      v44 = v55;
      while ( v43 != &v55 )
      {
        v45 = *v44;
        v46 = v44;
        v44 = (_QWORD *)v45;
        if ( *(_QWORD **)(v45 + 8) != v46 )
          goto LABEL_66;
        v47 = (_QWORD *)v46[1];
        if ( (_QWORD *)*v47 != v46 )
          goto LABEL_66;
        *v47 = v45;
        *(_QWORD *)(v45 + 8) = v47;
        ExFreePoolWithTag(v46, 0);
        v43 = (PVOID *)v55;
      }
      return v7;
    }
  }
  else
  {
    v13 = 0LL;
  }
LABEL_13:
  Mutex = (struct _KMUTANT *)(a1 + 648);
  KeWaitForSingleObject((PVOID)(a1 + 648), Executive, 0, 0, 0LL);
  v17 = *(_WORD *)(a1 + 1048);
  if ( v17 )
  {
    v18 = *(char **)(a1 + 1056);
    v19 = &v18[16 * v17];
  }
  else
  {
    v18 = 0LL;
    v19 = 0LL;
  }
  if ( a2 )
  {
    v20 = v13;
    v21 = &v13[16 * a2];
  }
  else
  {
    v20 = 0LL;
    v21 = 0LL;
  }
  while ( v18 < v19 )
  {
    if ( v20 >= v21 )
    {
      while ( 1 )
      {
        v27 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
        if ( !v27 )
          goto LABEL_49;
        v27[2] = v18;
        v28 = v56;
        if ( *v56 != &v55 )
          goto LABEL_66;
        v27[1] = v56;
        *v27 = &v55;
        v18 += 16;
        *v28 = v27;
        v56 = v27;
        if ( v18 >= v19 )
          goto LABEL_36;
      }
    }
    v59 = memcmp(v18, v20, 0x10uLL);
    if ( !v59 )
    {
      v18 += 16;
      goto LABEL_30;
    }
    v22 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
    v23 = v22;
    if ( v59 >= 0 )
    {
      if ( !v22 )
        goto LABEL_49;
      v25 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74777445u);
      if ( !v25 )
      {
LABEL_48:
        ExFreePoolWithTag(v23, 0);
LABEL_49:
        KeReleaseMutex(Mutex, 0);
        goto LABEL_50;
      }
      *v25 = *(_OWORD *)v20;
      v23[2] = v25;
      v26 = p_P;
      if ( *p_P != &P )
        goto LABEL_66;
      v23[1] = p_P;
      *v23 = &P;
      *v26 = v23;
      p_P = (PVOID *)v23;
LABEL_30:
      v20 += 16;
    }
    else
    {
      if ( !v22 )
        goto LABEL_49;
      v22[2] = v18;
      v24 = v56;
      if ( *v56 != &v55 )
LABEL_66:
        __fastfail(3u);
      v23[1] = v56;
      *v23 = &v55;
      v18 += 16;
      *v24 = v23;
      v56 = (PVOID *)v23;
    }
  }
LABEL_36:
  while ( v20 < v21 )
  {
    v23 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74777445u);
    if ( !v23 )
      goto LABEL_49;
    v29 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74777445u);
    if ( !v29 )
      goto LABEL_48;
    *v29 = *(_OWORD *)v20;
    v23[2] = v29;
    v30 = p_P;
    if ( *p_P != &P )
      goto LABEL_66;
    v23[1] = p_P;
    *v23 = &P;
    v20 += 16;
    *v30 = v23;
    p_P = (PVOID *)v23;
  }
  v31 = (volatile signed __int64 *)(a1 + 704);
  ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
  v32 = *(void **)(a1 + 1056);
  *(_WORD *)(a1 + 1048) = a2;
  *(_QWORD *)(a1 + 1056) = v13;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v31);
  KeAbPostRelease((ULONG_PTR)v31);
  KeReleaseMutex((PRKMUTEX)(a1 + 648), 0);
  v33 = (PVOID *)P;
  v34 = P;
  while ( v33 != &P )
  {
    v35 = v34;
    v34 = (_QWORD *)*v34;
    EtwpDisallowedGuidAddition(*((_DWORD **)v35 + 2), a7);
    v36 = *(_DWORD **)v35;
    if ( *(void **)(*(_QWORD *)v35 + 8LL) != v35 )
      goto LABEL_66;
    v37 = (void **)*((_QWORD *)v35 + 1);
    if ( *v37 != v35 )
      goto LABEL_66;
    *v37 = v36;
    *((_QWORD *)v36 + 1) = v37;
    ExFreePoolWithTag(*((PVOID *)v35 + 2), 0);
    ExFreePoolWithTag(v35, 0);
    v33 = (PVOID *)P;
  }
  v48 = (PVOID *)v55;
  v49 = v55;
  while ( v48 != &v55 )
  {
    v50 = (_DWORD **)v49;
    v49 = (_QWORD *)*v49;
    EtwpDisallowedGuidRemoval(v50[2], a7);
    v51 = *v50;
    if ( *((_DWORD ***)*v50 + 1) != v50 )
      goto LABEL_66;
    v52 = (void **)v50[1];
    if ( *v52 != v50 )
      goto LABEL_66;
    *v52 = v51;
    *((_QWORD *)v51 + 1) = v52;
    ExFreePoolWithTag(v50, 0);
    v48 = (PVOID *)v55;
  }
  if ( v32 )
    ExFreePoolWithTag(v32, 0);
  return v7;
}
