/*
 * XREFs of NtUserBitBltSysBmp @ 0x1C00EAB30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C00BB5E8 (GreStretchBltInternal.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00EAC28 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C00EAD38 (PrepareHDCBITSBitmap.c)
 *     GreGetDCDpiScaleValue @ 0x1C00EAEB8 (GreGetDCDpiScaleValue.c)
 */

__int64 __fastcall NtUserBitBltSysBmp(HDC a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  int v7; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  HDC v16; // r15
  unsigned int DpiForSystem; // eax
  __int16 *OemBitmapInfoForDpi; // r14
  __int16 *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
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
    v16 = (HDC)PrepareHDCBITSBitmap(a1);
    if ( v16 )
    {
      DpiForSystem = GetDpiForSystem(v14, v13, v15);
      OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi(a4, DpiForSystem);
      v19 = 0LL;
      if ( (W32GetCurrentThreadDpiAwarenessContext(v21, v20, v22) & 0xF) == 0 )
      {
        DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
        if ( DCDpiScaleValue > 1 )
          v19 = (__int16 *)GetOemBitmapInfoForDpi(a4, (unsigned int)(96 * DCDpiScaleValue));
      }
      v23 = OemBitmapInfoForDpi[2];
      if ( v19 )
        v24 = GreStretchBltInternal(
                a1,
                a2,
                a3,
                v23,
                OemBitmapInfoForDpi[3],
                v16,
                *v19,
                v19[1],
                v19[2],
                v19[3],
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
                v16,
                *OemBitmapInfoForDpi,
                OemBitmapInfoForDpi[1],
                a5,
                0,
                0);
      v7 = v24;
    }
  }
  UserSessionSwitchLeaveCrit(v14);
  return v7;
}
