/*
 * XREFs of MiExtendPagingFiles @ 0x14088C7A4
 * Callers:
 *     MiProcessDereferenceList @ 0x140164A94 (MiProcessDereferenceList.c)
 * Callees:
 *     MiIncreaseCommitLimits @ 0x140193294 (MiIncreaseCommitLimits.c)
 *     MiUpdatePagingFileMinimum @ 0x1402CF088 (MiUpdatePagingFileMinimum.c)
 *     MiAttemptPageFileExtension @ 0x14088C478 (MiAttemptPageFileExtension.c)
 */

unsigned __int64 __fastcall MiExtendPagingFiles(__int64 a1)
{
  __int64 v1; // r14
  unsigned __int64 v3; // rbx
  unsigned __int64 result; // rax
  unsigned int v5; // r15d
  __int64 v6; // r15
  unsigned __int64 v7; // rsi
  BOOL v8; // ebp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 **v12; // rdx
  __int64 v13; // r9
  unsigned __int64 *v14; // rcx
  unsigned int v15; // r13d
  __int64 *v16; // r12

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 32);
  result = *(unsigned __int8 *)(a1 + 76);
  v5 = *(_DWORD *)(v1 + 7896);
  if ( !v5 )
    return result;
  if ( (unsigned int)result < v5 )
  {
    _mm_lfence();
    v6 = *(_QWORD *)(v1 + 8 * result + 7904);
    if ( *(_QWORD *)(v6 + 8) - *(_QWORD *)v6 < v3 )
      return result;
    result = MiAttemptPageFileExtension(a1, *(_QWORD *)(v1 + 8 * result + 7904), v3);
    v7 = result;
    if ( result && (*(_BYTE *)(a1 + 79) & 2) != 0 )
      result = MiUpdatePagingFileMinimum(v6, result);
    v8 = (*(_BYTE *)(v6 + 204) & 0x50) == 0;
    goto LABEL_24;
  }
  v8 = 1;
  if ( (*(_BYTE *)(a1 + 79) & 1) == 0 )
  {
    v9 = *(_QWORD *)(v1 + 8424);
    v10 = *(_QWORD *)(v1 + 8552);
    result = v3 + v9 + *(_QWORD *)(v1 + 7216);
    if ( result < v9 )
      return result;
    if ( result <= v10 )
    {
      *(_QWORD *)(a1 + 40) = 1LL;
      return result;
    }
    v3 = result - v10;
  }
  v11 = 0LL;
  v12 = (unsigned __int64 **)(v1 + 7904);
  v13 = *(unsigned int *)(v1 + 7896);
  do
  {
    v14 = *v12;
    if ( (*((_BYTE *)*v12 + 204) & 0x50) == 0 )
    {
      result = *v14;
      v11 += v14[1] - *v14;
    }
    ++v12;
    --v13;
  }
  while ( v13 );
  if ( v11 >= v3 )
  {
    v7 = 0LL;
    v15 = 0;
    v16 = (__int64 *)(v1 + 7904);
    do
    {
      if ( (*(_BYTE *)(*v16 + 204) & 0x50) == 0 )
      {
        result = MiAttemptPageFileExtension(a1, *v16, v3 - v7);
        v7 += result;
        if ( v7 >= v3 )
          break;
      }
      ++v15;
      ++v16;
    }
    while ( v15 < v5 );
LABEL_24:
    if ( v7 )
    {
      *(_QWORD *)(a1 + 40) = v7;
      if ( v8 )
        return MiIncreaseCommitLimits(v1, v7, 0LL, 0, 0LL);
    }
  }
  return result;
}
