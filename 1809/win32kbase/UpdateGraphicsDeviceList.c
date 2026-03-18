/*
 * XREFs of UpdateGraphicsDeviceList @ 0x1C0016194
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C00157E0 (NtUserEnumDisplayDevices.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0091010 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C00161E0 (DrvUpdateGraphicsDeviceList.c)
 *     UserIsWddmConnectedSession @ 0x1C0016E18 (UserIsWddmConnectedSession.c)
 *     SafeEnableMDEV @ 0x1C00A6220 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00A62F0 (SafeDisableMDEV.c)
 */

__int64 __fastcall UpdateGraphicsDeviceList(unsigned int *a1)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  v2 = 0;
  result = UserIsWddmConnectedSession();
  if ( (_DWORD)result )
  {
    result = DrvUpdateGraphicsDeviceList(0LL, gProtocolType == 0);
    if ( !(_DWORD)result )
    {
      result = SafeDisableMDEV(1LL);
      if ( (_DWORD)result )
      {
        LOBYTE(v2) = gProtocolType == 0;
        DrvUpdateGraphicsDeviceList(1LL, v2);
        SafeEnableMDEV(1LL);
        result = xxxUserResetDisplayDevice();
        v2 = 1;
      }
    }
  }
  *a1 = v2;
  return result;
}
