/*
 * XREFs of IopLiveDumpGetHvMergePages @ 0x140821364
 * Callers:
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x140821AF8 (IopLiveDumpWriteDumpFileWithHvPages.c)
 * Callees:
 *     <none>
 */

char __fastcall IopLiveDumpGetHvMergePages(__int64 a1, unsigned __int64 *a2, _QWORD *a3, unsigned int *a4, _QWORD *a5)
{
  __int64 v5; // rdi
  __int64 v7; // r11
  __int64 v11; // rcx
  unsigned int v12; // r9d
  char v13; // bp
  unsigned int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // r11d
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // r8
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // r8

  v5 = *(_QWORD *)(a1 + 232);
  v7 = *(_QWORD *)(a1 + 176);
  if ( v5 == v7 )
  {
    *a4 = 0;
    return 0;
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 192);
    v12 = 64;
    v13 = 1;
    *a4 = 64;
    v14 = 64;
    *a5 = v11;
    *(_QWORD *)(a1 + 192) = v11 + 1;
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * v11);
    v16 = *(_QWORD *)(a1 + 200);
    *a3 = v15;
    if ( v16 )
    {
      v12 = 64 - v16;
      v13 = 0;
      v14 = 64 - v16;
      *a4 = 64 - v16;
      *(_QWORD *)(a1 + 200) = 0LL;
      *a3 = v15 + (v16 << 12);
    }
    v17 = v7 - v5;
    if ( v12 > v17 )
    {
      *a4 = v17;
      v12 = v17;
      v14 = v17;
    }
    v18 = *(_QWORD *)(a1 + 208);
    v19 = *(_QWORD *)(a1 + 216) << 12;
    *(_QWORD *)(a1 + 232) = v5 + v12;
    v20 = (_QWORD *)(v19 + *(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * v18) + 8LL * *(unsigned int *)(a1 + 224));
    if ( v12 )
    {
      v21 = v14;
      do
      {
        v22 = *v20 >> 12;
        *a2 = v22;
        _bittestandset64(*(signed __int64 **)(a1 + 448), v22);
        if ( (++*(_DWORD *)(a1 + 224) & 0x1FF) != 0 )
        {
          ++v20;
        }
        else
        {
          v23 = *(_QWORD *)(a1 + 216) + 1LL;
          *(_QWORD *)(a1 + 216) = v23;
          if ( (v23 & 0x3F) == 0 )
          {
            *(_QWORD *)(a1 + 216) = 0LL;
            ++*(_QWORD *)(a1 + 208);
            v23 = 0LL;
          }
          *(_DWORD *)(a1 + 224) = 0;
          v20 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 8LL * *(_QWORD *)(a1 + 208)) + (v23 << 12));
        }
        ++a2;
        --v21;
      }
      while ( v21 );
    }
    return v13;
  }
}
