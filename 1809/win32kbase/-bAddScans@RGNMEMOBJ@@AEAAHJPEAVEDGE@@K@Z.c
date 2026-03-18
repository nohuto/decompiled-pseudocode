/*
 * XREFs of ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C0017B64
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0017730 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C001E5B0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     memcmp @ 0x1C00AE820 (memcmp.c)
 */

__int64 __fastcall RGNMEMOBJ::bAddScans(RGNMEMOBJ *this, int a2, struct EDGE *a3, char a4)
{
  unsigned int v8; // r11d
  unsigned int v9; // r8d
  _DWORD *v11; // rsi
  struct EDGE *v12; // rax
  char *v13; // r15
  _DWORD *v14; // rbx
  int v15; // ecx
  _DWORD *v16; // rbx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  unsigned __int64 v20; // rbx
  __int64 v21; // rcx
  char *v22; // rdi

  v8 = 4 * *((_DWORD *)a3 + 4) + 16;
  v9 = *(_DWORD *)(*(_QWORD *)this + 24LL);
  if ( v8 > v9 - *(_DWORD *)(*(_QWORD *)this + 80LL)
    && (v9 + v8 < v9 || v9 + v8 + 2160 < v9 + v8 || !(unsigned int)RGNOBJ::bExpand(this, v9 + v8 + 2160)) )
  {
    return 0LL;
  }
  v11 = *(_DWORD **)(*(_QWORD *)this + 40LL);
  v12 = *(struct EDGE **)a3;
  v13 = (char *)(v11 + 2);
  v11[2] = 0x80000000;
  v14 = v11 + 2;
  if ( (a4 & 2) != 0 )
  {
    while ( v12 != a3 )
    {
      v15 = *((_DWORD *)v12 + 3);
      if ( *v14 >= v15 )
      {
        v16 = v14 - 1;
      }
      else
      {
        v16 = v14 + 1;
        *v16 = v15;
      }
      v17 = *((_DWORD *)v12 + 10);
      do
      {
        v12 = *(struct EDGE **)v12;
        v17 += *((_DWORD *)v12 + 10);
      }
      while ( v17 );
      v18 = *((_DWORD *)v12 + 3);
      if ( *v16 >= v18 )
      {
        v14 = v16 - 1;
      }
      else
      {
        v14 = v16 + 1;
        *v14 = v18;
      }
      v12 = *(struct EDGE **)v12;
    }
  }
  else
  {
    while ( v12 != a3 )
    {
      v19 = *((_DWORD *)v12 + 3);
      if ( *v14 >= v19 )
        --v14;
      else
        *++v14 = v19;
      v12 = *(struct EDGE **)v12;
    }
  }
  v20 = (unsigned __int64)((char *)v14 - v13) >> 2;
  v21 = (unsigned int)(4 * *(v11 - 1) + 16);
  v22 = (char *)v11 - v21 - 4;
  if ( *(_DWORD *)((char *)v11 - v21) == (_DWORD)v20 && !memcmp(v22 + 16, v11 + 3, 4LL * (unsigned int)v20) )
  {
    *((_DWORD *)v22 + 3) = a2 + 1;
  }
  else
  {
    ++*(_DWORD *)(*(_QWORD *)this + 84LL);
    *(_DWORD *)(*(_QWORD *)this + 80LL) += 4 * v20 + 16;
    *(_DWORD *)v13 = a2 + 1;
    *v11 = v20;
    v11[1] = a2;
    v11[(unsigned int)v20 + 3] = v20;
    *(_QWORD *)(*(_QWORD *)this + 40LL) = (char *)v11 + (unsigned int)(4 * *v11 + 16);
  }
  return 1LL;
}
