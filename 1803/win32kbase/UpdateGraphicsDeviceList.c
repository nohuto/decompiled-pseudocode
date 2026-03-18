/*
 * XREFs of UpdateGraphicsDeviceList @ 0x1C0042224
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C0041A10 (NtUserEnumDisplayDevices.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00C03E0 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C0042270 (DrvUpdateGraphicsDeviceList.c)
 *     SafeDisableMDEV @ 0x1C00A6C60 (SafeDisableMDEV.c)
 *     SafeEnableMDEV @ 0x1C00A6CB0 (SafeEnableMDEV.c)
 */

__int64 __fastcall UpdateGraphicsDeviceList(int *a1)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = 0;
  result = IsRemoteConnection();
  if ( !(_DWORD)result )
  {
    result = DrvUpdateGraphicsDeviceList(0LL, 1LL);
    if ( !(_DWORD)result )
    {
      result = SafeDisableMDEV(1LL);
      if ( (_DWORD)result )
      {
        DrvUpdateGraphicsDeviceList(1LL, 1LL);
        SafeEnableMDEV(1LL);
        result = xxxUserResetDisplayDevice();
        v2 = 1;
      }
    }
  }
  *a1 = v2;
  return result;
}
