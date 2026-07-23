/*
 * XREFs of EtwpCovSampContextRemoveAndFreeModule @ 0x1408C74E0
 * Callers:
 *     EtwpCovSampContextCleanup @ 0x1408C5D5C (EtwpCovSampContextCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpCovSampModuleCleanup @ 0x1408C7F84 (EtwpCovSampModuleCleanup.c)
 */

void __fastcall EtwpCovSampContextRemoveAndFreeModule(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  unsigned __int64 v5; // r9
  __int64 *i; // rdx
  _QWORD *v7; // r10
  unsigned __int64 v8; // rsi
  _QWORD *j; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx

  v2 = *a2;
  a2[8] = 0LL;
  if ( v2 )
  {
    v5 = a2[1] & (-1LL << (*(_DWORD *)(a1 + 684) & 0x1F));
    for ( i = (__int64 *)(*(_QWORD *)(a1 + 688)
                        + 8
                        * ((HIBYTE(v5)
                          + 37
                          * (BYTE6(v5)
                           + 37
                           * (BYTE5(v5)
                            + 37
                            * (BYTE4(v5)
                             + 37
                             * (BYTE3(v5)
                              + 37
                              * (BYTE2(v5)
                               + 37
                               * (37 * ((unsigned __int8)v5 + 11623883)
                                + (unsigned __int8)((unsigned __int16)(a2[1] & (-1 << (*(_DWORD *)(a1 + 684) & 0x1F))) >> 8)))))))) & (unsigned int)((*(_DWORD *)(a1 + 684) >> 5) - 1)));
          (*i & 1) == 0;
          i = (__int64 *)*i )
    {
      if ( (__int64 *)*i == a2 )
      {
        *i = *a2;
        --*(_DWORD *)(a1 + 680);
        *a2 |= 0x8000000000000002uLL;
        break;
      }
    }
    *a2 = 0LL;
  }
  v7 = a2 + 2;
  if ( a2[2] )
  {
    v8 = a2[3] & (-1LL << (*(_DWORD *)(a1 + 700) & 0x1F));
    for ( j = (_QWORD *)(*(_QWORD *)(a1 + 704)
                       + 8
                       * ((HIBYTE(v8)
                         + 37
                         * (BYTE6(v8)
                          + 37
                          * (BYTE5(v8)
                           + 37
                           * (BYTE4(v8)
                            + 37
                            * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (37 * ((unsigned __int8)v8 + 11623883) + BYTE1(v8)))))))) & (unsigned int)((*(_DWORD *)(a1 + 700) >> 5) - 1)));
          (*j & 1) == 0;
          j = (_QWORD *)*j )
    {
      if ( (_QWORD *)*j == v7 )
      {
        *j = *v7;
        --*(_DWORD *)(a1 + 696);
        *v7 |= 0x8000000000000002uLL;
        break;
      }
    }
    *v7 = 0LL;
  }
  v10 = a2 + 9;
  v11 = a2[9];
  if ( *(__int64 **)(v11 + 8) != a2 + 9 || (v12 = (_QWORD *)a2[10], (_QWORD *)*v12 != v10) )
    __fastfail(3u);
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  a2[10] = (__int64)(a2 + 9);
  *v10 = v10;
  --*(_DWORD *)(a1 + 728);
  EtwpCovSampModuleCleanup(a2);
  ExFreePoolWithTag(a2, 0x56777445u);
}
