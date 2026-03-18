/*
 * XREFs of xxxTrackThumb @ 0x1C02021E0
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     _GetKeyState @ 0x1C00ECA24 (_GetKeyState.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C01FFE90 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C02003FC (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxEndScroll @ 0x1C0200E84 (xxxEndScroll.c)
 */

__int64 __fastcall xxxTrackThumb(struct tagWND *a1, unsigned int a2, __int64 a3, int a4, struct tagSBCALC *a5)
{
  _DWORD *v8; // rbx
  __int64 result; // rax
  char v10; // r8
  int v11; // r9d
  int v12; // r10d
  int v13; // r8d
  bool v14; // zf
  int v15; // r9d
  int v16; // ecx
  __int64 v17; // rdx
  unsigned __int64 v18; // [rsp+40h] [rbp+8h]

  v8 = *(_DWORD **)(*((_QWORD *)a1 + 2) + 704LL);
  result = a2 >> 8;
  if ( BYTE1(a2) == 2 && v8 )
  {
    if ( (*v8 & 8) != 0 )
    {
      RecalcTrackRect(*(struct tagSBTRACK **)(*((_QWORD *)a1 + 2) + 704LL));
      *v8 &= ~8u;
    }
    HIDWORD(v18) = SHIWORD(a4);
    LODWORD(v18) = (__int16)a4;
    if ( PtInRect(v8 + 8, v18) )
    {
      v14 = (v10 & 2) == 0;
      v13 = *((_DWORD *)a5 + 15);
      if ( v14 )
        v11 = v12;
      v15 = v8[18] + v11;
      if ( v15 >= v13 )
      {
        v16 = v13 + *((_DWORD *)a5 + 14);
        v13 = v15;
        if ( v15 >= v16 )
          v13 = v16;
      }
    }
    else
    {
      v13 = *((_DWORD *)a5 + 11);
    }
    xxxMoveThumb(a1, a5, v13);
    if ( a2 == 514 )
      return xxxEndScroll(a1, 0);
    result = GetKeyState(1u, v17);
    if ( (result & 0x8000u) == 0LL )
      return xxxEndScroll(a1, 0);
  }
  return result;
}
