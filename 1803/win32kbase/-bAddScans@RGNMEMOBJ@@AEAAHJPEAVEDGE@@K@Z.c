/*
 * XREFs of ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C0071AB4
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0020210 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C0021AF0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     memcmp @ 0x1C0078C50 (memcmp.c)
 */

__int64 __fastcall RGNMEMOBJ::bAddScans(RGNMEMOBJ *this, int a2, struct EDGE *a3, char a4)
{
  unsigned int v8; // r8d
  _DWORD *v9; // rsi
  struct EDGE *v10; // rax
  char *v11; // r15
  _DWORD *v12; // rbx
  int v13; // ecx
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  char *v16; // rdi
  __int64 result; // rax
  int v18; // ecx
  _DWORD *v19; // rbx
  int v20; // ecx
  int v21; // ecx

  v8 = 4 * *((_DWORD *)a3 + 4) + 16;
  if ( v8 <= *(_DWORD *)(*(_QWORD *)this + 24LL) - *(_DWORD *)(*(_QWORD *)this + 80LL)
    || (result = RGNOBJ::bExpand(this, *(_DWORD *)(*(_QWORD *)this + 24LL) + v8 + 2160), (_DWORD)result) )
  {
    v9 = *(_DWORD **)(*(_QWORD *)this + 40LL);
    v10 = *(struct EDGE **)a3;
    v11 = (char *)(v9 + 2);
    v9[2] = 0x80000000;
    v12 = v9 + 2;
    if ( (a4 & 2) != 0 )
    {
      while ( v10 != a3 )
      {
        v18 = *((_DWORD *)v10 + 3);
        if ( *v12 >= v18 )
        {
          v19 = v12 - 1;
        }
        else
        {
          v19 = v12 + 1;
          *v19 = v18;
        }
        v20 = *((_DWORD *)v10 + 10);
        do
        {
          v10 = *(struct EDGE **)v10;
          v20 += *((_DWORD *)v10 + 10);
        }
        while ( v20 );
        v21 = *((_DWORD *)v10 + 3);
        if ( *v19 >= v21 )
        {
          v12 = v19 - 1;
        }
        else
        {
          v12 = v19 + 1;
          *v12 = v21;
        }
        v10 = *(struct EDGE **)v10;
      }
    }
    else
    {
      while ( v10 != a3 )
      {
        v13 = *((_DWORD *)v10 + 3);
        if ( *v12 >= v13 )
          --v12;
        else
          *++v12 = v13;
        v10 = *(struct EDGE **)v10;
      }
    }
    v14 = (unsigned __int64)((char *)v12 - v11) >> 2;
    v15 = (unsigned int)(4 * *(v9 - 1) + 16);
    v16 = (char *)v9 - v15 - 4;
    if ( *(_DWORD *)((char *)v9 - v15) == (_DWORD)v14 && !memcmp(v16 + 16, v9 + 3, 4LL * (unsigned int)v14) )
    {
      *((_DWORD *)v16 + 3) = a2 + 1;
    }
    else
    {
      ++*(_DWORD *)(*(_QWORD *)this + 84LL);
      *(_DWORD *)(*(_QWORD *)this + 80LL) += 4 * v14 + 16;
      *(_DWORD *)v11 = a2 + 1;
      *v9 = v14;
      v9[1] = a2;
      v9[(unsigned int)v14 + 3] = v14;
      *(_QWORD *)(*(_QWORD *)this + 40LL) = (char *)v9 + (unsigned int)(4 * *v9 + 16);
    }
    return 1LL;
  }
  return result;
}
