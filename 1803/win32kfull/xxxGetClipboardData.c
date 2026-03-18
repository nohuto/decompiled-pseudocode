/*
 * XREFs of xxxGetClipboardData @ 0x1C00B5E78
 * Callers:
 *     NtUserGetClipboardData @ 0x1C00B5C90 (NtUserGetClipboardData.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0130EE8 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01D2DC4 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01D2F4C (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01D3110 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1C01D31E8 (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     FindClipFormat @ 0x1C00B6948 (FindClipFormat.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0130EE8 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01D2DC4 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01D2F4C (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01D3110 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1C01D31E8 (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C01D32F4 (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 */

void *__fastcall xxxGetClipboardData(struct tagWINDOWSTATION *a1, __int64 a2, struct tagGETCLIPBDATA *a3)
{
  unsigned int v4; // edi
  __int64 ClipFormat; // rax
  __int64 v7; // rcx
  void *v8; // rbx
  int v9; // eax
  void *RenderData; // rax
  __int64 v12; // rax

  v4 = a2;
  if ( *((_QWORD *)a1 + 6) != gptiCurrent )
  {
    UserSetLastError(1418LL, a2);
    return 0LL;
  }
  ClipFormat = FindClipFormat(a1, a2, 1LL);
  v7 = ClipFormat;
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
    v7 = FindClipFormat(a1, v4, 1LL);
    if ( !v7 )
      return 0LL;
  }
  v8 = *(void **)(v7 + 8);
  if ( !v8 || v8 == (void *)3 )
  {
    RenderData = xxxGetRenderData(a1, v4);
    goto LABEL_15;
  }
  if ( v8 != (void *)2 )
  {
    if ( v8 != (void *)1 )
    {
      if ( !a3 )
        return v8;
      v9 = *(_DWORD *)(v7 + 16);
LABEL_10:
      *((_DWORD *)a3 + 1) = v9;
      return v8;
    }
    RenderData = xxxGetDummyText(a1, v4, a3);
    goto LABEL_15;
  }
  switch ( v4 )
  {
    case 2u:
      RenderData = xxxGetDummyBitmap(a1, a3);
      goto LABEL_15;
    case 8u:
      RenderData = xxxGetDummyDib(a1, a3);
LABEL_15:
      v8 = RenderData;
      break;
    case 9u:
      RenderData = xxxGetDummyPalette(a1, a3);
      goto LABEL_15;
    case 0x11u:
      RenderData = xxxGetDummyDibV5(a1, a3);
      goto LABEL_15;
  }
  v12 = FindClipFormat(a1, v4, 1LL);
  if ( v12 )
  {
    if ( !a3 )
      return v8;
    v9 = *(_DWORD *)(v12 + 16);
    goto LABEL_10;
  }
  return 0LL;
}
