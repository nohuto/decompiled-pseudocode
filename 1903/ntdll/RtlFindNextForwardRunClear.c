/*
 * XREFs of RtlFindNextForwardRunClear @ 0x1800E9980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindNextForwardRunClear(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r10d
  unsigned __int64 v5; // r9
  const signed __int32 *v7; // rdx
  const signed __int32 *v8; // rbx
  const signed __int32 *v9; // r8
  unsigned int v10; // edx
  int v11; // edi
  const signed __int32 *v12; // r8
  unsigned int i; // eax

  v3 = *(_DWORD *)a1;
  v5 = a2;
  if ( *(_DWORD *)a1 > a2 )
  {
    v7 = *(const signed __int32 **)(a1 + 8);
    v8 = &v7[(unsigned __int64)(v3 - 1) >> 5];
    v9 = &v7[v5 >> 5];
    if ( v9 != v8 && (*v9 | dword_1801221C0[v5 & 0x1F]) == -1 )
    {
      LODWORD(v5) = v5 - (v5 & 0x1F) + 32;
      for ( ++v9; v9 < v8 && *v9 == -1; ++v9 )
        LODWORD(v5) = v5 + 32;
    }
    while ( (unsigned int)v5 < v3 && _bittest(v7, v5) )
      LODWORD(v5) = v5 + 1;
    v10 = 0;
    if ( v9 != v8 )
    {
      v11 = v5 & 0x1F;
      if ( (*v9 & ~dword_1801221C0[v5 & 0x1F]) == 0 )
      {
        v10 = 32 - v11;
        if ( v11 == 33 )
        {
LABEL_24:
          *a3 = v5;
          return v10;
        }
        v12 = v9 + 1;
        while ( v12 < v8 && !*v12 )
        {
          ++v12;
          v10 += 32;
          if ( v10 == -1 )
            goto LABEL_24;
        }
      }
    }
    for ( i = v10 + v5; i < *(_DWORD *)a1; ++v10 )
    {
      if ( _bittest(*(const signed __int32 **)(a1 + 8), i) )
        break;
      if ( v10 == -1 )
        break;
      ++i;
    }
    goto LABEL_24;
  }
  *a3 = a2;
  return 0;
}
