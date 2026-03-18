/*
 * XREFs of ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x1C01236D8
 * Callers:
 *     NtGdiExtFloodFill @ 0x1C0122B80 (NtGdiExtFloodFill.c)
 *     ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x1C01231E4 (-vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z.c)
 *     ?bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z @ 0x1C01234A0 (-bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FLOODBM::iColorGet(FLOODBM *this, int a2)
{
  unsigned __int8 *v2; // rdx
  unsigned int v4; // eax
  unsigned int v5; // eax

  switch ( *(_DWORD *)this )
  {
    case 1:
      return (*(unsigned __int8 *)(((__int64)a2 >> 3) + *((_QWORD *)this + 3)) >> (7 - (a2 & 7))) & 1;
    case 2:
      v5 = *(unsigned __int8 *)(((__int64)a2 >> 1) + *((_QWORD *)this + 3));
      if ( (a2 & 1) != 0 )
        return v5 & 0xF;
      else
        return v5 >> 4;
    case 3:
      return *(unsigned __int8 *)(*((_QWORD *)this + 3) + a2);
    default:
      switch ( *(_DWORD *)this )
      {
        case 4:
          v4 = *(unsigned __int16 *)(2 * a2 + *((_QWORD *)this + 3));
          break;
        case 5:
          v2 = (unsigned __int8 *)(*((_QWORD *)this + 3) + 3 * a2);
          return *v2 | (*(unsigned __int16 *)(v2 + 1) << 8);
        case 6:
          v4 = *(_DWORD *)(4 * a2 + *((_QWORD *)this + 3));
          break;
        default:
          return 0LL;
      }
      return *((_DWORD *)this + 9) & v4;
  }
}
