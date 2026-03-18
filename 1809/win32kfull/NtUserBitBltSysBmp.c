/*
 * XREFs of NtUserBitBltSysBmp @ 0x1C01065C0
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0106800 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C0106948 (PrepareHDCBITSBitmap.c)
 *     GreGetDCDpiScaleValue @ 0x1C0106A90 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall NtUserBitBltSysBmp(HDC a1, int a2, int a3, unsigned int a4, int a5)
{
  int v7; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  HDC v17; // r15
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // r14
  __int16 *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r9d
  int v24; // eax
  int DCDpiScaleValue; // eax

  v7 = 0;
  EnterCrit(0LL, 1LL);
  if ( a4 >= 0x5D )
  {
    UserSetLastError(87LL, v10, v11, v12);
  }
  else
  {
    v17 = (HDC)PrepareHDCBITSBitmap(a1);
    if ( v17 )
    {
      DpiForSystem = GetDpiForSystem();
      OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, DpiForSystem);
      v20 = 0LL;
      if ( (W32GetCurrentThreadDpiAwarenessContext(v22, v21) & 0xF) == 0 )
      {
        DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
        if ( DCDpiScaleValue > 1 )
          v20 = (__int16 *)GetOemBitmapInfoForDpi(a4, (unsigned int)(96 * DCDpiScaleValue));
      }
      v23 = OemBitmapInfoForDpi[2];
      if ( v20 )
        v24 = GreStretchBltInternal(
                a1,
                a2,
                a3,
                v23,
                OemBitmapInfoForDpi[3],
                v17,
                *v20,
                v20[1],
                v20[2],
                v20[3],
                a5,
                0,
                0);
      else
        v24 = NtGdiBitBltInternal(
                a1,
                a2,
                a3,
                v23,
                OemBitmapInfoForDpi[3],
                v17,
                *OemBitmapInfoForDpi,
                OemBitmapInfoForDpi[1],
                a5,
                0,
                0);
      v7 = v24;
    }
  }
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v7;
}
