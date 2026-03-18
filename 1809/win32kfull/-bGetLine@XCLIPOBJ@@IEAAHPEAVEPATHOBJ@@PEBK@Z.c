/*
 * XREFs of ?bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEBK@Z @ 0x1C013AA48
 * Callers:
 *     ?vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C013A054 (-vEnumPathStart@XCLIPOBJ@@QEAAXPEAU_PATHOBJ@@PEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C013A5A8 (-bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z.c)
 * Callees:
 *     ?bEnumStartLine@XCLIPOBJ@@QEAAHK@Z @ 0x1C013ABD4 (-bEnumStartLine@XCLIPOBJ@@QEAAHK@Z.c)
 *     ?bGetMorePoints@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z @ 0x1C013B1BC (-bGetMorePoints@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z.c)
 */

__int64 __fastcall XCLIPOBJ::bGetLine(XCLIPOBJ *this, struct EPATHOBJ *a2, const unsigned int *a3)
{
  __int64 v3; // r8
  int v6; // edi
  const unsigned int *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  v3 = *((_QWORD *)this + 18);
  v6 = 0;
  while ( 1 )
  {
    if ( (*(_DWORD *)(v3 + 24) & 0x2000000) != 0 )
      return 0LL;
    if ( *(_DWORD *)v3 > 1u )
    {
      *(_QWORD *)(v3 + 4) = **(_QWORD **)(v3 + 16);
      *(_QWORD *)(*((_QWORD *)this + 18) + 16LL) += 8LL;
      --**((_DWORD **)this + 18);
      if ( (unsigned int)XCLIPOBJ::bEnumStartLine(this, v6 | *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 8u) )
        return 1LL;
      goto LABEL_11;
    }
    if ( (*(_DWORD *)(v3 + 24) & 8) == 0 )
      break;
    *(_QWORD *)(v3 + 4) = **(_QWORD **)(v3 + 16);
    *(_QWORD *)(*((_QWORD *)this + 18) + 16LL) = *((_QWORD *)this + 18) + 204LL;
    if ( (unsigned int)XCLIPOBJ::bEnumStartLine(this, 0x100000u) && !v6 )
      return 1LL;
LABEL_11:
    v3 = *((_QWORD *)this + 18);
  }
  if ( !(unsigned int)XCLIPOBJ::bGetMorePoints(this, a2, (unsigned int *)&v8) )
    return 0LL;
  if ( !(unsigned int)XCLIPOBJ::bEnumStartLine(this, v6 | (unsigned int)v8) )
  {
    v6 |= *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 5;
    goto LABEL_11;
  }
  return 1LL;
}
