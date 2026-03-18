/*
 * XREFs of UpdateGraphicsDeviceList @ 0x1C004F09C
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C004E670 (NtUserEnumDisplayDevices.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00A5640 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C004F0F0 (DrvUpdateGraphicsDeviceList.c)
 *     UserIsWddmConnectedSession @ 0x1C004FD20 (UserIsWddmConnectedSession.c)
 *     SafeEnableMDEV @ 0x1C00BAC60 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00BAD40 (SafeDisableMDEV.c)
 */

__int64 __fastcall UpdateGraphicsDeviceList(unsigned int *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax

  v3 = 0;
  result = UserIsWddmConnectedSession(a1, a2);
  if ( (_DWORD)result )
  {
    result = DrvUpdateGraphicsDeviceList(0LL, gProtocolType == 0);
    if ( !(_DWORD)result )
    {
      result = SafeDisableMDEV(1LL);
      if ( (_DWORD)result )
      {
        LOBYTE(v3) = gProtocolType == 0;
        DrvUpdateGraphicsDeviceList(1LL, v3);
        SafeEnableMDEV(1LL);
        result = xxxUserResetDisplayDevice();
        v3 = 1;
      }
    }
  }
  *a1 = v3;
  return result;
}
