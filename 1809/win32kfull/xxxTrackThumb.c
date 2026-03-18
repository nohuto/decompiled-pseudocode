/*
 * XREFs of xxxTrackThumb @ 0x1C022AB50
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     _GetKeyState @ 0x1C0107788 (_GetKeyState.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C02288AC (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0228E20 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxEndScroll @ 0x1C02298D0 (xxxEndScroll.c)
 */

__int16 __fastcall xxxTrackThumb(struct tagWND *a1, unsigned int a2, __int64 a3, int a4, struct tagSBCALC *a5)
{
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  char v10; // r8
  int v11; // r9d
  int v12; // r10d
  int v13; // r8d
  bool v14; // zf
  int v15; // r9d
  int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v21; // [rsp+40h] [rbp+8h]

  v8 = *(_DWORD **)(*((_QWORD *)a1 + 2) + 720LL);
  v9 = a2 >> 8;
  if ( BYTE1(a2) == 2 && v8 )
  {
    if ( (*v8 & 8) != 0 )
    {
      RecalcTrackRect(*(struct tagSBTRACK **)(*((_QWORD *)a1 + 2) + 720LL));
      *v8 &= ~8u;
    }
    HIDWORD(v21) = SHIWORD(a4);
    LODWORD(v21) = (__int16)a4;
    if ( PtInRect(v8 + 8, v21) )
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
    if ( a2 == 514 || (LOWORD(v9) = GetKeyState(1u, v17, v18, v19), (v9 & 0x8000u) == 0) )
      LOWORD(v9) = xxxEndScroll(a1, 0);
  }
  return v9;
}
