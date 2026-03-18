/*
 * XREFs of ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C00AFD8C
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0010850 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C0090790 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     memcmp @ 0x1C00C0490 (memcmp.c)
 */

__int64 __fastcall RGNMEMOBJ::bAddScans(RGNMEMOBJ *this, int a2, struct EDGE *a3, char a4)
{
  unsigned int v8; // r8d
  int v9; // edi
  _DWORD *v10; // r14
  struct EDGE *v11; // rax
  char *v12; // rbp
  _DWORD *v13; // rbx
  int v14; // ecx
  unsigned __int64 v15; // rbx
  __int64 v16; // rcx
  char *v17; // rdi
  __int64 result; // rax
  int v19; // ecx
  _DWORD *v20; // rbx
  int v21; // ecx
  int v22; // ecx

  v8 = 4 * *((_DWORD *)a3 + 4) + 16;
  if ( v8 <= *(_DWORD *)(*(_QWORD *)this + 24LL) - *(_DWORD *)(*(_QWORD *)this + 80LL)
    || (result = RGNOBJ::bExpand(this, *(_DWORD *)(*(_QWORD *)this + 24LL) + v8 + 2160), (_DWORD)result) )
  {
    v9 = a4 & 2;
    v10 = *(_DWORD **)(*(_QWORD *)this + 40LL);
    v11 = *(struct EDGE **)a3;
    v12 = (char *)(v10 + 2);
    v10[2] = 0x80000000;
    v13 = v10 + 2;
    if ( v11 != a3 )
    {
      if ( v9 )
      {
        do
        {
          v19 = *((_DWORD *)v11 + 3);
          if ( *v13 >= v19 )
          {
            v20 = v13 - 1;
          }
          else
          {
            v20 = v13 + 1;
            *v20 = v19;
          }
          v21 = *((_DWORD *)v11 + 10);
          do
          {
            v11 = *(struct EDGE **)v11;
            v21 += *((_DWORD *)v11 + 10);
          }
          while ( v21 );
          v22 = *((_DWORD *)v11 + 3);
          if ( *v20 >= v22 )
          {
            v13 = v20 - 1;
          }
          else
          {
            v13 = v20 + 1;
            *v13 = v22;
          }
          v11 = *(struct EDGE **)v11;
        }
        while ( v11 != a3 );
      }
      else
      {
        do
        {
          v14 = *((_DWORD *)v11 + 3);
          if ( *v13 >= v14 )
            --v13;
          else
            *++v13 = v14;
          v11 = *(struct EDGE **)v11;
        }
        while ( v11 != a3 );
      }
    }
    v15 = (unsigned __int64)((char *)v13 - v12) >> 2;
    v16 = (unsigned int)(4 * *(v10 - 1) + 16);
    v17 = (char *)v10 - v16 - 4;
    if ( *(_DWORD *)((char *)v10 - v16) == (_DWORD)v15 && !memcmp(v17 + 16, v10 + 3, 4LL * (unsigned int)v15) )
    {
      *((_DWORD *)v17 + 3) = a2 + 1;
    }
    else
    {
      ++*(_DWORD *)(*(_QWORD *)this + 84LL);
      *(_DWORD *)(*(_QWORD *)this + 80LL) += 4 * v15 + 16;
      *(_DWORD *)v12 = a2 + 1;
      *v10 = v15;
      v10[1] = a2;
      v10[(unsigned int)v15 + 3] = v15;
      *(_QWORD *)(*(_QWORD *)this + 40LL) = (char *)v10 + (unsigned int)(4 * *v10 + 16);
    }
    return 1LL;
  }
  return result;
}
