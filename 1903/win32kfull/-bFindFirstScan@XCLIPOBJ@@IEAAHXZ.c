/*
 * XREFs of ?bFindFirstScan@XCLIPOBJ@@IEAAHXZ @ 0x1C014BB18
 * Callers:
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C014D120 (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XCLIPOBJ::bFindFirstScan(XCLIPOBJ *this)
{
  __int64 v1; // rdx
  unsigned int v2; // eax
  _DWORD *v3; // r10
  _DWORD *v4; // rdx
  unsigned int v5; // r9d
  bool v6; // zf
  _DWORD *v8; // rdx
  _DWORD *v9; // rdx

  v1 = *((_QWORD *)this + 7);
  v2 = *(_DWORD *)(v1 + 84);
  if ( v2 <= 2 )
    return 0LL;
  v3 = (_DWORD *)*((_QWORD *)this + 18);
  *((_DWORD *)this + 22) = v2 - 2;
  if ( (v3[6] & 0x800000) != 0 )
  {
    v4 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v1 + 104) + 16) + v1 + 104);
    v5 = 0;
    while ( 1 )
    {
      *((_QWORD *)this + 10) = v4;
      if ( *v4 )
      {
        if ( v4[2] > v3[39] )
          break;
      }
      v6 = (*((_DWORD *)this + 22))-- == 1;
      if ( v6 )
        return 0LL;
      v4 = (_DWORD *)((char *)v4 + (unsigned int)(4 * *v4 + 16));
    }
    LOBYTE(v5) = v4[1] <= v3[31];
  }
  else
  {
    v8 = (_DWORD *)(*(_QWORD *)(v1 + 40) - 4LL - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(v1 + 40) - 4LL) + 16));
    v9 = (_DWORD *)((char *)v8 - (unsigned int)(4 * *v8 + 16) + 4);
    v5 = 0;
    while ( 1 )
    {
      *((_QWORD *)this + 10) = v9;
      if ( *v9 )
      {
        if ( v9[1] <= v3[39] )
          break;
      }
      v6 = (*((_DWORD *)this + 22))-- == 1;
      if ( v6 )
        return 0LL;
      v9 = (_DWORD *)((char *)v9 - (unsigned int)(4 * *(v9 - 1) + 16));
    }
    LOBYTE(v5) = v9[2] > v3[31];
  }
  return v5;
}
