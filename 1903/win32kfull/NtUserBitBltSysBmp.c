/*
 * XREFs of NtUserBitBltSysBmp @ 0x1C000B9D0
 * Callers:
 *     <none>
 * Callees:
 *     GetOemBitmapInfoForDpi @ 0x1C000BAC8 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C000BBD8 (PrepareHDCBITSBitmap.c)
 *     GreGetDCDpiScaleValue @ 0x1C000BD58 (GreGetDCDpiScaleValue.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C0071658 (GreStretchBltInternal.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 */

__int64 __fastcall NtUserBitBltSysBmp(HDC a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  int v7; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  HDC v12; // r15
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // r14
  __int16 *v15; // rdi
  int v16; // eax
  int DCDpiScaleValue; // eax

  v7 = 0;
  EnterCrit(0LL, 1LL);
  if ( a4 >= 0x5D )
  {
    UserSetLastError(87LL);
  }
  else
  {
    v12 = (HDC)PrepareHDCBITSBitmap(a1);
    if ( v12 )
    {
      DpiForSystem = GetDpiForSystem(v11, v10);
      OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, DpiForSystem);
      v15 = 0LL;
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
      {
        DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
        if ( DCDpiScaleValue > 1 )
          v15 = (__int16 *)GetOemBitmapInfoForDpi(a4, (unsigned int)(96 * DCDpiScaleValue));
      }
      if ( v15 )
        v16 = GreStretchBltInternal(a1, a2, a3, OemBitmapInfoForDpi[3], v12, *v15, v15[1], v15[2], v15[3], a5, 0, 0);
      else
        v16 = NtGdiBitBltInternal(
                a1,
                a2,
                a3,
                (unsigned int)OemBitmapInfoForDpi[2],
                OemBitmapInfoForDpi[3],
                v12,
                *OemBitmapInfoForDpi,
                OemBitmapInfoForDpi[1],
                a5,
                0,
                0);
      v7 = v16;
    }
  }
  UserSessionSwitchLeaveCrit();
  return v7;
}
