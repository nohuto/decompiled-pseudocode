/*
 * XREFs of CreateNewEventEntry @ 0x1C01677A0
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1C0167C1C (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     CBufferGetNextOffset @ 0x1C016776C (CBufferGetNextOffset.c)
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
  SIZE_T v17; // r14
  PVOID PoolWithTag; // rax
  __int64 v19; // rbx
  __int64 NextOffset; // r12
  unsigned int v21; // edx
  void *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int128 v25; // xmm0
  unsigned __int8 v26; // r14
  const void **v27; // rsi
  __int64 v28; // r12
  __int64 v29; // rbp
  unsigned int v30; // edx
  void *v31; // rbx
  char *v32; // rdx
  int v33; // eax
  __int64 v34; // [rsp+20h] [rbp-38h] BYREF
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
      if ( v13 >= 2u )
        v12 += v15;
      else
        v11 += v15;
      ++v13;
      v14 += 4;
    }
    while ( v13 < a3 );
  }
  if ( (unsigned __int64)(v12 + v11) > 0xFFFF )
    return 3221225621LL;
  v17 = v12 + 16LL * a3 + 46;
  if ( !v17 )
    return 3221225495LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a1 != 0 ? PagedPool : 512), v17, 0x47417254u);
  v19 = (__int64)PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, v17);
  v34 = v19;
  if ( !v19 )
    return 3221225495LL;
  v35 = v17;
  NextOffset = CBufferGetNextOffset(&v34, 16LL * a3);
  if ( a5 != -2 )
  {
    do
    {
      if ( v7 >= 2u )
      {
        v22 = (void *)CBufferGetNextOffset(&v34, *(unsigned int *)(a4 + 16LL * v7 + 8));
        memmove(v22, *(const void **)(a4 + 16LL * v7), v21);
        *(_QWORD *)(NextOffset + 16LL * v7) = v22;
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
  v24 = CBufferGetNextOffset(&v34, 0x2EuLL);
  *(_QWORD *)(v24 + 16) = NextOffset;
  v25 = *a2;
  *(_BYTE *)(v24 + 45) = a5;
  v26 = a5 + 2;
  *(_BYTE *)(v24 + 44) = a3;
  *(_DWORD *)(v24 + 40) = a6;
  *(_OWORD *)v24 = v25;
  if ( (unsigned __int8)(a5 + 2) < a3 )
  {
    v27 = (const void **)(16LL * v26 + a4 + 8);
    v28 = v23 - 54 - a4;
    v29 = (unsigned __int8)(a3 - v26);
    do
    {
      v31 = (void *)CBufferGetNextOffset(&v34, *(unsigned int *)v27);
      memmove(v31, *(v27 - 1), v30);
      v32 = (char *)v27 + v28;
      *(_QWORD *)&v32[*(_QWORD *)(v24 + 16)] = v31;
      *(_DWORD *)&v32[*(_QWORD *)(v24 + 16) + 12] = *((_DWORD *)v27 + 1);
      v33 = *(_DWORD *)v27;
      v27 += 2;
      *(_DWORD *)&v32[*(_QWORD *)(v24 + 16) + 8] = v33;
      --v29;
    }
    while ( v29 );
  }
  *a7 = v24;
  return 0LL;
}
