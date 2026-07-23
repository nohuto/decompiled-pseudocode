/*
 * XREFs of MiLockMemoryLists @ 0x1401564C0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 */

__int64 __fastcall MiLockMemoryLists(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  unsigned int v4; // ebx
  int v6; // edx
  int v7; // ecx
  __int64 result; // rax
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 *v11; // r14
  __int64 v12; // r12
  __int64 v13; // r15
  unsigned int v14; // r13d
  __int64 i; // rbp
  _QWORD *v16; // rcx
  volatile __int64 *v17; // rdx
  volatile __int64 *v18; // r14
  _QWORD *v19; // rcx
  _QWORD *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  volatile __int64 *v23; // r14
  __int64 v24; // r15
  _QWORD *v25; // rcx
  unsigned int v26; // r15d
  volatile __int64 *v27; // r14
  _QWORD *v28; // rcx
  _QWORD *v29; // rcx

  v3 = *(_QWORD **)(a1 + 4968);
  v4 = 0;
  if ( a2 )
  {
    *v3 = 0LL;
    v3[1] = a1 + 4064;
    KxAcquireQueuedSpinLock((__int64)v3, (volatile __int64 *)(a1 + 4064), a3);
    LODWORD(v10) = 1;
    v11 = (__int64 *)(a1 + 2112);
    v12 = 2LL;
    v13 = 8LL;
    do
    {
      v14 = 0;
      for ( i = *v11; v14 < dword_14043B14C; ++v14 )
      {
        v16 = &v3[3 * (unsigned int)v10];
        *v16 = 0LL;
        v17 = (volatile __int64 *)(i + 8 * (v14 + 4 * (v14 + 1LL)));
        v16[1] = v17;
        KxAcquireQueuedSpinLock((__int64)v16, v17, v9);
        LODWORD(v10) = v10 + 1;
      }
      ++v11;
      --v12;
    }
    while ( v12 );
    v18 = (volatile __int64 *)(a1 + 2400);
    do
    {
      v19 = &v3[3 * (unsigned int)v10];
      v19[1] = v18;
      *v19 = 0LL;
      KxAcquireQueuedSpinLock((__int64)v19, v18, v9);
      v18 += 5;
      v10 = (unsigned int)(v10 + 1);
      --v13;
    }
    while ( v13 );
    v20 = &v3[3 * v10];
    v20[1] = a1 + 7712;
    *v20 = 0LL;
    KxAcquireQueuedSpinLock((__int64)v20, (volatile __int64 *)(a1 + 7712), v9);
    v22 = (unsigned int)(v10 + 1);
    v23 = (volatile __int64 *)(a1 + 3424);
    v24 = 16LL;
    do
    {
      v25 = &v3[3 * v22];
      v25[1] = v23;
      *v25 = 0LL;
      KxAcquireQueuedSpinLock((__int64)v25, v23, v21);
      v23 += 5;
      v22 = (unsigned int)(v22 + 1);
      --v24;
    }
    while ( v24 );
    v26 = 0;
    if ( KeNumberNodes )
    {
      v27 = (volatile __int64 *)(*(_QWORD *)(a1 + 16) + 1928LL);
      do
      {
        v28 = &v3[3 * v22];
        v28[1] = v27;
        *v28 = 0LL;
        KxAcquireQueuedSpinLock((__int64)v28, v27, v21);
        v22 = (unsigned int)(v22 + 1);
        v27 += 248;
        ++v26;
      }
      while ( v26 < (unsigned __int16)KeNumberNodes );
    }
    v29 = &v3[3 * v22];
    v29[1] = a1 + 7776;
    *v29 = 0LL;
    return KxAcquireQueuedSpinLock((__int64)v29, (volatile __int64 *)(a1 + 7776), v21);
  }
  else
  {
    v6 = dword_14043B14C;
    v7 = (unsigned __int16)KeNumberNodes;
    result = (unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_14043B14C + 27;
    if ( (_DWORD)result )
    {
      do
      {
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&v3[3 * v7 + 3 * (2 * v6 + 26 - v4)]);
        v6 = dword_14043B14C;
        ++v4;
        v7 = (unsigned __int16)KeNumberNodes;
        result = (unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_14043B14C + 27;
      }
      while ( v4 < (unsigned int)result );
    }
  }
  return result;
}
