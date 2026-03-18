/*
 * XREFs of CreateNewEventEntry @ 0x1C00DDDF8
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1C00DA21C (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     CBufferGetNextOffset @ 0x1C00DE038 (CBufferGetNextOffset.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall CreateNewEventEntry(
        char a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5,
        int a6,
        __int64 *a7)
{
  unsigned __int8 v7; // di
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int8 v13; // al
  unsigned int *v14; // rcx
  __int64 v15; // rdx
  SIZE_T v16; // r14
  PVOID PoolWithTag; // rax
  PVOID v18; // rbx
  __int64 NextOffset; // r12
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int128 v22; // xmm0
  unsigned __int8 v23; // r14
  const void **v24; // rsi
  __int64 v25; // r12
  __int64 v26; // rbp
  unsigned int v27; // edx
  void *v28; // rbx
  char *v29; // rdx
  int v30; // eax
  unsigned int v32; // edx
  void *v33; // rbx
  PVOID v34; // [rsp+20h] [rbp-38h] BYREF
  SIZE_T v35; // [rsp+28h] [rbp-30h]

  v7 = 0;
  v34 = 0LL;
  v35 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  *a7 = 0LL;
  v13 = 0;
  if ( a3 )
  {
    v14 = (unsigned int *)(a4 + 8);
    do
    {
      v15 = *v14;
      if ( v13 < 2u )
        v11 += v15;
      else
        v12 += v15;
      ++v13;
      v14 += 4;
    }
    while ( v13 < a3 );
  }
  if ( (unsigned __int64)(v12 + v11) > 0xFFFF )
    return 3221225621LL;
  v16 = v12 + 16LL * a3 + 46;
  if ( !v16 )
    return 3221225495LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a1 != 0 ? PagedPool : 512), v16, 0x47417254u);
  v18 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, v16);
  v34 = v18;
  if ( !v18 )
    return 3221225495LL;
  v35 = v16;
  NextOffset = CBufferGetNextOffset(&v34, 16LL * a3);
  if ( a5 != -2 )
  {
    do
    {
      if ( v7 >= 2u )
      {
        v33 = (void *)CBufferGetNextOffset(&v34, *(unsigned int *)(a4 + 16LL * v7 + 8));
        memmove(v33, *(const void **)(a4 + 16LL * v7), v32);
        *(_QWORD *)(NextOffset + 16LL * v7) = v33;
        *(_DWORD *)(NextOffset + 16LL * v7 + 12) = *(_DWORD *)(a4 + 16LL * v7 + 12);
        *(_DWORD *)(NextOffset + 16LL * v7 + 8) = *(_DWORD *)(a4 + 16LL * v7 + 8);
      }
      else
      {
        *(_OWORD *)(NextOffset + 16LL * v7) = *(_OWORD *)(a4 + 16LL * v7);
      }
      ++v7;
    }
    while ( v7 < (unsigned int)a5 + 2 );
  }
  v21 = CBufferGetNextOffset(&v34, 46LL);
  *(_QWORD *)(v21 + 16) = NextOffset;
  v22 = *a2;
  *(_BYTE *)(v21 + 45) = a5;
  v23 = a5 + 2;
  *(_BYTE *)(v21 + 44) = a3;
  *(_DWORD *)(v21 + 40) = a6;
  *(_OWORD *)v21 = v22;
  if ( (unsigned __int8)(a5 + 2) < a3 )
  {
    v24 = (const void **)(16LL * v23 + a4 + 8);
    v25 = v20 - 54 - a4;
    v26 = (unsigned __int8)(a3 - v23);
    do
    {
      v28 = (void *)CBufferGetNextOffset(&v34, *(unsigned int *)v24);
      memmove(v28, *(v24 - 1), v27);
      v29 = (char *)v24 + v25;
      *(_QWORD *)&v29[*(_QWORD *)(v21 + 16)] = v28;
      *(_DWORD *)&v29[*(_QWORD *)(v21 + 16) + 12] = *((_DWORD *)v24 + 1);
      v30 = *(_DWORD *)v24;
      v24 += 2;
      *(_DWORD *)&v29[*(_QWORD *)(v21 + 16) + 8] = v30;
      --v26;
    }
    while ( v26 );
  }
  *a7 = v21;
  return 0LL;
}
