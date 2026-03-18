/*
 * XREFs of ?bFindNextScan@XCLIPOBJ@@IEAAHXZ @ 0x1C029E594
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1C029DF68 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C029E798 (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XCLIPOBJ::bFindNextScan(XCLIPOBJ *this)
{
  __int64 v1; // r11
  int v2; // r8d
  _DWORD *v3; // rdx
  _DWORD *v4; // r10
  _DWORD *v5; // rdx
  _DWORD *v6; // rdx

  v1 = *((_QWORD *)this + 18);
  v2 = *((_DWORD *)this + 22);
  if ( (*(_DWORD *)(v1 + 24) & 0x800000) != 0 )
  {
    while ( v2 != 1 )
    {
      v3 = (_DWORD *)*((_QWORD *)this + 10);
      *((_DWORD *)this + 22) = --v2;
      v4 = (_DWORD *)((char *)v3 + (unsigned int)(4 * *v3 + 16));
      *((_QWORD *)this + 10) = v4;
      if ( v4[1] > *(_DWORD *)(v1 + 124) )
        break;
      if ( *v4 )
        return 1LL;
    }
  }
  else
  {
    while ( v2 != 1 )
    {
      --v2;
      v5 = (_DWORD *)(*((_QWORD *)this + 10) - 4LL);
      *((_DWORD *)this + 22) = v2;
      v6 = (_DWORD *)((char *)v5 - (unsigned int)(4 * *v5 + 16) + 4);
      *((_QWORD *)this + 10) = v6;
      if ( v6[2] <= *(_DWORD *)(v1 + 124) )
        break;
      if ( *v6 )
        return 1LL;
    }
  }
  return 0LL;
}
