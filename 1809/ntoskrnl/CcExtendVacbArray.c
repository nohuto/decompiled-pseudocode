/*
 * XREFs of CcExtendVacbArray @ 0x14012CA94
 * Callers:
 *     CcSetFileSizesEx @ 0x14007CFB0 (CcSetFileSizesEx.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     VacbLevelReference @ 0x140022BAC (VacbLevelReference.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     CcFreeUnusedVacbLevels @ 0x14012CF4C (CcFreeUnusedVacbLevels.c)
 *     CcReleaseBcbLockAndVacbLock @ 0x14012CFA4 (CcReleaseBcbLockAndVacbLock.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x14012CFE4 (CcAcquireBcbLockAndVacbLock.c)
 *     CcAllocateVacbLevels @ 0x14012D018 (CcAllocateVacbLevels.c)
 *     CcAllocateVacbLevel @ 0x14012D0BC (CcAllocateVacbLevel.c)
 *     CcCalculateVacbLevelLockCount @ 0x14015FC6C (CcCalculateVacbLevelLockCount.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcExtendVacbArray(__int64 a1, __int64 a2)
{
  BOOL v2; // r15d
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ebp
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // r13d
  char *PoolWithTag; // r12
  char *v14; // r14
  unsigned int v16; // edi
  int v17; // ecx
  unsigned int v18; // ebp
  __int64 v19; // rax
  char *v20; // rcx
  char *v21; // rdx
  __int64 v22; // r9
  char **v23; // r8
  char **v24; // r8
  char *j; // rdx
  char *v26; // r9
  char **i; // rdx
  KIRQL v28; // al
  _QWORD *v29; // r14
  __int64 v30; // r8
  _QWORD *v31; // rax
  char *v32; // r8
  _QWORD *VacbLevel; // rax
  _DWORD *v34; // rax
  __int64 v35; // rdx
  _QWORD v36[3]; // [rsp+20h] [rbp-48h] BYREF
  int v37; // [rsp+38h] [rbp-30h]
  unsigned int v38; // [rsp+78h] [rbp+10h]

  v2 = 0;
  if ( a2 < 0 )
    return 3221225536LL;
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
    v2 = a2 > 0x200000;
  v36[2] = 0LL;
  v37 = 0;
  v5 = *(_QWORD *)(a1 + 32);
  v36[1] = v36;
  v36[0] = v36;
  if ( a2 <= v5 )
    goto LABEL_32;
  if ( v5 >= 0x2000000 )
    goto LABEL_31;
  v6 = a2;
  v7 = a2;
  if ( a2 >= 0x2000000 )
  {
    v6 = 0x2000000LL;
    v7 = 0x2000000;
  }
  v8 = 0;
  if ( a2 < 0x2000000 )
    v8 = HIDWORD(a2);
  v9 = -1;
  if ( v8 )
  {
    v10 = -1;
  }
  else if ( v7 <= 0x100000 )
  {
    v10 = 32;
  }
  else
  {
    v10 = 8 * (v7 >> 18);
  }
  v38 = v10;
  if ( !HIDWORD(v5) )
  {
    if ( (unsigned int)v5 <= 0x100000 )
      v9 = 32;
    else
      v9 = 8 * ((unsigned int)v5 >> 18);
  }
  if ( v10 <= v9 )
  {
LABEL_30:
    *(_QWORD *)(a1 + 32) = v6;
    v5 = v6;
LABEL_31:
    if ( a2 <= v5 )
    {
LABEL_32:
      CcFreeUnusedVacbLevels(v36);
      return 0LL;
    }
    v16 = 1;
    v17 = 25;
    if ( v5 > 0x2000000 )
    {
      do
      {
        v17 += 7;
        ++v16;
      }
      while ( *(_QWORD *)(a1 + 32) > 1LL << v17 );
    }
    v18 = v16;
    if ( !((a2 - 1) >> v17) )
      goto LABEL_36;
    do
    {
      v17 += 7;
      ++v18;
    }
    while ( (a2 - 1) >> v17 );
    if ( v18 <= v16 )
    {
LABEL_36:
      *(_QWORD *)(a1 + 32) = a2;
      goto LABEL_32;
    }
    v28 = KeAcquireQueuedSpinLock(4uLL);
    if ( v18 >= CcMaxVacbLevelsSeen )
      CcMaxVacbLevelsSeen = v18 + 1;
    KeReleaseQueuedSpinLock(4uLL, v28);
    if ( (unsigned __int8)CcAllocateVacbLevels(v18 - v16, 0LL, v36) )
    {
      CcAcquireBcbLockAndVacbLock(v2, a1);
      if ( v16 == 1 )
        CcCalculateVacbLevelLockCount(a1, *(_QWORD *)(a1 + 88));
      v29 = *(_QWORD **)(a1 + 88);
      if ( *(_QWORD *)VacbLevelReference(a1, (__int64)v29, v16 - 1) )
      {
        while ( v16 < v18 )
        {
          ++v16;
          VacbLevel = (_QWORD *)CcAllocateVacbLevel(v36, 0LL);
          *VacbLevel = *(_QWORD *)(a1 + 88);
          v34 = (_DWORD *)VacbLevelReference(a1, (__int64)VacbLevel, v16);
          ++*v34;
          *(_QWORD *)(a1 + 88) = v35;
        }
      }
      else if ( v16 == 1 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      {
        *(_QWORD *)(a1 + 88) = CcAllocateVacbLevel(v36, 0LL);
        v30 = v29[128];
        v31 = (_QWORD *)v29[255];
        *(_QWORD *)(v30 + 8) = v31;
        *v31 = v30;
        ExFreeToNPagedLookasideList(&CcVacbLevelWithBcbListHeadsLookasideList, v29);
      }
      *(_QWORD *)(a1 + 32) = a2;
      CcReleaseBcbLockAndVacbLock(v2, a1);
      goto LABEL_36;
    }
    return 3221225626LL;
  }
  if ( v2 )
    v10 += (v10 + 15) & 0xFFFFFFF0;
  v11 = v10 + 8;
  if ( a2 < 0x2000000 )
    v11 = v10;
  v12 = v11;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x70566343u);
  if ( PoolWithTag )
  {
    CcAcquireBcbLockAndVacbLock(v2, a1);
    v14 = *(char **)(a1 + 88);
    if ( v14 )
      memmove(PoolWithTag, *(const void **)(a1 + 88), v9);
    else
      v9 = 0;
    memset(&PoolWithTag[v9], 0, v38 - v9);
    if ( a2 >= 0x2000000 )
      *(_QWORD *)&PoolWithTag[v12 - 8] = 0LL;
    if ( v2 )
    {
      v19 = 0LL;
      v20 = &PoolWithTag[v38];
      if ( *(__int64 *)(a1 + 32) > 0x200000 && v14 )
      {
        v21 = &v14[v9];
        while ( 1 )
        {
          v22 = *(_QWORD *)v21;
          v23 = (char **)*((_QWORD *)v21 + 1);
          if ( *(char **)(*(_QWORD *)v21 + 8LL) != v21 )
            goto LABEL_76;
          if ( *v23 != v21 )
            goto LABEL_76;
          *v23 = (char *)v22;
          *(_QWORD *)(v22 + 8) = v23;
          if ( *v23 != (char *)v22 )
            goto LABEL_76;
          *(_QWORD *)v20 = v22;
          v19 += 0x80000LL;
          *(_QWORD *)&PoolWithTag[v38 - (unsigned __int64)v9 - (_QWORD)v14 + 8 + (_QWORD)v21] = v23;
          v21 += 16;
          *v23 = v20;
          *(_QWORD *)(v22 + 8) = v20;
          v20 += 16;
          if ( v19 >= *(_QWORD *)(a1 + 32) )
            goto LABEL_45;
        }
      }
      for ( i = *(char ***)(a1 + 24); i != (char **)(a1 + 16); i = (char **)i[1] )
      {
        if ( v19 <= (__int64)*(i - 1) )
        {
          v32 = *i;
          while ( *((char ***)v32 + 1) == i )
          {
            *(_QWORD *)v20 = v32;
            v19 += 0x80000LL;
            *((_QWORD *)v20 + 1) = i;
            *((_QWORD *)v32 + 1) = v20;
            v32 = v20;
            *i = v20;
            v20 += 16;
            if ( v19 > (__int64)*(i - 1) )
              goto LABEL_54;
          }
LABEL_76:
          __fastfail(3u);
        }
LABEL_54:
        ;
      }
LABEL_45:
      if ( v19 < v6 )
      {
        v24 = (char **)(a1 + 16);
        for ( j = *(char **)(a1 + 16); ; j = v26 )
        {
          v26 = v20;
          if ( *((char ***)j + 1) != v24 )
            break;
          *(_QWORD *)v20 = j;
          v19 += 0x80000LL;
          *((_QWORD *)v20 + 1) = v24;
          *((_QWORD *)j + 1) = v20;
          *v24 = v20;
          v20 += 16;
          if ( v19 >= v6 )
            goto LABEL_27;
        }
        goto LABEL_76;
      }
    }
LABEL_27:
    *(_QWORD *)(a1 + 88) = PoolWithTag;
    *(_QWORD *)(a1 + 32) = v6;
    CcReleaseBcbLockAndVacbLock(v2, a1);
    if ( v14 != (char *)(a1 + 56) && v14 )
      ExFreePoolWithTag(v14, 0);
    goto LABEL_30;
  }
  return 3221225626LL;
}
