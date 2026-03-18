/*
 * XREFs of AcquireCriticalSectionAndCheckState @ 0x1C0091070
 * Callers:
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0091010 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C002BCB0 (UserSessionSwitchEnterCrit.c)
 */

__int64 AcquireCriticalSectionAndCheckState()
{
  __int64 result; // rax
  int v1; // ebx

  result = UserSessionSwitchEnterCrit();
  v1 = result;
  if ( (int)result >= 0 )
  {
    if ( gProtocolType )
      v1 = -1071774240;
    if ( v1 < 0 )
    {
      UserSessionSwitchLeaveCrit();
      return (unsigned int)v1;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
