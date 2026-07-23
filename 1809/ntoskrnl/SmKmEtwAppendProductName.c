/*
 * XREFs of SmKmEtwAppendProductName @ 0x140307528
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x140307940 (SmKmStoreTerminateWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     SmUniqueIdParseProductName @ 0x1403069F4 (SmUniqueIdParseProductName.c)
 *     SmKmStoreFileOpenVolume @ 0x1408AF540 (SmKmStoreFileOpenVolume.c)
 *     SmKmVolumeQueryUniqueId @ 0x1408AF8C4 (SmKmVolumeQueryUniqueId.c)
 */

LONG_PTR __fastcall SmKmEtwAppendProductName(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  void *v4; // rbp
  __int64 v5; // rdx
  wchar_t *v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  int UniqueId; // eax
  __int64 v11; // rsi
  __int64 v12; // rcx
  wchar_t *v13; // r15
  __int64 v14; // r8
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  _QWORD *v17; // r10
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // r12d
  unsigned int v21; // r13d
  void *v22; // rdi
  _QWORD *v23; // rax
  LONG_PTR result; // rax
  void *v25; // [rsp+60h] [rbp+8h] BYREF
  __int64 v26; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 24);
  v25 = 0LL;
  v4 = 0LL;
  v26 = v3;
  if ( !v3 )
  {
    SmKmStoreFileOpenVolume(*(_QWORD *)(a2 + 8), &v25, &v26);
    v3 = v26;
    v4 = v25;
  }
  v5 = *(_QWORD *)(a1 + 8) + *(unsigned int *)(a1 + 24);
  v6 = (wchar_t *)((v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
  v7 = v5 + *(_DWORD *)(a1 + 28) - *(_DWORD *)(a1 + 24) - (_DWORD)v6;
  if ( v3 )
  {
    v8 = 256LL;
    v9 = (v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v7 < 0x100 )
      v8 = v7;
    UniqueId = SmKmVolumeQueryUniqueId(v3, v9, v8);
  }
  else
  {
    UniqueId = -1073741275;
  }
  if ( UniqueId < 0 )
    *v6 = 0;
  v11 = -1LL;
  v12 = -1LL;
  do
    ++v12;
  while ( v6[v12] );
  v13 = &v6[(unsigned int)v12 + 1];
  if ( (int)SmUniqueIdParseProductName(v6, v13, v7 - 2 * (_DWORD)v12 - 2) < 0 )
  {
    LODWORD(v11) = 0;
  }
  else
  {
    do
      ++v11;
    while ( v13[v11] );
  }
  v14 = *(unsigned int *)(a1 + 24);
  v15 = 2 * v11;
  v16 = *(_DWORD *)(a1 + 16);
  v18 = *(_QWORD *)(a1 + 8);
  v19 = 2LL * v16;
  v20 = v14 + 2;
  v25 = *(void **)a1;
  v17 = v25;
  v21 = v16 + 1;
  v22 = (void *)(v18 + (unsigned int)(v14 + 2));
  *(_DWORD *)(a1 + 16) = v16 + 1;
  *(_DWORD *)(a1 + 24) = v14 + 2;
  *(_WORD *)(v18 + v14) = v11;
  v17[v19] = v18 + v14;
  v17[v19 + 1] = 2LL;
  if ( v13 )
  {
    memmove(v22, v13, v15);
    v17 = v25;
  }
  v23 = &v17[2 * v21];
  *((_DWORD *)v23 + 3) = 0;
  *v23 = v22;
  *((_DWORD *)v23 + 2) = v15;
  *(_DWORD *)(a1 + 16) = v21 + 1;
  result = v20 + v15;
  *(_DWORD *)(a1 + 24) = result;
  if ( v4 )
    return ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  return result;
}
