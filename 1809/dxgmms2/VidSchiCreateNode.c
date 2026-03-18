/*
 * XREFs of VidSchiCreateNode @ 0x1C0082CEC
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C0081ED0 (VidSchInitializeAdapter.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0003990 (VidSchiInterlockedInsertTailList.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 */

unsigned int *__fastcall VidSchiCreateNode(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  int v4; // eax
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // r15
  size_t v9; // rbp
  unsigned int *PoolWithTag; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // esi
  unsigned int *v14; // rbx
  BOOL v15; // eax
  __int64 v16; // r10
  unsigned int v17; // edx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rcx
  struct _KEVENT *v23; // rbp
  __int64 v24; // r14
  __int64 v25; // rcx
  unsigned int *v26; // rcx
  unsigned int v27; // ecx
  unsigned int *result; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rcx
  _QWORD *v36; // rax

  v4 = 224 * *(_DWORD *)(a1 + 2020);
  v6 = a4;
  v7 = a3;
  v8 = (unsigned int)a2;
  v9 = v4 + 11216LL;
  if ( v9 < 0x2CB0 )
  {
    v29 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v29);
    return 0LL;
  }
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag((POOL_TYPE)512, v4 + 11216LL, 0x31616956u);
  v13 = 0;
  v14 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v30 = WdLogNewEntry5_WdWarning(v12, v11);
    WdLogEvent5_WdWarning(v30);
    return 0LL;
  }
  memset(PoolWithTag, 0, v9);
  *v14 = 828467542;
  *((_QWORD *)v14 + 3) = a1;
  *((_WORD *)v14 + 2) = v6;
  *((_WORD *)v14 + 3) = v8;
  *((_WORD *)v14 + 4) = v7;
  *((_QWORD *)v14 + 215) = 0LL;
  *((_QWORD *)v14 + 216) = 0LL;
  if ( (_WORD)v7 == 0x7FFF )
  {
    v14[3] |= 8u;
  }
  else
  {
    v15 = *(_DWORD *)(a1 + 68) == 1
       || *(_WORD *)(352LL * (unsigned __int16)v8 + *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2416LL) + 2) == (unsigned __int16)v7;
    v16 = 352 * v8;
    v17 = v15 | v14[3] & 0xFFFFFFFE;
    v14[3] = v17;
    v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 2416LL) + 352 * v8 + 24);
    if ( v18 )
      v19 = 2 * (*(_BYTE *)(74 * v7 + v18 + 68) & 1);
    else
      v19 = 0;
    v20 = v19 | v17 & 0xFFFFFFFD;
    v14[3] = v20;
    if ( (v20 & 2) != 0 )
    {
      v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 2416LL) + v16 + 24);
      v32 = v31 ? 2 * (*(_BYTE *)(74 * v7 + v31 + 68) & 2) : 0;
      v20 = v32 | (unsigned int)v20 & 0xFFFFFFFB;
      v14[3] = v20;
      if ( (v20 & 2) != 0 )
      {
        v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 2416LL) + v16 + 24);
        if ( v33 )
          v34 = *(unsigned __int16 *)(74 * v7 + v33 + 70);
        else
          v34 = 0;
        if ( !v34 )
          v34 = 0xFFFF;
        v14[427] = v34;
        *(_WORD *)(a1 + 56) = 257;
        v20 = v14[3];
      }
    }
    if ( (v20 & 1) != 0 )
    {
      if ( (_DWORD)v8 )
      {
        v35 = ((unsigned int)v20 >> 1) & 1;
        if ( ((v20 & 2) != 0) != *(_BYTE *)(a1 + 55)
          || (v20 = ((unsigned int)v20 >> 2) & 1, (_BYTE)v20 != *(_BYTE *)(a1 + 58)) )
        {
          v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v20);
          v36[3] = 281LL;
          v36[4] = 20480LL;
          v36[5] = v8;
          v36[6] = 0LL;
          v36[7] = 0LL;
          WdLogEvent5_WdCriticalError(v36);
          __debugbreak();
          JUMPOUT(0x1C00A1276LL);
        }
      }
      else
      {
        *(_BYTE *)(a1 + 55) = (v20 & 2) != 0;
        *(_BYTE *)(a1 + 58) = (v14[3] & 4) != 0;
      }
    }
  }
  KeInitializeEvent((PRKEVENT)(v14 + 2792), SynchronizationEvent, 0);
  v21 = v14 + 506;
  v22 = 32LL;
  do
  {
    v21[1] = v21;
    *v21 = v21;
    v21 += 2;
    --v22;
  }
  while ( v22 );
  *((_QWORD *)v14 + 318) = v14 + 634;
  v23 = (struct _KEVENT *)(v14 + 60);
  *((_QWORD *)v14 + 317) = v14 + 634;
  v24 = 3LL;
  *((_QWORD *)v14 + 320) = v14 + 638;
  *((_QWORD *)v14 + 319) = v14 + 638;
  *((_QWORD *)v14 + 322) = v14 + 642;
  *((_QWORD *)v14 + 321) = v14 + 642;
  *((_QWORD *)v14 + 324) = v14 + 646;
  *((_QWORD *)v14 + 323) = v14 + 646;
  *((_QWORD *)v14 + 326) = v14 + 650;
  *((_QWORD *)v14 + 325) = v14 + 650;
  do
  {
    memset(v23, 0, 0x38uLL);
    KeInitializeEvent(v23, SynchronizationEvent, 0);
    v23 = (struct _KEVENT *)((char *)v23 + 56);
    --v24;
  }
  while ( v24 );
  *((_QWORD *)v14 + 52) = v14 + 102;
  *((_QWORD *)v14 + 51) = v14 + 102;
  *((_QWORD *)v14 + 54) = v14 + 106;
  *((_QWORD *)v14 + 53) = v14 + 106;
  *((_QWORD *)v14 + 212) = v14 + 422;
  *((_QWORD *)v14 + 211) = v14 + 422;
  *((_QWORD *)v14 + 1401) = v14 + 2800;
  *((_QWORD *)v14 + 1400) = v14 + 2800;
  if ( *(_DWORD *)(a1 + 2020) )
  {
    do
    {
      v25 = 56LL * v13;
      v14[v25 + 2804] = 912353622;
      VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1656), (__int64)(v14 + 2800), &v14[v25 + 2808], 0LL);
      ++v13;
    }
    while ( v13 < *(_DWORD *)(a1 + 2020) );
  }
  v26 = *(unsigned int **)(a1 + 1968);
  if ( (unsigned int)v6 < *(_DWORD *)(a1 + 2008) )
    v26 += v6;
  v27 = *v26;
  result = v14;
  v14[2798] = -1;
  v14[710] = v27;
  *((_BYTE *)v14 + 11196) = 1;
  return result;
}
