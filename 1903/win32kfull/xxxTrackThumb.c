/*
 * XREFs of xxxTrackThumb @ 0x1C0243790
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     _GetKeyState @ 0x1C0110D00 (_GetKeyState.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0241328 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C02418CC (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxEndScroll @ 0x1C024239C (xxxEndScroll.c)
 */

__int16 __fastcall xxxTrackThumb(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, struct tagSBCALC *a5)
{
  int v5; // ebp
  int v6; // esi
  unsigned int *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  char v11; // r8
  int v12; // r9d
  int v13; // r10d
  int v14; // r8d
  bool v15; // zf
  int v16; // r9d
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v22; // [rsp+40h] [rbp+8h]

  v5 = a4;
  v6 = a2;
  v8 = *(unsigned int **)(*((_QWORD *)a1 + 2) + 712LL);
  v9 = (unsigned int)a2 >> 8;
  if ( BYTE1(a2) == 2 && v8 )
  {
    v10 = *v8;
    if ( (v10 & 8) != 0 )
    {
      RecalcTrackRect(*(struct tagSBTRACK **)(*((_QWORD *)a1 + 2) + 712LL), a2, v10, a4);
      *v8 &= ~8u;
    }
    HIDWORD(v22) = SHIWORD(v5);
    LODWORD(v22) = (__int16)v5;
    if ( PtInRect(v8 + 8, v22) )
    {
      v15 = (v11 & 2) == 0;
      v14 = *((_DWORD *)a5 + 15);
      if ( v15 )
        v12 = v13;
      v16 = v8[18] + v12;
      if ( v16 >= v14 )
      {
        v17 = v14 + *((_DWORD *)a5 + 14);
        v14 = v16;
        if ( v16 >= v17 )
          v14 = v17;
      }
    }
    else
    {
      v14 = *((_DWORD *)a5 + 11);
    }
    xxxMoveThumb(a1, a5, v14);
    if ( v6 == 514 || (LOWORD(v9) = GetKeyState(1u, v18, v19, v20), (v9 & 0x8000u) == 0) )
      LOWORD(v9) = (unsigned __int16)xxxEndScroll(a1, 0);
  }
  return v9;
}
