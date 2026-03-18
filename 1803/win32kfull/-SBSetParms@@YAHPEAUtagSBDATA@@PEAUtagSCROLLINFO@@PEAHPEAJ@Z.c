/*
 * XREFs of ?SBSetParms@@YAHPEAUtagSBDATA@@PEAUtagSCROLLINFO@@PEAHPEAJ@Z @ 0x1C00D96B4
 * Callers:
 *     xxxSetScrollBar @ 0x1C00D9304 (xxxSetScrollBar.c)
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SBSetParms(struct tagSBDATA *a1, struct tagSCROLLINFO *a2, int *a3, int *a4)
{
  int v4; // r10d
  int v5; // esi
  unsigned int v8; // edi
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  bool v16; // zf

  v4 = *((_DWORD *)a2 + 1);
  v5 = 0;
  v8 = 0;
  if ( (v4 & 0x1000) != 0 )
    *a4 = *((_DWORD *)a1 + 3);
  if ( (v4 & 1) != 0 )
  {
    v9 = *((_DWORD *)a2 + 2);
    v10 = *((_DWORD *)a2 + 3);
    LOBYTE(v8) = v9 == v10;
    if ( v10 < v9 )
    {
      *((_DWORD *)a2 + 3) = v9;
      v10 = v9;
    }
    if ( *(_DWORD *)a1 != v9 || *((_DWORD *)a1 + 1) != v10 )
    {
      *(_DWORD *)a1 = v9;
      *((_DWORD *)a1 + 1) = *((_DWORD *)a2 + 3);
      v4 = *((_DWORD *)a2 + 1);
      if ( (v4 & 2) == 0 )
      {
        v4 |= 2u;
        *((_DWORD *)a2 + 1) = v4;
        *((_DWORD *)a2 + 4) = *((_DWORD *)a1 + 2);
      }
      if ( (v4 & 4) == 0 )
      {
        v4 |= 4u;
        *((_DWORD *)a2 + 1) = v4;
        *((_DWORD *)a2 + 5) = *((_DWORD *)a1 + 3);
      }
      v8 = 1;
    }
  }
  if ( (v4 & 2) != 0 )
  {
    v11 = *((_DWORD *)a2 + 4);
    v12 = abs32(*((_DWORD *)a1 + 1) - *(_DWORD *)a1) + 1;
    if ( v11 > v12 )
    {
      *((_DWORD *)a2 + 4) = v12;
      v11 = v12;
    }
    if ( *((_DWORD *)a1 + 2) != v11 )
    {
      *((_DWORD *)a1 + 2) = v11;
      v4 = *((_DWORD *)a2 + 1);
      if ( (v4 & 4) == 0 )
      {
        v4 |= 4u;
        *((_DWORD *)a2 + 1) = v4;
        *((_DWORD *)a2 + 5) = *((_DWORD *)a1 + 3);
      }
      v8 = 1;
    }
  }
  if ( (v4 & 4) != 0 )
  {
    v13 = *(_DWORD *)a1;
    v14 = *((_DWORD *)a1 + 1) - (*((_DWORD *)a1 + 2) != 0 ? *((_DWORD *)a1 + 2) - 1 : 0);
    v15 = *((_DWORD *)a2 + 5);
    if ( v15 < *(_DWORD *)a1 )
    {
      *((_DWORD *)a2 + 5) = v13;
    }
    else
    {
      v13 = *((_DWORD *)a2 + 5);
      if ( v15 > v14 )
      {
        *((_DWORD *)a2 + 5) = v14;
        v13 = v14;
      }
    }
    if ( *((_DWORD *)a1 + 3) != v13 )
    {
      *((_DWORD *)a1 + 3) = v13;
      v8 = 1;
      v4 = *((_DWORD *)a2 + 1);
    }
  }
  if ( (v4 & 0x1000) == 0 )
    *a4 = *((_DWORD *)a1 + 3);
  if ( (v4 & 1) == 0 )
  {
    if ( (v4 & 2) == 0 )
      return v8;
    goto LABEL_22;
  }
  v16 = *(_DWORD *)a1 == *((_DWORD *)a1 + 1);
  *a3 = *(_DWORD *)a1 != *((_DWORD *)a1 + 1);
  if ( !v16 )
  {
LABEL_22:
    LOBYTE(v5) = *((_DWORD *)a1 + 2) <= *((_DWORD *)a1 + 1) - *(_DWORD *)a1;
    *a3 = v5;
  }
  return v8;
}
