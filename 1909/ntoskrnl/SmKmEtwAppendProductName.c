/*
 * XREFs of SmKmEtwAppendProductName @ 0x14032480C
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x140324C10 (SmKmStoreTerminateWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     SmUniqueIdParseProductName @ 0x140323C48 (SmUniqueIdParseProductName.c)
 *     SmKmStoreFileOpenVolume @ 0x1408EABA8 (SmKmStoreFileOpenVolume.c)
 *     SmKmVolumeQueryUniqueId @ 0x1408EAF6C (SmKmVolumeQueryUniqueId.c)
 */

LONG_PTR __fastcall SmKmEtwAppendProductName(__int64 *a1, __int64 a2)
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
  unsigned int v14; // ebx
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // r12
  unsigned int v19; // r13d
  __int64 v20; // rdi
  __int64 v21; // rax
  LONG_PTR result; // rax
  void *v23; // [rsp+60h] [rbp+8h] BYREF
  __int64 v24; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 24);
  v23 = 0LL;
  v4 = 0LL;
  v24 = v3;
  if ( !v3 )
  {
    SmKmStoreFileOpenVolume(*(_QWORD *)(a2 + 8), &v23, &v24);
    v3 = v24;
    v4 = v23;
  }
  v5 = a1[1] + *((unsigned int *)a1 + 6);
  v6 = (wchar_t *)((v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
  v7 = v5 + *((_DWORD *)a1 + 7) - *((_DWORD *)a1 + 6) - (_DWORD)v6;
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
  v14 = 2 * v11;
  v15 = *((unsigned int *)a1 + 6);
  v16 = a1[1];
  v17 = 2LL * *((unsigned int *)a1 + 4);
  v18 = *a1;
  v19 = *((_DWORD *)a1 + 4) + 1;
  *(_WORD *)(v16 + v15) = v11;
  *(_QWORD *)(v18 + 8 * v17) = v16 + v15;
  *(_QWORD *)(v18 + 8 * v17 + 8) = 2LL;
  v20 = v16 + (unsigned int)(v15 + 2);
  LODWORD(v23) = v15 + 2;
  if ( v13 )
    memmove((void *)(v16 + (unsigned int)(v15 + 2)), v13, v14);
  v21 = v18 + 16LL * v19;
  *(_DWORD *)(v21 + 12) = 0;
  *(_QWORD *)v21 = v20;
  *(_DWORD *)(v21 + 8) = v14;
  *((_DWORD *)a1 + 4) = v19 + 1;
  result = v14 + (unsigned int)v23;
  *((_DWORD *)a1 + 6) = result;
  if ( v4 )
    return ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  return result;
}
