/*
 * XREFs of ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C020DB68
 * Callers:
 *     xxxGetClipboardData @ 0x1C01268B4 (xxxGetClipboardData.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoRip @ 0x1C00B4C50 (HMValidateHandleNoRip.c)
 *     FindClipFormat @ 0x1C00B6DAC (FindClipFormat.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C012586C (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     xxxGetClipboardData @ 0x1C01268B4 (xxxGetClipboardData.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C020D9E4 (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 */

void *__fastcall xxxGetDummyBitmap(struct tagWINDOWSTATION *a1, struct tagGETCLIPBDATA *a2)
{
  void *v2; // rbx
  void *ClipboardData; // rbp
  __int64 ClipFormat; // rax
  void *result; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r8
  struct tagCLIP *v21; // rax
  struct tagCLIP *v22; // rsi
  __int64 v23; // [rsp+20h] [rbp-28h] BYREF
  __int64 v24; // [rsp+28h] [rbp-20h]
  __int64 v25; // [rsp+30h] [rbp-18h]

  v2 = 0LL;
  v23 = 0LL;
  ClipboardData = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 )
    ClipboardData = xxxGetClipboardData(a1, 9LL, (__int64)a2);
  ClipFormat = FindClipFormat((__int64)a1, 17LL, 1);
  if ( ClipFormat
    && *(_QWORD *)(ClipFormat + 8) != 2LL
    && (result = xxxGetClipboardData(a1, 17LL, (__int64)a2), (v2 = result) != 0LL) )
  {
    *(_DWORD *)a2 = 17;
    *((_QWORD *)a2 + 1) = ClipboardData;
  }
  else
  {
    v8 = FindClipFormat((__int64)a1, 8LL, 1);
    if ( v8 && *(_QWORD *)(v8 + 8) != 2LL )
      v2 = xxxGetClipboardData(a1, 8LL, (__int64)a2);
    if ( v2 && (LOBYTE(v9) = 6, (v13 = HMValidateHandleNoRip((__int64)v2, v9, v10, v11)) != 0) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v14, v15);
      v23 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v23;
      v24 = v13;
      HMLockObject(v13);
      v19 = xxxDIBtoBMP((const struct tagBITMAPINFO *)(v13 + 20), (__int64)ClipboardData, *(_DWORD *)(v13 + 16));
      if ( v19 )
      {
        v21 = (struct tagCLIP *)FindClipFormat((__int64)a1, 2LL, 1);
        v22 = v21;
        if ( v21 )
        {
          UT_FreeCBFormat(v21);
          *((_QWORD *)v22 + 1) = v19;
          GreSetBitmapOwner(v19, 0LL);
          *(_DWORD *)a2 = 2;
        }
        else
        {
          GreDeleteObject(v19);
          v19 = 0LL;
        }
      }
      ThreadUnlock1(v18, v17, v20);
      return (void *)v19;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
