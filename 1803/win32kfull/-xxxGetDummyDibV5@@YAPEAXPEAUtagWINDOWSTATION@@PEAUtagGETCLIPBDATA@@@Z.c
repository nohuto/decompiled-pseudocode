/*
 * XREFs of ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01D2F4C
 * Callers:
 *     xxxGetClipboardData @ 0x1C00B5E78 (xxxGetClipboardData.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C006CF60 (HMValidateHandleNoRip.c)
 *     xxxGetClipboardData @ 0x1C00B5E78 (xxxGetClipboardData.c)
 *     FindClipFormat @ 0x1C00B6948 (FindClipFormat.c)
 *     _ConvertMemHandle @ 0x1C00B6D3C (_ConvertMemHandle.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C013102C (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     HMUnlockDestroyObject @ 0x1C01310FC (HMUnlockDestroyObject.c)
 *     ?SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z @ 0x1C013112C (-SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C0131160 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z @ 0x1C01D29E4 (-DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z.c)
 */

void *__fastcall xxxGetDummyDibV5(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  __int64 v2; // rdi
  __int64 ClipFormat; // rax
  void *ClipboardData; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  struct tagBITMAPINFOHEADER *v9; // rbx
  __int64 v10; // rax
  HBRUSH v11; // rbx
  __int64 v12; // rdx
  void *result; // rax
  struct tagBITMAPINFO *v14; // rax
  struct tagBITMAPINFO *v15; // rbp
  int v16; // eax
  __int64 v17; // r8
  struct tagCLIP *v18; // rax
  __int64 v19; // rdx
  struct tagCLIP *v20; // rbx
  __int64 v21; // rax
  unsigned int v22; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0LL;
  ClipFormat = FindClipFormat((__int64)a1, 8u, 1);
  if ( ClipFormat )
  {
    if ( *(_QWORD *)(ClipFormat + 8) != 2LL )
    {
      ClipboardData = xxxGetClipboardData(a1, 8LL, a2);
      if ( ClipboardData )
      {
        LOBYTE(v7) = 6;
        v8 = HMValidateHandleNoRip((__int64)ClipboardData, v7);
        if ( v8 )
        {
          v9 = (struct tagBITMAPINFOHEADER *)DIBtoDIBV5((struct tagBITMAPINFOHEADER *)(v8 + 20));
          if ( v9 )
            goto LABEL_15;
        }
      }
    }
  }
  v10 = FindClipFormat((__int64)a1, 2u, 1);
  if ( !v10 )
    return (void *)v2;
  if ( *(_QWORD *)(v10 + 8) == 2LL )
    return (void *)v2;
  v11 = (HBRUSH)xxxGetClipboardData(a1, 2LL, a2);
  if ( !v11 )
    return (void *)v2;
  v12 = 0LL;
  if ( (*(_DWORD *)(gpsi + 7004LL) & 1) == 0
    || (result = xxxGetClipboardData(a1, 9LL, a2), (v12 = (__int64)result) != 0) )
  {
    v14 = xxxBMPtoDIB(v11, v12, &v22);
    v15 = v14;
    if ( v14 )
    {
      v9 = (struct tagBITMAPINFOHEADER *)DIBtoDIBV5(&v14->bmiHeader);
      Win32FreePool(v15);
    }
    else
    {
      v9 = 0LL;
    }
    if ( v9 )
    {
LABEL_15:
      v16 = SizeOfDibColorTable(v9);
      v2 = ConvertMemHandle(
             v9,
             v9->biSize + v16 + abs32(v9->biHeight) * (((v9->biWidth * v9->biBitCount + 31) >> 3) & 0xFFFFFFFC),
             v17);
      Win32FreePool(v9);
      if ( v2 )
      {
        v18 = (struct tagCLIP *)FindClipFormat((__int64)a1, 0x11u, 1);
        v20 = v18;
        if ( v18 )
        {
          UT_FreeCBFormat(v18);
          *((_QWORD *)v20 + 1) = v2;
          *(_DWORD *)a2 = 17;
        }
        else
        {
          LOBYTE(v19) = 6;
          v21 = HMValidateHandleNoRip(v2, v19);
          if ( v21 )
            HMUnlockDestroyObject(v21);
          return 0LL;
        }
      }
      return (void *)v2;
    }
    return (void *)v2;
  }
  return result;
}
