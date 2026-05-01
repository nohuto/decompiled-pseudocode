/*
 * XREFs of CreateNewEventEntry @ 0x1800E37E8
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1800E3D40 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _o_malloc_0 @ 0x18008509C (_o_malloc_0.c)
 *     memcpy_0 @ 0x18009B2D7 (memcpy_0.c)
 *     CBufferGetNextOffset @ 0x1800E36AC (CBufferGetNextOffset.c)
 */

__int64 __fastcall CreateNewEventEntry(__int128 *a1, __int64 a2, __int64 a3, unsigned __int8 a4, int a5, __int64 *a6)
{
  unsigned __int8 v6; // di
  __int64 v9; // r8
  __int64 v10; // rsi
  unsigned int *v11; // rdx
  unsigned __int8 i; // al
  __int64 v13; // rcx
  size_t v15; // rsi
  void *v16; // rax
  __int64 v17; // rbx
  __int64 NextOffset; // r12
  unsigned int v19; // edx
  void *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int128 v23; // xmm0
  unsigned __int8 v24; // bp
  const void **v25; // rsi
  __int64 v26; // r12
  __int64 v27; // rbp
  unsigned int v28; // edx
  void *v29; // rbx
  char *v30; // rdx
  int v31; // eax
  __int64 v32; // [rsp+20h] [rbp-38h] BYREF
  size_t v33; // [rsp+28h] [rbp-30h]

  v6 = 0;
  v32 = 0LL;
  v9 = 0LL;
  v33 = 0LL;
  v10 = 0LL;
  v11 = (unsigned int *)(a3 + 8);
  *a6 = 0LL;
  for ( i = 0; i < 0xCu; ++i )
  {
    v13 = *v11;
    if ( i >= 2u )
      v10 += v13;
    else
      v9 += v13;
    v11 += 4;
  }
  if ( (unsigned __int64)(v10 + v9) > 0xFFFF )
    return 534LL;
  v15 = v10 + 238;
  if ( !v15 )
    return 8LL;
  v16 = o_malloc_0(v15);
  v17 = (__int64)v16;
  if ( v16 )
    memset_0(v16, 0, v15);
  v32 = v17;
  if ( !v17 )
    return 8LL;
  v33 = v15;
  NextOffset = CBufferGetNextOffset(&v32, 0xC0uLL);
  if ( a4 != -2 )
  {
    do
    {
      if ( v6 >= 2u )
      {
        v20 = (void *)CBufferGetNextOffset(&v32, *(unsigned int *)(a3 + 16LL * v6 + 8));
        memcpy_0(v20, *(const void **)(a3 + 16LL * v6), v19);
        *(_QWORD *)(NextOffset + 16LL * v6) = v20;
        *(_DWORD *)(NextOffset + 16LL * v6 + 12) = *(_DWORD *)(a3 + 16LL * v6 + 12);
        *(_DWORD *)(NextOffset + 16LL * v6 + 8) = *(_DWORD *)(a3 + 16LL * v6 + 8);
      }
      else
      {
        *(_OWORD *)(NextOffset + 16LL * v6) = *(_OWORD *)(a3 + 16LL * v6);
      }
      ++v6;
    }
    while ( v6 < (unsigned int)a4 + 2 );
  }
  v22 = CBufferGetNextOffset(&v32, 0x2EuLL);
  *(_QWORD *)(v22 + 16) = NextOffset;
  v23 = *a1;
  *(_BYTE *)(v22 + 45) = a4;
  v24 = a4 + 2;
  *(_BYTE *)(v22 + 44) = 12;
  *(_DWORD *)(v22 + 40) = a5;
  *(_OWORD *)v22 = v23;
  if ( v24 < 0xCu )
  {
    v25 = (const void **)(16LL * v24 + a3 + 8);
    v26 = v21 - 54 - a3;
    v27 = (unsigned __int8)(12 - v24);
    do
    {
      v29 = (void *)CBufferGetNextOffset(&v32, *(unsigned int *)v25);
      memcpy_0(v29, *(v25 - 1), v28);
      v30 = (char *)v25 + v26;
      *(_QWORD *)&v30[*(_QWORD *)(v22 + 16)] = v29;
      *(_DWORD *)&v30[*(_QWORD *)(v22 + 16) + 12] = *((_DWORD *)v25 + 1);
      v31 = *(_DWORD *)v25;
      v25 += 2;
      *(_DWORD *)&v30[*(_QWORD *)(v22 + 16) + 8] = v31;
      --v27;
    }
    while ( v27 );
  }
  *a6 = v22;
  return 0LL;
}
