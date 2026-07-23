/*
 * XREFs of CreateNewEventEntry @ 0x140129AC8
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x140012AF4 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     CBufferGetNextOffset @ 0x140129D04 (CBufferGetNextOffset.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
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
  unsigned int v20; // edx
  void *v21; // rbx
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
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a1 != 0 ? PagedPool : NonPagedPoolNx), v16, 0x47417254u);
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
      if ( v7 < 2u )
      {
        *(_OWORD *)(NextOffset + 16LL * v7) = *(_OWORD *)(a4 + 16LL * v7);
      }
      else
      {
        v21 = (void *)CBufferGetNextOffset(&v34, *(unsigned int *)(a4 + 16LL * v7 + 8));
        memmove(v21, *(const void **)(a4 + 16LL * v7), v20);
        *(_QWORD *)(NextOffset + 16LL * v7) = v21;
        *(_DWORD *)(NextOffset + 16LL * v7 + 12) = *(_DWORD *)(a4 + 16LL * v7 + 12);
        *(_DWORD *)(NextOffset + 16LL * v7 + 8) = *(_DWORD *)(a4 + 16LL * v7 + 8);
      }
      ++v7;
    }
    while ( v7 < (unsigned int)a5 + 2 );
  }
  v23 = CBufferGetNextOffset(&v34, 46LL);
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
      v30 = (void *)CBufferGetNextOffset(&v34, *(unsigned int *)v26);
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
