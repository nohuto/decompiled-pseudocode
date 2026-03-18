/*
 * XREFs of CreateNewEventEntry @ 0x1C01C8320
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1C01C8798 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     memset @ 0x1C00BF640 (memset.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 *     CBufferGetNextOffset @ 0x1C01C82EC (CBufferGetNextOffset.c)
 */

__int64 __fastcall CreateNewEventEntry(
        char a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        int a6,
        __int64 *a7)
{
  unsigned __int8 v7; // di
  __int64 v10; // r8
  __int64 v11; // rsi
  unsigned int *v12; // r11
  unsigned __int8 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  SIZE_T v17; // rsi
  PVOID PoolWithTag; // rax
  __int64 v19; // rbx
  __int64 NextOffset; // r12
  unsigned int v21; // edx
  void *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int128 v25; // xmm0
  unsigned __int8 v26; // bp
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
  v10 = 0LL;
  v35 = 0LL;
  v11 = 0LL;
  v12 = (unsigned int *)(a4 + 8);
  v13 = 0;
  *a7 = 0LL;
  do
  {
    v14 = *v12;
    v12 += 4;
    if ( v13 >= 2u )
      v11 += v14;
    v15 = v14 + v10;
    if ( v13 >= 2u )
      v15 = v10;
    ++v13;
    v10 = v15;
  }
  while ( v13 < 7u );
  if ( (unsigned __int64)(v11 + v15) > 0xFFFF )
    return 3221225621LL;
  v17 = v11 + 158;
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
  NextOffset = CBufferGetNextOffset(&v34, 0x70uLL);
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
  *(_BYTE *)(v24 + 44) = 7;
  *(_DWORD *)(v24 + 40) = a6;
  *(_OWORD *)v24 = v25;
  if ( (unsigned __int8)(a5 + 2) < 7u )
  {
    v27 = (const void **)(16LL * v26 + a4 + 8);
    v28 = v23 - 54 - a4;
    v29 = (unsigned __int8)(7 - v26);
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
