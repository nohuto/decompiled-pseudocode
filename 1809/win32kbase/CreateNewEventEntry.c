/*
 * XREFs of CreateNewEventEntry @ 0x1C0185790
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1C0185C00 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     memset @ 0x1C00AF780 (memset.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     CBufferGetNextOffset @ 0x1C018575C (CBufferGetNextOffset.c)
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
  __int64 v10; // r9
  __int64 v11; // rsi
  unsigned int *v12; // r8
  unsigned __int8 i; // al
  __int64 v14; // rcx
  SIZE_T v16; // rsi
  PVOID PoolWithTag; // rax
  __int64 v18; // rbx
  __int64 NextOffset; // r12
  unsigned int v20; // edx
  void *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int128 v24; // xmm0
  unsigned __int8 v25; // bp
  const void **v26; // rsi
  __int64 v27; // r12
  __int64 v28; // rbp
  unsigned int v29; // edx
  void *v30; // rbx
  char *v31; // rdx
  int v32; // eax
  __int64 v33; // [rsp+20h] [rbp-38h] BYREF
  SIZE_T v34; // [rsp+28h] [rbp-30h]

  v7 = 0;
  v33 = 0LL;
  v10 = 0LL;
  v34 = 0LL;
  v11 = 0LL;
  v12 = (unsigned int *)(a4 + 8);
  *a7 = 0LL;
  for ( i = 0; i < 7u; ++i )
  {
    v14 = *v12;
    if ( i >= 2u )
      v11 += v14;
    else
      v10 += v14;
    v12 += 4;
  }
  if ( (unsigned __int64)(v11 + v10) > 0xFFFF )
    return 3221225621LL;
  v16 = v11 + 158;
  if ( !v16 )
    return 3221225495LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a1 != 0 ? PagedPool : 512), v16, 0x47417254u);
  v18 = (__int64)PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, v16);
  v33 = v18;
  if ( !v18 )
    return 3221225495LL;
  v34 = v16;
  NextOffset = CBufferGetNextOffset(&v33, 0x70uLL);
  if ( a5 != -2 )
  {
    do
    {
      if ( v7 >= 2u )
      {
        v21 = (void *)CBufferGetNextOffset(&v33, *(unsigned int *)(a4 + 16LL * v7 + 8));
        memmove(v21, *(const void **)(a4 + 16LL * v7), v20);
        *(_QWORD *)(NextOffset + 16LL * v7) = v21;
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
  v23 = CBufferGetNextOffset(&v33, 0x2EuLL);
  *(_QWORD *)(v23 + 16) = NextOffset;
  v24 = *a2;
  *(_BYTE *)(v23 + 45) = a5;
  v25 = a5 + 2;
  *(_BYTE *)(v23 + 44) = 7;
  *(_DWORD *)(v23 + 40) = a6;
  *(_OWORD *)v23 = v24;
  if ( (unsigned __int8)(a5 + 2) < 7u )
  {
    v26 = (const void **)(16LL * v25 + a4 + 8);
    v27 = v22 - 54 - a4;
    v28 = (unsigned __int8)(7 - v25);
    do
    {
      v30 = (void *)CBufferGetNextOffset(&v33, *(unsigned int *)v26);
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
