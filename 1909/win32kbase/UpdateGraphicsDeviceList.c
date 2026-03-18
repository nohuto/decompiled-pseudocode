/*
 * XREFs of UpdateGraphicsDeviceList @ 0x1C003C2AC
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C003B880 (NtUserEnumDisplayDevices.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00A45F0 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     DrvUpdateGraphicsDeviceList @ 0x1C003C300 (DrvUpdateGraphicsDeviceList.c)
 *     UserIsWddmConnectedSession @ 0x1C003CF30 (UserIsWddmConnectedSession.c)
 *     SafeEnableMDEV @ 0x1C00B7C00 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00B7CE0 (SafeDisableMDEV.c)
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
