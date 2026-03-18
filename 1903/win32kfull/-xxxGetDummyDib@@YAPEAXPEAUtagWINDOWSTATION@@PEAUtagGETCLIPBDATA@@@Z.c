/*
 * XREFs of ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C015C498
 * Callers:
 *     xxxGetClipboardData @ 0x1C01268B4 (xxxGetClipboardData.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00B4C50 (HMValidateHandleNoRip.c)
 *     FindClipFormat @ 0x1C00B6DAC (FindClipFormat.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C012586C (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     xxxGetClipboardData @ 0x1C01268B4 (xxxGetClipboardData.c)
 *     _ConvertMemHandle @ 0x1C01356D0 (_ConvertMemHandle.c)
 *     ?SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z @ 0x1C015C5E4 (-SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C015C618 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 */

void *__fastcall xxxGetDummyDib(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  HPALETTE ClipboardData; // rbp
  __int64 ClipFormat; // rax
  __int64 v6; // rax
  HBITMAP v7; // rax
  __int64 v8; // rdi
  struct tagBITMAPINFOHEADER *v9; // rax
  struct tagBITMAPINFOHEADER *v10; // rbp
  unsigned int v11; // eax
  __int64 v12; // r8
  struct tagCLIP *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct tagCLIP *v17; // rsi
  void *result; // rax
  __int64 v19; // rax

  ClipboardData = 0LL;
  if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 )
  {
    ClipboardData = (HPALETTE)xxxGetClipboardData(a1, 9LL, (__int64)a2);
    if ( !ClipboardData )
      return 0LL;
  }
  ClipFormat = FindClipFormat((__int64)a1, 17LL, 1);
  if ( ClipFormat )
  {
    if ( *(_QWORD *)(ClipFormat + 8) != 2LL )
    {
      result = xxxGetClipboardData(a1, 17LL, (__int64)a2);
      if ( result )
      {
        *(_DWORD *)a2 = 17;
        *((_QWORD *)a2 + 1) = ClipboardData;
        return result;
      }
    }
  }
  v6 = FindClipFormat((__int64)a1, 2LL, 1);
  if ( !v6 )
    return 0LL;
  if ( *(_QWORD *)(v6 + 8) == 2LL )
    return 0LL;
  v7 = (HBITMAP)xxxGetClipboardData(a1, 2LL, (__int64)a2);
  if ( !v7 )
    return 0LL;
  v8 = 0LL;
  v9 = xxxBMPtoDIB(v7, ClipboardData, 0LL);
  v10 = v9;
  if ( v9 )
  {
    v11 = SizeOfDibColorTable(v9);
    v8 = ConvertMemHandle(
           v10,
           v10->biSize + v11 + abs32(v10->biHeight) * (((v10->biWidth * v10->biBitCount + 31) >> 3) & 0xFFFFFFFC),
           v12);
    Win32FreePool(v10);
    if ( v8 )
    {
      v13 = (struct tagCLIP *)FindClipFormat((__int64)a1, 8LL, 1);
      v17 = v13;
      if ( v13 )
      {
        UT_FreeCBFormat(v13);
        *((_QWORD *)v17 + 1) = v8;
        *(_DWORD *)a2 = 8;
      }
      else
      {
        LOBYTE(v14) = 6;
        v19 = HMValidateHandleNoRip(v8, v14, v15, v16);
        if ( v19 )
          HMUnlockDestroyObject(v19);
        return 0LL;
      }
    }
  }
  return (void *)v8;
}
