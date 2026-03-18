/*
 * XREFs of ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C020DD1C
 * Callers:
 *     xxxGetClipboardData @ 0x1C01268B4 (xxxGetClipboardData.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00B4C50 (HMValidateHandleNoRip.c)
 *     FindClipFormat @ 0x1C00B6DAC (FindClipFormat.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C012586C (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     xxxGetClipboardData @ 0x1C01268B4 (xxxGetClipboardData.c)
 *     _ConvertMemHandle @ 0x1C01356D0 (_ConvertMemHandle.c)
 *     ?SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z @ 0x1C015C5E4 (-SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z.c)
 *     ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z @ 0x1C020D714 (-DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z.c)
 *     ?xxxBMPtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@@Z @ 0x1C020D994 (-xxxBMPtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@@Z.c)
 */

void *__fastcall xxxGetDummyDibV5(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  __int64 v2; // rbx
  __int64 ClipFormat; // rax
  void *ClipboardData; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  struct tagBITMAPINFOHEADER *v11; // rsi
  __int64 v12; // rax
  HBRUSH v13; // rsi
  __int64 v14; // rdx
  void *result; // rax
  int v16; // eax
  __int64 v17; // r8
  struct tagCLIP *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct tagCLIP *v22; // rdi
  __int64 v23; // rax

  v2 = 0LL;
  ClipFormat = FindClipFormat((__int64)a1, 8LL, 1);
  if ( ClipFormat )
  {
    if ( *(_QWORD *)(ClipFormat + 8) != 2LL )
    {
      ClipboardData = xxxGetClipboardData(a1, 8LL, (__int64)a2);
      if ( ClipboardData )
      {
        LOBYTE(v7) = 6;
        v10 = HMValidateHandleNoRip((__int64)ClipboardData, v7, v8, v9);
        if ( v10 )
        {
          v11 = (struct tagBITMAPINFOHEADER *)DIBtoDIBV5((struct tagBITMAPINFOHEADER *)(v10 + 20));
          if ( v11 )
          {
LABEL_12:
            v16 = SizeOfDibColorTable(v11);
            v2 = ConvertMemHandle(
                   v11,
                   v11->biSize
                 + v16
                 + abs32(v11->biHeight) * (((v11->biWidth * v11->biBitCount + 31) >> 3) & 0xFFFFFFFC),
                   v17);
            Win32FreePool(v11);
            if ( v2 )
            {
              v18 = (struct tagCLIP *)FindClipFormat((__int64)a1, 17LL, 1);
              v22 = v18;
              if ( v18 )
              {
                UT_FreeCBFormat(v18);
                *((_QWORD *)v22 + 1) = v2;
                *(_DWORD *)a2 = 17;
              }
              else
              {
                LOBYTE(v19) = 6;
                v23 = HMValidateHandleNoRip(v2, v19, v20, v21);
                if ( v23 )
                  HMUnlockDestroyObject(v23);
                return 0LL;
              }
            }
            return (void *)v2;
          }
        }
      }
    }
  }
  v12 = FindClipFormat((__int64)a1, 2LL, 1);
  if ( !v12 )
    return (void *)v2;
  if ( *(_QWORD *)(v12 + 8) == 2LL )
    return (void *)v2;
  v13 = (HBRUSH)xxxGetClipboardData(a1, 2LL, (__int64)a2);
  if ( !v13 )
    return (void *)v2;
  v14 = 0LL;
  if ( (*(_DWORD *)(gpsi + 7004LL) & 1) == 0
    || (result = xxxGetClipboardData(a1, 9LL, (__int64)a2), (v14 = (__int64)result) != 0) )
  {
    v11 = (struct tagBITMAPINFOHEADER *)xxxBMPtoDIBV5(v13, v14);
    if ( v11 )
      goto LABEL_12;
    return (void *)v2;
  }
  return result;
}
