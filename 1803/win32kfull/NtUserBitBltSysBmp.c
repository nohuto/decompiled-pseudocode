/*
 * XREFs of NtUserBitBltSysBmp @ 0x1C000D180
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDCDpiScaleValue @ 0x1C000C580 (GreGetDCDpiScaleValue.c)
 *     GetOemBitmapInfoForDpi @ 0x1C000D3C0 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C000D504 (PrepareHDCBITSBitmap.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C009B858 (GreStretchBltInternal.c)
 */

__int64 __fastcall NtUserBitBltSysBmp(HDC a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  int v7; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  HDC v14; // r15
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // r14
  __int16 *v17; // rdi
  __int64 v18; // r9
  int v19; // eax
  int DCDpiScaleValue; // eax

  v7 = 0;
  EnterCrit(0LL, 1LL);
  if ( a4 >= 0x5D )
  {
    UserSetLastError(87LL);
  }
  else
  {
    v14 = (HDC)PrepareHDCBITSBitmap(a1);
    if ( v14 )
    {
      DpiForSystem = GetDpiForSystem();
      OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, DpiForSystem);
      v17 = 0LL;
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
      {
        DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
        if ( DCDpiScaleValue > 1 )
          v17 = (__int16 *)GetOemBitmapInfoForDpi(a4, (unsigned int)(96 * DCDpiScaleValue));
      }
      v18 = (unsigned int)OemBitmapInfoForDpi[2];
      if ( v17 )
        v19 = GreStretchBltInternal(
                a1,
                a2,
                a3,
                v18,
                OemBitmapInfoForDpi[3],
                v14,
                *v17,
                v17[1],
                v17[2],
                v17[3],
                a5,
                0,
                0);
      else
        v19 = NtGdiBitBltInternal(
                a1,
                a2,
                a3,
                v18,
                OemBitmapInfoForDpi[3],
                v14,
                *OemBitmapInfoForDpi,
                OemBitmapInfoForDpi[1],
                a5,
                0,
                0);
      v7 = v19;
    }
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v7;
}
