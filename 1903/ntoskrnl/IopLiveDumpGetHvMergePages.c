/*
 * XREFs of IopLiveDumpGetHvMergePages @ 0x14085A1D4
 * Callers:
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x14085A994 (IopLiveDumpWriteDumpFileWithHvPages.c)
 * Callees:
 *     <none>
 */

char __fastcall IopLiveDumpGetHvMergePages(__int64 a1, unsigned __int64 *a2, _QWORD *a3, unsigned int *a4, _QWORD *a5)
{
  __int64 v5; // rdi
  __int64 v10; // rcx
  unsigned int v11; // r9d
  char v12; // bp
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // r8

  v5 = *(_QWORD *)(a1 + 232);
  if ( v5 == *(_QWORD *)(a1 + 176) )
  {
    *a4 = 0;
    return 0;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 192);
    v11 = 64;
    v12 = 1;
    *a4 = 64;
    v13 = 64;
    *a5 = v10;
    *(_QWORD *)(a1 + 192) = v10 + 1;
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * v10);
    v15 = *(_QWORD *)(a1 + 200);
    *a3 = v14;
    if ( v15 )
    {
      v11 = 64 - v15;
      v12 = 0;
      v13 = 64 - v15;
      *a4 = 64 - v15;
      *(_QWORD *)(a1 + 200) = 0LL;
      *a3 = v14 + (v15 << 12);
    }
    v16 = *(_DWORD *)(a1 + 176) - v5;
    if ( v11 > v16 )
    {
      *a4 = v16;
      v11 = v16;
      v13 = v16;
    }
    v17 = *(_QWORD *)(a1 + 208);
    v18 = *(_QWORD *)(a1 + 216) << 12;
    *(_QWORD *)(a1 + 232) = v5 + v11;
    v19 = (_QWORD *)(v18 + *(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * v17) + 8LL * *(unsigned int *)(a1 + 224));
    if ( v11 )
    {
      v20 = v13;
      do
      {
        v21 = *v19 >> 12;
        *a2 = v21;
        _bittestandset64(*(signed __int64 **)(a1 + 448), v21);
        if ( (++*(_DWORD *)(a1 + 224) & 0x1FF) != 0 )
        {
          ++v19;
        }
        else
        {
          v22 = *(_QWORD *)(a1 + 216) + 1LL;
          *(_QWORD *)(a1 + 216) = v22;
          if ( (v22 & 0x3F) == 0 )
          {
            *(_QWORD *)(a1 + 216) = 0LL;
            ++*(_QWORD *)(a1 + 208);
            v22 = 0LL;
          }
          *(_DWORD *)(a1 + 224) = 0;
          v19 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 8LL * *(_QWORD *)(a1 + 208)) + (v22 << 12));
        }
        ++a2;
        --v20;
      }
      while ( v20 );
    }
    return v12;
  }
}
