/*
 * XREFs of ?IsRectBogus@@YAHHHHH@Z @ 0x1C01BFA84
 * Callers:
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01BF910 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 * Callees:
 *     GetMonitorWorkRect @ 0x1C00B7058 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C00B709C (GetMonitorRect.c)
 *     ?TestRectBogus@@YAHUtagRECT@@HHHH@Z @ 0x1C01BFD64 (-TestRectBogus@@YAHUtagRECT@@HHHH@Z.c)
 */

__int64 __fastcall IsRectBogus(__int64 a1, __int64 a2, int a3, int a4)
{
  int v6; // ebp
  int v7; // r14d
  __int64 v8; // r15
  unsigned int v9; // ebx
  struct tagRECT v11; // [rsp+30h] [rbp-48h] BYREF
  __m128i v12; // [rsp+40h] [rbp-38h] BYREF
  __m128i v13; // [rsp+50h] [rbp-28h] BYREF

  v6 = a2;
  v7 = a1;
  v8 = *(_QWORD *)(GetDispInfo(a1, a2) + 96);
  v11 = (struct tagRECT)*GetMonitorWorkRect(&v12, v8);
  v9 = 0;
  if ( (unsigned int)TestRectBogus(&v11, v7, v6, a3, a4) )
    return 1;
  v11 = (struct tagRECT)*GetMonitorRect(&v13, v8);
  if ( (unsigned int)TestRectBogus(&v11, v7, v6, a3, a4) )
    return 1;
  return v9;
}
