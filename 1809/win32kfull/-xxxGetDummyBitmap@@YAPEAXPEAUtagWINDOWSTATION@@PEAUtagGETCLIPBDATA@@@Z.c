/*
 * XREFs of ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F77F0
 * Callers:
 *     xxxGetClipboardData @ 0x1C00DC174 (xxxGetClipboardData.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoRip @ 0x1C00B6440 (HMValidateHandleNoRip.c)
 *     FindClipFormat @ 0x1C00D9E78 (FindClipFormat.c)
 *     xxxGetClipboardData @ 0x1C00DC174 (xxxGetClipboardData.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C00DEAE8 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01F7668 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 */

HSURF __fastcall xxxGetDummyBitmap(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  void *v2; // rbx
  void *ClipboardData; // rbp
  __int64 ClipFormat; // rax
  HSURF result; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  HSURF v15; // rbx
  struct tagCLIP *v16; // rax
  struct tagCLIP *v17; // rsi
  _QWORD v18[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  ClipboardData = 0LL;
  if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 )
    ClipboardData = xxxGetClipboardData(a1, 9LL, (__int64)a2);
  ClipFormat = FindClipFormat((__int64)a1, 0x11u, 1);
  if ( ClipFormat
    && *(_QWORD *)(ClipFormat + 8) != 2LL
    && (result = (HSURF)xxxGetClipboardData(a1, 17LL, (__int64)a2), (v2 = result) != 0LL) )
  {
    *(_DWORD *)a2 = 17;
    *((_QWORD *)a2 + 1) = ClipboardData;
  }
  else
  {
    v8 = FindClipFormat((__int64)a1, 8u, 1);
    if ( v8 && *(_QWORD *)(v8 + 8) != 2LL )
      v2 = xxxGetClipboardData(a1, 8LL, (__int64)a2);
    if ( v2 && (LOBYTE(v9) = 6, (v11 = HMValidateHandleNoRip((__int64)v2, v9)) != 0) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
      v18[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v18;
      v18[1] = v11;
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v15 = xxxDIBtoBMP((const struct tagBITMAPINFO *)(v11 + 20), (__int64)ClipboardData, *(_DWORD *)(v11 + 16));
      if ( v15 )
      {
        v16 = (struct tagCLIP *)FindClipFormat((__int64)a1, 2u, 1);
        v17 = v16;
        if ( v16 )
        {
          UT_FreeCBFormat(v16);
          *((_QWORD *)v17 + 1) = v15;
          GreSetBitmapOwner(v15, 0LL);
          *(_DWORD *)a2 = 2;
        }
        else
        {
          GreDeleteObject(v15);
          v15 = 0LL;
        }
      }
      ThreadUnlock1(v14, v13);
      return v15;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
