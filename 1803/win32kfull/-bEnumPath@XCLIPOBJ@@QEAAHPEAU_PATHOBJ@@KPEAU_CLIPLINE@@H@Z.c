/*
 * XREFs of ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1C028B52C
 * Callers:
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C012833C (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x1C02852A0 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     PATHOBJ_bEnumClipLines @ 0x1C028BA60 (PATHOBJ_bEnumClipLines.c)
 * Callees:
 *     ?bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z @ 0x1C028B608 (-bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEAK@Z.c)
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1C029DF68 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 */

_BOOL8 __fastcall XCLIPOBJ::bEnumPath(
        XCLIPOBJ *this,
        struct _PATHOBJ *a2,
        unsigned int a3,
        struct _CLIPLINE *a4,
        int a5)
{
  unsigned int *v10; // r8
  __int64 v11; // r8
  int v12; // ecx
  __int64 v13; // rax

  a4->c = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 0x2000000) != 0 )
    return 0LL;
  do
  {
    if ( !(unsigned int)XCLIPOBJ::bEnumLine(this, a3, a4) )
      XCLIPOBJ::bGetLine(this, (struct EPATHOBJ *)a2, v10);
    v11 = *((_QWORD *)this + 18);
    v12 = *(_DWORD *)(v11 + 24);
  }
  while ( !a4->c && (v12 & 0x2000000) == 0 );
  v13 = *((_QWORD *)this + 18);
  if ( (v12 & 0x2000000) != 0 && *(int *)(v11 + 180) > 0 )
  {
    if ( a5 )
    {
      **(_DWORD **)(v11 + 184) = (unsigned __int16)(*(_DWORD *)(v11 + 176) % *(_DWORD *)(v11 + 200)) | ((unsigned __int16)(*(_DWORD *)(v11 + 176) / *(_DWORD *)(v11 + 200)) << 16);
      v13 = *((_QWORD *)this + 18);
    }
  }
  return (*(_DWORD *)(v13 + 24) & 0x2000000) == 0;
}
