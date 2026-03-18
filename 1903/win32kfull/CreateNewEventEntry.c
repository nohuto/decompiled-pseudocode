/*
 * XREFs of CreateNewEventEntry @ 0x1C0127B04
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1C00B7ED4 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     CBufferGetNextOffset @ 0x1C0127D4C (CBufferGetNextOffset.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  __int64 v11; // r8
  __int64 v12; // r10
  unsigned __int8 v13; // r9
  unsigned int *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rsi
  size_t v18; // r14
  PVOID PoolWithTag; // rax
  PVOID v20; // rbx
  __int64 NextOffset; // r12
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int128 v24; // xmm0
  unsigned __int8 v25; // r14
  const void **v26; // rsi
  __int64 v27; // r12
  __int64 v28; // rbp
  unsigned int v29; // edx
  void *v30; // rbx
  char *v31; // rdx
  int v32; // eax
  unsigned int v34; // edx
  void *v35; // rbx
  PVOID v36; // [rsp+20h] [rbp-38h] BYREF
  size_t v37; // [rsp+28h] [rbp-30h]

  v7 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  *a7 = 0LL;
  if ( a3 )
  {
    v14 = (unsigned int *)(a4 + 8);
    do
    {
      v15 = *v14;
      v14 += 4;
      if ( v13 >= 2u )
        v12 += v15;
      v16 = v15 + v11;
      if ( v13 >= 2u )
        v16 = v11;
      ++v13;
      v11 = v16;
    }
    while ( v13 < a3 );
  }
  if ( (unsigned __int64)(v12 + v11) > 0xFFFF )
    return 3221225621LL;
  v17 = 16LL * a3;
  v18 = v12 + v17 + 46;
  if ( !v18 )
    return 3221225495LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a1 != 0 ? PagedPool : 512), v12 + v17 + 46, 0x47417254u);
  v20 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, v18);
  v36 = v20;
  if ( !v20 )
    return 3221225495LL;
  v37 = v18;
  NextOffset = CBufferGetNextOffset(&v36, 16LL * a3);
  if ( a5 != -2 )
  {
    do
    {
      if ( v7 >= 2u )
      {
        v35 = (void *)CBufferGetNextOffset(&v36, *(unsigned int *)(a4 + 16LL * v7 + 8));
        memmove(v35, *(const void **)(a4 + 16LL * v7), v34);
        *(_QWORD *)(NextOffset + 16LL * v7) = v35;
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
  v23 = CBufferGetNextOffset(&v36, 46LL);
  *(_QWORD *)(v23 + 16) = NextOffset;
  v24 = *a2;
  *(_BYTE *)(v23 + 45) = a5;
  v25 = a5 + 2;
  *(_BYTE *)(v23 + 44) = a3;
  *(_DWORD *)(v23 + 40) = a6;
  *(_OWORD *)v23 = v24;
  if ( (unsigned __int8)(a5 + 2) < a3 )
  {
    v26 = (const void **)(16LL * v25 + a4 + 8);
    v27 = v22 - 54 - a4;
    v28 = (unsigned __int8)(a3 - v25);
    do
    {
      v30 = (void *)CBufferGetNextOffset(&v36, *(unsigned int *)v26);
      memmove(v30, *(v26 - 1), v29);
      v31 = (char *)v26 + v27;
      *(_QWORD *)&v31[*(_QWORD *)(v23 + 16)] = v30;
      *(_DWORD *)&v31[*(_QWORD *)(v23 + 16) + 12] = *((_DWORD *)v26 + 1);
      v32 = *(_DWORD *)v26;
      v26 += 2;
      *(_DWORD *)&v31[*(_QWORD *)(v23 + 16) + 8] = v32;
      --v28;
    }
    while ( v28 );
  }
  *a7 = v23;
  return 0LL;
}
