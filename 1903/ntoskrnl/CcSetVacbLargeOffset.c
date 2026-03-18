/*
 * XREFs of CcSetVacbLargeOffset @ 0x14007ACE4
 * Callers:
 *     CcUnmapVacbArray @ 0x140079F40 (CcUnmapVacbArray.c)
 *     SetVacb @ 0x14007A558 (SetVacb.c)
 *     CcAdjustVacbLevelLockCount @ 0x14007AFE4 (CcAdjustVacbLevelLockCount.c)
 * Callees:
 *     VacbLevelReference @ 0x14007B08C (VacbLevelReference.c)
 *     CcGetBcbListHeadLargeOffset @ 0x14007D4D0 (CcGetBcbListHeadLargeOffset.c)
 *     CcAllocateVacbLevels @ 0x14009A458 (CcAllocateVacbLevels.c)
 *     CcFreeUnusedVacbLevels @ 0x140130090 (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevel @ 0x1401300E8 (CcAllocateVacbLevel.c)
 *     CcDeallocateVacbLevel @ 0x14013016C (CcDeallocateVacbLevel.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

char __fastcall CcSetVacbLargeOffset(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v5; // r12
  __int64 v7; // r15
  _QWORD *v8; // rdi
  int v9; // ecx
  _QWORD *v10; // r10
  unsigned int v11; // ebx
  int v12; // r8d
  unsigned int v13; // r9d
  __int64 v14; // rdx
  __int64 VacbLevel; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // r12d
  _DWORD *v19; // rax
  _DWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r10d
  unsigned int v26; // eax
  int v27; // eax
  unsigned int v28; // r12d
  _QWORD *v29; // rax
  _DWORD *v30; // rax
  __int64 BcbListHeadLargeOffset; // rax
  __int64 i; // rcx
  _QWORD *v33; // r9
  _QWORD *v34; // rdx
  __int64 v35; // r10
  _QWORD *v36; // rax
  _QWORD *v37; // rcx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  int v40; // [rsp+20h] [rbp-89h]
  unsigned int v42; // [rsp+30h] [rbp-79h]
  __int64 v43; // [rsp+38h] [rbp-71h]
  _QWORD v44[4]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v45; // [rsp+60h] [rbp-49h]
  __int64 v46; // [rsp+68h] [rbp-41h]
  _DWORD v47[22]; // [rsp+70h] [rbp-39h]

  v5 = a2;
  v43 = a2;
  v45 = a2;
  v7 = 0LL;
  memset(v44, 0, sizeof(v44));
  v8 = *(_QWORD **)(a1 + 88);
  v9 = 25;
  v10 = 0LL;
  v11 = 0;
  do
  {
    v12 = v9;
    v40 = v9;
    v9 += 7;
    ++v11;
  }
  while ( *(_QWORD *)(a1 + 32) > 1LL << v9 );
  do
  {
    v42 = v11;
    v13 = v11;
    v14 = v5 >> v12;
    --v11;
    if ( (unsigned int)v7 >= 7 )
      return 0;
    v47[v7] = v14;
    *(_QWORD *)&v47[2 * v7 + 8] = v8;
    v7 = (unsigned int)(v7 + 1);
    v46 = (unsigned int)v14;
    VacbLevel = v8[(unsigned int)v14];
    if ( !VacbLevel )
    {
      v27 = *(_DWORD *)(a1 + 152) & 0x200;
      if ( !v27 || (v28 = 1, v11) )
        v28 = (unsigned int)v10;
      if ( a4 == v10 )
      {
        v44[2] = v10;
        v44[1] = v44;
        LODWORD(v44[3]) = (_DWORD)v10;
        v44[0] = v44;
        LOBYTE(v14) = v27 != 0;
        if ( !(unsigned __int8)CcAllocateVacbLevels(v13, v14, v44) )
          return 0;
        v29 = v44;
        a4 = v44;
      }
      else
      {
        v29 = a4;
      }
      VacbLevel = CcAllocateVacbLevel(v29, v28);
      if ( v28 )
      {
        BcbListHeadLargeOffset = CcGetBcbListHeadLargeOffset(a1, v45, 0LL);
        for ( i = *(_QWORD *)(BcbListHeadLargeOffset + 8); *(_WORD *)(i - 16) == 765; i = *(_QWORD *)(i + 8) )
          BcbListHeadLargeOffset = i;
        v33 = *(_QWORD **)(BcbListHeadLargeOffset + 8);
        v34 = (_QWORD *)(VacbLevel + 1024);
        *(_QWORD *)(BcbListHeadLargeOffset + 8) = VacbLevel + 1024;
        v35 = 63LL;
        *(_QWORD *)(VacbLevel + 1024) = BcbListHeadLargeOffset;
        do
        {
          v36 = v34 + 2;
          v37 = v34;
          v34[1] = v34 + 2;
          v34 = v36;
          *v36 = v37;
          --v35;
        }
        while ( v35 );
        v36[1] = v33;
        *v33 = v36;
      }
      v8[v46] = VacbLevel;
      v30 = (_DWORD *)VacbLevelReference(a1, v8, v42);
      v5 = v43;
      v12 = v40;
      ++*v30;
    }
    v16 = 1LL << v12;
    v12 -= 7;
    v40 = v12;
    v5 &= v16 - 1;
    v8 = (_QWORD *)VacbLevel;
    v43 = v5;
  }
  while ( v11 );
  if ( a3 >= 0xFFFFFFFFFFFFFFFEuLL )
  {
    v18 = 1;
    if ( a3 == -2LL )
      a3 = (unsigned __int64)v10;
  }
  else
  {
    v17 = (unsigned int)(v5 >> v12);
    v18 = 0;
    *(_QWORD *)(VacbLevel + 8 * v17) = a3;
  }
  if ( a3 )
  {
    v19 = (_DWORD *)VacbLevelReference(a1, VacbLevel, 0LL);
    if ( v18 )
      ++v19[1];
    else
      ++*v19;
  }
  else
  {
    while ( 1 )
    {
      v21 = (_DWORD *)VacbLevelReference(a1, v8, v11);
      if ( v18 )
        --v21[1];
      else
        --*v21;
      v18 = v25;
      if ( *(_QWORD *)VacbLevelReference(v23, v22, v24) || !(_DWORD)v7 )
        break;
      v26 = v11;
      v7 = (unsigned int)(v7 - 1);
      ++v11;
      if ( !v26 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      {
        v38 = v8[128];
        v39 = (_QWORD *)v8[255];
        *(_QWORD *)(v38 + 8) = v39;
        *v39 = v38;
      }
      CcDeallocateVacbLevel(v8);
      v8 = *(_QWORD **)&v47[2 * v7 + 8];
      v8[v47[v7]] = 0LL;
    }
  }
  if ( a4 == v44 )
    CcFreeUnusedVacbLevels(a4);
  return 1;
}
