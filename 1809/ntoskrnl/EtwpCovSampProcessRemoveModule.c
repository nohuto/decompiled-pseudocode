/*
 * XREFs of EtwpCovSampProcessRemoveModule @ 0x1408C872C
 * Callers:
 *     EtwpCovSampProcessAddModule @ 0x1408C817C (EtwpCovSampProcessAddModule.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x1408CA384 (EtwpCoverageSamplerUnloadImage.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     EtwpCovSampModuleDereference @ 0x1408C7FD4 (EtwpCovSampModuleDereference.c)
 *     EtwpCovSampProcessUpperBoundModule @ 0x1408C87D4 (EtwpCovSampProcessUpperBoundModule.c)
 */

__int64 __fastcall EtwpCovSampProcessRemoveModule(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  unsigned __int64 v7; // rbp
  _QWORD *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned int v11; // edx

  v6 = EtwpCovSampProcessUpperBoundModule(a1, a2);
  if ( v6 < *(_DWORD *)(a1 + 32) )
  {
    v7 = a2 + a3;
    do
    {
      v8 = (_QWORD *)(16LL * v6 + *(_QWORD *)(a1 + 24));
      v9 = v8[1];
      if ( *v8 - *(_QWORD *)(v9 + 40) >= v7 )
        break;
      EtwpCovSampModuleDereference(*(_QWORD *)a1, v9);
      v11 = *(_DWORD *)(a1 + 32);
      if ( v11 > v6 + 1 )
      {
        memmove((void *)v10, (const void *)(v10 + 16), 16LL * (v11 - v6 - 1));
        v11 = *(_DWORD *)(a1 + 32);
      }
      *(_DWORD *)(a1 + 32) = v11 - 1;
    }
    while ( v6 < v11 - 1 );
  }
  return v6;
}
