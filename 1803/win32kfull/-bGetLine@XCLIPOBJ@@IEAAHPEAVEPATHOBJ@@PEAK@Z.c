/*
 * XREFs of ?bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z @ 0x1C028B608
 * Callers:
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C028B52C (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 *     ?vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C028B874 (-vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?bGetMorePoints@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z @ 0x1C028B71C (-bGetMorePoints@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z.c)
 *     ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1C029E0E8 (-bEnumStartLine@XCLIPOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall XCLIPOBJ::bGetLine(XCLIPOBJ *this, struct EPATHOBJ *a2, unsigned int *a3)
{
  __int64 v3; // r8
  int v6; // edi
  unsigned int *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  v3 = *((_QWORD *)this + 18);
  v6 = 0;
  while ( (*(_DWORD *)(v3 + 24) & 0x2000000) == 0 )
  {
    if ( *(_DWORD *)v3 <= 1u )
    {
      if ( (*(_DWORD *)(v3 + 24) & 8) != 0 )
      {
        *(_QWORD *)(v3 + 4) = **(_QWORD **)(v3 + 16);
        *(_QWORD *)(*((_QWORD *)this + 18) + 16LL) = *((_QWORD *)this + 18) + 204LL;
        if ( (unsigned int)XCLIPOBJ::bEnumStartLine(this, 0x100000u) && !v6 )
          return 1LL;
      }
      else
      {
        if ( !(unsigned int)XCLIPOBJ::bGetMorePoints(this, a2, (unsigned int *)&v8) )
          return 0LL;
        if ( (unsigned int)XCLIPOBJ::bEnumStartLine(this, v6 | (unsigned int)v8) )
          return 1LL;
        v6 |= *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 5;
      }
    }
    else
    {
      *(_QWORD *)(v3 + 4) = **(_QWORD **)(v3 + 16);
      *(_QWORD *)(*((_QWORD *)this + 18) + 16LL) += 8LL;
      --**((_DWORD **)this + 18);
      if ( (unsigned int)XCLIPOBJ::bEnumStartLine(this, v6 | *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 8u) )
        return 1LL;
    }
    v3 = *((_QWORD *)this + 18);
  }
  return 0LL;
}
