/*
 * XREFs of ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C020DA6C
 * Callers:
 *     xxxGetClipboardData @ 0x1C01007A4 (xxxGetClipboardData.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00559FC (HMValidateHandleNoRip.c)
 *     FindClipFormat @ 0x1C005829C (FindClipFormat.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C00FF75C (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     xxxGetClipboardData @ 0x1C01007A4 (xxxGetClipboardData.c)
 *     _ConvertMemHandle @ 0x1C0110270 (_ConvertMemHandle.c)
 *     ?SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z @ 0x1C015D594 (-SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z.c)
 *     ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z @ 0x1C020D464 (-DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z.c)
 *     ?xxxBMPtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@@Z @ 0x1C020D6E4 (-xxxBMPtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@@Z.c)
 */

void *__fastcall xxxGetDummyDibV5(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  __int64 v2; // rbx
  __int64 ClipFormat; // rax
  void *ClipboardData; // rax
  __int64 v7; // rax
  struct tagBITMAPINFOHEADER *v8; // rsi
  __int64 v9; // rax
  HBRUSH v10; // rsi
  __int64 v11; // rdx
  void *result; // rax
  int v13; // eax
  __int64 v14; // r8
  struct tagCLIP *v15; // rax
  struct tagCLIP *v16; // rdi
  __int64 v17; // rax

  v2 = 0LL;
  ClipFormat = FindClipFormat((__int64)a1, 8LL, 1);
  if ( ClipFormat )
  {
    if ( *(_QWORD *)(ClipFormat + 8) != 2LL )
    {
      ClipboardData = xxxGetClipboardData(a1, 8LL, (__int64)a2);
      if ( ClipboardData )
      {
        v7 = HMValidateHandleNoRip((__int64)ClipboardData, 6);
        if ( v7 )
        {
          v8 = (struct tagBITMAPINFOHEADER *)DIBtoDIBV5((struct tagBITMAPINFOHEADER *)(v7 + 20));
          if ( v8 )
          {
LABEL_12:
            v13 = SizeOfDibColorTable(v8);
            v2 = ConvertMemHandle(
                   v8,
                   v8->biSize + v13 + abs32(v8->biHeight) * (((v8->biWidth * v8->biBitCount + 31) >> 3) & 0xFFFFFFFC),
                   v14);
            Win32FreePool(v8);
            if ( v2 )
            {
              v15 = (struct tagCLIP *)FindClipFormat((__int64)a1, 17LL, 1);
              v16 = v15;
              if ( v15 )
              {
                UT_FreeCBFormat(v15);
                *((_QWORD *)v16 + 1) = v2;
                *(_DWORD *)a2 = 17;
              }
              else
              {
                v17 = HMValidateHandleNoRip(v2, 6);
                if ( v17 )
                  HMUnlockDestroyObject(v17);
                return 0LL;
              }
            }
            return (void *)v2;
          }
        }
      }
    }
  }
  v9 = FindClipFormat((__int64)a1, 2LL, 1);
  if ( !v9 )
    return (void *)v2;
  if ( *(_QWORD *)(v9 + 8) == 2LL )
    return (void *)v2;
  v10 = (HBRUSH)xxxGetClipboardData(a1, 2LL, (__int64)a2);
  if ( !v10 )
    return (void *)v2;
  v11 = 0LL;
  if ( (*(_DWORD *)(gpsi + 7004LL) & 1) == 0
    || (result = xxxGetClipboardData(a1, 9LL, (__int64)a2), (v11 = (__int64)result) != 0) )
  {
    v8 = (struct tagBITMAPINFOHEADER *)xxxBMPtoDIBV5(v10, v11);
    if ( v8 )
      goto LABEL_12;
    return (void *)v2;
  }
  return result;
}
