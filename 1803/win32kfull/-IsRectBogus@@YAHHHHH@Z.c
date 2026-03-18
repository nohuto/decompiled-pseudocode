/*
 * XREFs of ?IsRectBogus@@YAHHHHH@Z @ 0x1C019E554
 * Callers:
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C019E3E8 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 * Callees:
 *     GetMonitorRect @ 0x1C0066BB4 (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C0066BF8 (GetMonitorWorkRect.c)
 *     ?TestRectBogus@@YAHUtagRECT@@HHHH@Z @ 0x1C019E818 (-TestRectBogus@@YAHUtagRECT@@HHHH@Z.c)
 */

__int64 __fastcall IsRectBogus(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  int v5; // esi
  int v6; // ebp
  int v7; // r14d
  __int64 v8; // r15
  unsigned int v9; // ebx
  struct tagRECT v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+40h] [rbp-38h] BYREF
  __int128 v13; // [rsp+50h] [rbp-28h] BYREF

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = *(_QWORD *)(GetDispInfo(a1, a2, a3, a4) + 96);
  v11 = (struct tagRECT)*GetMonitorWorkRect(&v12, v8);
  v9 = 0;
  if ( (unsigned int)TestRectBogus(&v11, v7, v6, v5, v4) )
    return 1;
  v11 = (struct tagRECT)*GetMonitorRect(&v13, v8);
  if ( (unsigned int)TestRectBogus(&v11, v7, v6, v5, v4) )
    return 1;
  return v9;
}
