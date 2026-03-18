/*
 * XREFs of xxxGetClipboardData @ 0x1C01007A4
 * Callers:
 *     NtUserGetClipboardData @ 0x1C00FF9B0 (NtUserGetClipboardData.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C015D448 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C020D8B8 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C020DA6C (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C020DC1C (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1C020DCF8 (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0009D94 (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     FindClipFormat @ 0x1C005829C (FindClipFormat.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C015D448 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C020D8B8 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C020DA6C (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C020DC1C (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1C020DCF8 (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 */

void *__fastcall xxxGetClipboardData(struct tagWINDOWSTATION *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 ClipFormat; // rax
  void *v7; // rbx
  void *RenderData; // rax

  v4 = a2;
  if ( *((_QWORD *)a1 + 6) != gptiCurrent )
  {
    UserSetLastError(1418LL, a2, a3, gptiCurrent);
    return 0LL;
  }
  ClipFormat = FindClipFormat((__int64)a1, a2, 1);
  if ( !ClipFormat )
    return 0LL;
  if ( (unsigned __int64)(*(_QWORD *)(ClipFormat + 8) - 3LL) <= 1 )
  {
    if ( v4 == 14 )
    {
      v4 = 3;
    }
    else if ( v4 == 3 )
    {
      v4 = 14;
    }
    ClipFormat = FindClipFormat((__int64)a1, v4, 1);
    if ( !ClipFormat )
      return 0LL;
  }
  v7 = *(void **)(ClipFormat + 8);
  if ( !v7 || v7 == (void *)3 )
  {
    RenderData = xxxGetRenderData(a1, v4);
    goto LABEL_12;
  }
  if ( v7 == (void *)2 )
  {
    switch ( v4 )
    {
      case 2u:
        RenderData = xxxGetDummyBitmap(a1, (struct tagGETCLIPBDATA *)a3);
        break;
      case 8u:
        RenderData = xxxGetDummyDib(a1, (struct tagGETCLIPBDATA *)a3);
        break;
      case 9u:
        RenderData = xxxGetDummyPalette(a1, (struct tagGETCLIPBDATA *)a3);
        break;
      case 0x11u:
        RenderData = xxxGetDummyDibV5(a1, (struct tagGETCLIPBDATA *)a3);
        break;
      default:
LABEL_13:
        ClipFormat = FindClipFormat((__int64)a1, v4, 1);
        if ( ClipFormat )
          goto LABEL_8;
        return 0LL;
    }
LABEL_12:
    v7 = RenderData;
    goto LABEL_13;
  }
  if ( v7 == (void *)1 )
  {
    RenderData = xxxGetDummyText(a1, v4, (struct tagGETCLIPBDATA *)a3);
    goto LABEL_12;
  }
LABEL_8:
  if ( a3 )
    *(_DWORD *)(a3 + 4) = *(_DWORD *)(ClipFormat + 16);
  return v7;
}
