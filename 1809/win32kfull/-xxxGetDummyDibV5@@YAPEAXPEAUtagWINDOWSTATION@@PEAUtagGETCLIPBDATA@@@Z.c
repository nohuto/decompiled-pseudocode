/*
 * XREFs of ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F7988
 * Callers:
 *     xxxGetClipboardData @ 0x1C00DC174 (xxxGetClipboardData.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00B6440 (HMValidateHandleNoRip.c)
 *     FindClipFormat @ 0x1C00D9E78 (FindClipFormat.c)
 *     xxxGetClipboardData @ 0x1C00DC174 (xxxGetClipboardData.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C00DEAE8 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     HMUnlockDestroyObject @ 0x1C00DEBB8 (HMUnlockDestroyObject.c)
 *     _ConvertMemHandle @ 0x1C012B950 (_ConvertMemHandle.c)
 *     ?SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z @ 0x1C0155378 (-SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z.c)
 *     ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z @ 0x1C01F738C (-DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z.c)
 *     ?xxxBMPtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@@Z @ 0x1C01F7618 (-xxxBMPtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@@Z.c)
 */

void *__fastcall xxxGetDummyDibV5(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  __int64 v2; // rbx
  __int64 ClipFormat; // rax
  void *ClipboardData; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  struct tagBITMAPINFOHEADER *v9; // rsi
  __int64 v10; // rax
  HSURF v11; // rsi
  __int64 v12; // rdx
  void *result; // rax
  int v14; // eax
  __int64 v15; // r8
  struct tagCLIP *v16; // rax
  __int64 v17; // rdx
  struct tagCLIP *v18; // rdi
  __int64 v19; // rax

  v2 = 0LL;
  ClipFormat = FindClipFormat((__int64)a1, 8u, 1);
  if ( ClipFormat )
  {
    if ( *(_QWORD *)(ClipFormat + 8) != 2LL )
    {
      ClipboardData = xxxGetClipboardData(a1, 8LL, (__int64)a2);
      if ( ClipboardData )
      {
        LOBYTE(v7) = 6;
        v8 = HMValidateHandleNoRip((__int64)ClipboardData, v7);
        if ( v8 )
        {
          v9 = (struct tagBITMAPINFOHEADER *)DIBtoDIBV5((struct tagBITMAPINFOHEADER *)(v8 + 20));
          if ( v9 )
          {
LABEL_12:
            v14 = SizeOfDibColorTable(v9);
            v2 = ConvertMemHandle(
                   v9,
                   v9->biSize + v14 + abs32(v9->biHeight) * (((v9->biWidth * v9->biBitCount + 31) >> 3) & 0xFFFFFFFC),
                   v15);
            Win32FreePool(v9);
            if ( v2 )
            {
              v16 = (struct tagCLIP *)FindClipFormat((__int64)a1, 0x11u, 1);
              v18 = v16;
              if ( v16 )
              {
                UT_FreeCBFormat(v16);
                *((_QWORD *)v18 + 1) = v2;
                *(_DWORD *)a2 = 17;
              }
              else
              {
                LOBYTE(v17) = 6;
                v19 = HMValidateHandleNoRip(v2, v17);
                if ( v19 )
                  HMUnlockDestroyObject(v19);
                return 0LL;
              }
            }
            return (void *)v2;
          }
        }
      }
    }
  }
  v10 = FindClipFormat((__int64)a1, 2u, 1);
  if ( !v10 )
    return (void *)v2;
  if ( *(_QWORD *)(v10 + 8) == 2LL )
    return (void *)v2;
  v11 = (HSURF)xxxGetClipboardData(a1, 2LL, (__int64)a2);
  if ( !v11 )
    return (void *)v2;
  v12 = 0LL;
  if ( (*(_DWORD *)(gpsi + 7004LL) & 1) == 0
    || (result = xxxGetClipboardData(a1, 9LL, (__int64)a2), (v12 = (__int64)result) != 0) )
  {
    v9 = (struct tagBITMAPINFOHEADER *)xxxBMPtoDIBV5(v11, v12);
    if ( v9 )
      goto LABEL_12;
    return (void *)v2;
  }
  return result;
}
