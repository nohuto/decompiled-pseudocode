/*
 * XREFs of AcquireCriticalSectionAndCheckState @ 0x1C00A56A0
 * Callers:
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00A5640 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C008B050 (UserSessionSwitchEnterCrit.c)
 */

__int64 __fastcall AcquireCriticalSectionAndCheckState(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  int v3; // ebx

  result = UserSessionSwitchEnterCrit(a1);
  v3 = result;
  if ( (int)result >= 0 )
  {
    if ( gProtocolType )
      v3 = -1071774240;
    if ( v3 < 0 )
    {
      UserSessionSwitchLeaveCrit(0LL, v2);
      return (unsigned int)v3;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
